; classic PE:6a70b91c:0270a000 C:\Users\WIN11\Downloads\df_53_16_win\Dwarf Fortress.exe
; appearance code 0x140715750..0x140717c7c; unwind end 0x140717cd4
0x140715750: mov    QWORD PTR [rsp+0x10],rbx
0x140715755: mov    QWORD PTR [rsp+0x18],rsi
0x14071575a: mov    QWORD PTR [rsp+0x20],rdi
0x14071575f: push   rbp
0x140715760: push   r12
0x140715762: push   r13
0x140715764: push   r14
0x140715766: push   r15
0x140715768: lea    rbp,[rsp-0x1c0]
0x140715770: sub    rsp,0x2c0
0x140715777: mov    rax,QWORD PTR [rip+0x11808c2]        # 0x141896040
0x14071577e: xor    rax,rsp
0x140715781: mov    QWORD PTR [rbp+0x1b0],rax
0x140715788: mov    rsi,rcx
0x14071578b: mov    QWORD PTR [rsp+0x40],rcx
0x140715790: xor    r15d,r15d
0x140715793: mov    QWORD PTR [rcx+0x13f8],r15
0x14071579a: lea    rax,[rcx+0x13e8]
0x1407157a1: cmp    QWORD PTR [rcx+0x1400],0xf
0x1407157a9: jbe    0x1407157b2
0x1407157ab: mov    rax,QWORD PTR [rcx+0x13e8]
0x1407157b2: mov    BYTE PTR [rax],r15b
0x1407157b5: movsx  r8,WORD PTR [rcx+0xa4]
0x1407157bd: test   r8w,r8w
0x1407157c1: js     0x140717c2c
0x1407157c7: mov    rcx,QWORD PTR [rip+0x1dd1192]        # 0x1424e6960
0x1407157ce: mov    rax,rcx
0x1407157d1: mov    rdx,QWORD PTR [rip+0x1dd1180]        # 0x1424e6958
0x1407157d8: sub    rax,rdx
0x1407157db: sar    rax,0x3
0x1407157df: cmp    r8,rax
0x1407157e2: jae    0x140717c2c
0x1407157e8: mov    r13,QWORD PTR [rdx+r8*8]
0x1407157ec: test   r13,r13
0x1407157ef: je     0x140717c2c
0x1407157f5: movsx  r9,WORD PTR [rsi+0x12c]
0x1407157fd: sub    rcx,rdx
0x140715800: sar    rcx,0x3
0x140715804: cmp    r8,rcx
0x140715807: jae    0x140717c2c
0x14071580d: test   r9w,r9w
0x140715811: js     0x140717c2c
0x140715817: mov    rcx,QWORD PTR [r13+0x178]
0x14071581e: mov    rax,QWORD PTR [r13+0x180]
0x140715825: sub    rax,rcx
0x140715828: sar    rax,0x3
0x14071582c: cmp    r9,rax
0x14071582f: jae    0x140717c2c
0x140715835: mov    r14,QWORD PTR [rcx+r9*8]
0x140715839: test   r14,r14
0x14071583c: je     0x140717c2c
0x140715842: mov    rcx,rsi
0x140715845: call   0x1413adfa0
0x14071584a: test   rax,rax
0x14071584d: je     0x14071585c
0x14071584f: cmp    DWORD PTR [rax+0x90],r15d
0x140715856: sete   r11b
0x14071585a: jmp    0x14071585f
0x14071585c: mov    r11d,r15d
0x14071585f: mov    r8d,r15d
0x140715862: mov    DWORD PTR [rsp+0x34],r15d
0x140715867: mov    edx,r15d
0x14071586a: mov    DWORD PTR [rsp+0x30],edx
0x14071586e: cmp    DWORD PTR [r14+0x85c],r15d
0x140715875: jle    0x1407158d9
0x140715877: mov    ebx,DWORD PTR [r14+0x1234]
0x14071587e: mov    rcx,rsi
0x140715881: call   0x1413c5bc0
0x140715886: mov    ecx,eax
0x140715888: sub    ecx,ebx
0x14071588a: mov    eax,0x66666667 ; PRINTABLE_IMMEDIATE_BYTES 'gfff'
0x14071588f: imul   ecx
0x140715891: mov    r8d,edx
0x140715894: sar    r8d,0x2
0x140715898: mov    ecx,r8d
0x14071589b: shr    ecx,0x1f
0x14071589e: add    r8d,ecx
0x1407158a1: mov    DWORD PTR [rsp+0x34],r8d
0x1407158a6: test   r11b,r11b
0x1407158a9: je     0x1407158d6
0x1407158ab: mov    ecx,DWORD PTR [rsi+0x604]
0x1407158b1: sub    ecx,DWORD PTR [rsi+0x614]
0x1407158b7: sub    ecx,ebx
0x1407158b9: mov    eax,0x66666667 ; PRINTABLE_IMMEDIATE_BYTES 'gfff'
0x1407158be: imul   ecx
0x1407158c0: sar    edx,0x2
0x1407158c3: mov    eax,edx
0x1407158c5: shr    eax,0x1f
0x1407158c8: add    edx,eax
0x1407158ca: cmp    edx,r8d
0x1407158cd: cmovl  r8d,edx
0x1407158d1: mov    DWORD PTR [rsp+0x34],r8d
0x1407158d6: mov    edx,r15d
0x1407158d9: cmp    DWORD PTR [r14+0x858],r15d
0x1407158e0: jle    0x140715918
0x1407158e2: mov    ecx,DWORD PTR [r14+0x12a4]
0x1407158e9: mov    eax,0x7d0
0x1407158ee: cmp    ecx,eax
0x1407158f0: cmovge ecx,eax
0x1407158f3: sub    eax,ecx
0x1407158f5: imul   eax,eax,0x1f4
0x1407158fb: mov    ecx,DWORD PTR [rsi+0x9a0]
0x140715901: sub    ecx,eax
0x140715903: mov    eax,0x68db8bad
0x140715908: imul   ecx
0x14071590a: sar    edx,0xb
0x14071590d: mov    eax,edx
0x14071590f: shr    eax,0x1f
0x140715912: add    edx,eax
0x140715914: mov    DWORD PTR [rsp+0x30],edx
0x140715918: lea    rcx,[rbp-0x30]
0x14071591c: call   0x1405be370
0x140715921: nop
0x140715922: mov    QWORD PTR [rbp-0x30],r13
0x140715926: mov    QWORD PTR [rbp-0x28],r14
0x14071592a: mov    DWORD PTR [rbp-0x20],r8d
0x14071592e: mov    DWORD PTR [rbp-0x1c],edx
0x140715931: mov    rbx,QWORD PTR [rsi+0x6f0]
0x140715938: sub    rbx,QWORD PTR [rsi+0x6e8]
0x14071593f: sar    rbx,0x2
0x140715943: mov    rdi,QWORD PTR [rbp-0x10]
0x140715947: mov    rcx,rdi
0x14071594a: mov    rax,QWORD PTR [rbp-0x18]
0x14071594e: sub    rcx,rax
0x140715951: sar    rcx,0x2
0x140715955: cmp    rbx,rcx
0x140715958: jae    0x140715960
0x14071595a: lea    rax,[rax+rbx*4]
0x14071595e: jmp    0x14071599d
0x140715960: jbe    0x1407159a1
0x140715962: mov    rax,QWORD PTR [rbp-0x8]
0x140715966: sub    rax,QWORD PTR [rbp-0x18]
0x14071596a: sar    rax,0x2
0x14071596e: cmp    rbx,rax
0x140715971: jbe    0x140715981
0x140715973: mov    rdx,rbx
0x140715976: lea    rcx,[rbp-0x18]
0x14071597a: call   0x140070cc0
0x14071597f: jmp    0x1407159a1
0x140715981: sub    rbx,rcx
0x140715984: lea    rbx,[rbx*4+0x0]
0x14071598c: mov    r8,rbx
0x14071598f: xor    edx,edx
0x140715991: mov    rcx,rdi
0x140715994: call   0x141535a06
0x140715999: lea    rax,[rbx+rdi*1]
0x14071599d: mov    QWORD PTR [rbp-0x10],rax
0x1407159a1: mov    rbx,QWORD PTR [rsi+0x708]
0x1407159a8: sub    rbx,QWORD PTR [rsi+0x700]
0x1407159af: sar    rbx,0x2
0x1407159b3: mov    rdi,QWORD PTR [rbp+0x8]
0x1407159b7: mov    rcx,rdi
0x1407159ba: mov    rax,QWORD PTR [rbp+0x0]
0x1407159be: sub    rcx,rax
0x1407159c1: sar    rcx,0x2
0x1407159c5: cmp    rbx,rcx
0x1407159c8: jae    0x1407159d0
0x1407159ca: lea    rax,[rax+rbx*4]
0x1407159ce: jmp    0x140715a0d
0x1407159d0: jbe    0x140715a11
0x1407159d2: mov    rax,QWORD PTR [rbp+0x10]
0x1407159d6: sub    rax,QWORD PTR [rbp+0x0]
0x1407159da: sar    rax,0x2
0x1407159de: cmp    rbx,rax
0x1407159e1: jbe    0x1407159f1
0x1407159e3: mov    rdx,rbx
0x1407159e6: lea    rcx,[rbp+0x0]
0x1407159ea: call   0x140070cc0
0x1407159ef: jmp    0x140715a11
0x1407159f1: sub    rbx,rcx
0x1407159f4: lea    rbx,[rbx*4+0x0]
0x1407159fc: mov    r8,rbx
0x1407159ff: xor    edx,edx
0x140715a01: mov    rcx,rdi
0x140715a04: call   0x141535a06
0x140715a09: lea    rax,[rbx+rdi*1]
0x140715a0d: mov    QWORD PTR [rbp+0x8],rax
0x140715a11: mov    r9d,r15d
0x140715a14: mov    rcx,QWORD PTR [rsi+0x6e8]
0x140715a1b: mov    rax,QWORD PTR [rsi+0x6f0]
0x140715a22: sub    rax,rcx
0x140715a25: sar    rax,0x2
0x140715a29: test   rax,rax
0x140715a2c: je     0x140715aa2
0x140715a2e: mov    rdx,r15
0x140715a31: mov    r8,r15
0x140715a34: test   r9d,r9d
0x140715a37: jns    0x140715a40
0x140715a39: mov    ecx,0x64
0x140715a3e: jmp    0x140715a76
0x140715a40: mov    ecx,DWORD PTR [rcx+r8*1]
0x140715a44: mov    r10,QWORD PTR [rsi+0x8b0]
0x140715a4b: mov    rax,QWORD PTR [rsi+0x8b8]
0x140715a52: sub    rax,r10
0x140715a55: sar    rax,0x2
0x140715a59: cmp    rdx,rax
0x140715a5c: jae    0x140715a76
0x140715a5e: imul   ecx,DWORD PTR [r10+r8*1]
0x140715a63: mov    eax,0x51eb851f
0x140715a68: imul   ecx
0x140715a6a: mov    ecx,edx
0x140715a6c: sar    ecx,0x5
0x140715a6f: mov    eax,ecx
0x140715a71: shr    eax,0x1f
0x140715a74: add    ecx,eax
0x140715a76: mov    rax,QWORD PTR [rbp-0x18]
0x140715a7a: mov    DWORD PTR [rax+r8*1],ecx
0x140715a7e: inc    r9d
0x140715a81: add    r8,0x4
0x140715a85: mov    rcx,QWORD PTR [rsi+0x6e8]
0x140715a8c: movsxd rdx,r9d
0x140715a8f: mov    rax,QWORD PTR [rsi+0x6f0]
0x140715a96: sub    rax,rcx
0x140715a99: sar    rax,0x2
0x140715a9d: cmp    rdx,rax
0x140715aa0: jb     0x140715a34
0x140715aa2: mov    r9d,r15d
0x140715aa5: mov    rcx,QWORD PTR [rsi+0x700]
0x140715aac: mov    rax,QWORD PTR [rsi+0x708]
0x140715ab3: sub    rax,rcx
0x140715ab6: sar    rax,0x2
0x140715aba: test   rax,rax
0x140715abd: je     0x140715b33
0x140715abf: mov    rdx,r15
0x140715ac2: mov    r8,r15
0x140715ac5: test   r9d,r9d
0x140715ac8: jns    0x140715ad1
0x140715aca: mov    ecx,0x64
0x140715acf: jmp    0x140715b07
0x140715ad1: mov    ecx,DWORD PTR [rcx+r8*1]
0x140715ad5: mov    r10,QWORD PTR [rsi+0x8c8]
0x140715adc: mov    rax,QWORD PTR [rsi+0x8d0]
0x140715ae3: sub    rax,r10
0x140715ae6: sar    rax,0x2
0x140715aea: cmp    rdx,rax
0x140715aed: jae    0x140715b07
0x140715aef: imul   ecx,DWORD PTR [r10+r8*1]
0x140715af4: mov    eax,0x51eb851f
0x140715af9: imul   ecx
0x140715afb: mov    ecx,edx
0x140715afd: sar    ecx,0x5
0x140715b00: mov    eax,ecx
0x140715b02: shr    eax,0x1f
0x140715b05: add    ecx,eax
0x140715b07: mov    rax,QWORD PTR [rbp+0x0]
0x140715b0b: mov    DWORD PTR [rax+r8*1],ecx
0x140715b0f: inc    r9d
0x140715b12: add    r8,0x4
0x140715b16: mov    rcx,QWORD PTR [rsi+0x700]
0x140715b1d: movsxd rdx,r9d
0x140715b20: mov    rax,QWORD PTR [rsi+0x708]
0x140715b27: sub    rax,rcx
0x140715b2a: sar    rax,0x2
0x140715b2e: cmp    rdx,rax
0x140715b31: jb     0x140715ac5
0x140715b33: mov    rax,QWORD PTR [rsi+0x5f8]
0x140715b3a: mov    QWORD PTR [rbp+0x18],rax
0x140715b3e: lea    r8,[rsi+0x4f0]
0x140715b45: lea    rax,[rbp+0x20]
0x140715b49: cmp    rax,r8
0x140715b4c: je     0x140715b65
0x140715b4e: mov    rdx,QWORD PTR [r8]
0x140715b51: mov    r8,QWORD PTR [r8+0x8]
0x140715b55: sub    r8,rdx
0x140715b58: sar    r8,0x2
0x140715b5c: lea    rcx,[rbp+0x20]
0x140715b60: call   0x1400ba8d0
0x140715b65: lea    r8,[rsi+0x538]
0x140715b6c: lea    rax,[rbp+0x38]
0x140715b70: cmp    rax,r8
0x140715b73: je     0x140715b8c
0x140715b75: mov    rdx,QWORD PTR [r8]
0x140715b78: mov    r8,QWORD PTR [r8+0x8]
0x140715b7c: sub    r8,rdx
0x140715b7f: sar    r8,0x2
0x140715b83: lea    rcx,[rbp+0x38]
0x140715b87: call   0x1400ba8d0
0x140715b8c: lea    r8,[rsi+0x720]
0x140715b93: lea    rax,[rbp+0x50]
0x140715b97: cmp    rax,r8
0x140715b9a: je     0x140715bb2
0x140715b9c: mov    rdx,QWORD PTR [r8]
0x140715b9f: mov    r8,QWORD PTR [r8+0x8]
0x140715ba3: sub    r8,rdx
0x140715ba6: sar    r8,1
0x140715ba9: lea    rcx,[rbp+0x50]
0x140715bad: call   0x140070450
0x140715bb2: lea    r8,[rsi+0x738]
0x140715bb9: lea    rax,[rbp+0x68]
0x140715bbd: cmp    rax,r8
0x140715bc0: je     0x140715bd9
0x140715bc2: mov    rdx,QWORD PTR [r8]
0x140715bc5: mov    r8,QWORD PTR [r8+0x8]
0x140715bc9: sub    r8,rdx
0x140715bcc: sar    r8,0x2
0x140715bd0: lea    rcx,[rbp+0x68]
0x140715bd4: call   0x1400ba8d0
0x140715bd9: lea    r8,[rsi+0x750]
0x140715be0: lea    rax,[rbp+0x80]
0x140715be7: cmp    rax,r8
0x140715bea: je     0x140715c06
0x140715bec: mov    rdx,QWORD PTR [r8]
0x140715bef: mov    r8,QWORD PTR [r8+0x8]
0x140715bf3: sub    r8,rdx
0x140715bf6: sar    r8,0x2
0x140715bfa: lea    rcx,[rbp+0x80]
0x140715c01: call   0x1400ba8d0
0x140715c06: lea    r8,[rsi+0x768]
0x140715c0d: lea    rax,[rbp+0x98]
0x140715c14: cmp    rax,r8
0x140715c17: je     0x140715c33
0x140715c19: mov    rdx,QWORD PTR [r8]
0x140715c1c: mov    r8,QWORD PTR [r8+0x8]
0x140715c20: sub    r8,rdx
0x140715c23: sar    r8,0x2
0x140715c27: lea    rcx,[rbp+0x98]
0x140715c2e: call   0x1400ba8d0
0x140715c33: lea    r8,[rsi+0x780]
0x140715c3a: lea    rax,[rbp+0xb0]
0x140715c41: cmp    rax,r8
0x140715c44: je     0x140715c60
0x140715c46: mov    rdx,QWORD PTR [r8]
0x140715c49: mov    r8,QWORD PTR [r8+0x8]
0x140715c4d: sub    r8,rdx
0x140715c50: sar    r8,0x2
0x140715c54: lea    rcx,[rbp+0xb0]
0x140715c5b: call   0x1400ba8d0
0x140715c60: lea    r8,[rsi+0x7b8]
0x140715c67: lea    rax,[rbp+0xc8]
0x140715c6e: cmp    rax,r8
0x140715c71: je     0x140715c8d
0x140715c73: mov    rdx,QWORD PTR [r8]
0x140715c76: mov    r8,QWORD PTR [r8+0x8]
0x140715c7a: sub    r8,rdx
0x140715c7d: sar    r8,0x2
0x140715c81: lea    rcx,[rbp+0xc8]
0x140715c88: call   0x1400ba8d0
0x140715c8d: lea    rax,[rsi+0x5b0]
0x140715c94: mov    QWORD PTR [rbp+0xe0],rax
0x140715c9b: mov    r8d,DWORD PTR [rsi+0x390]
0x140715ca2: mov    edx,DWORD PTR [rip+0x1c6c23c]        # 0x142381ee4
0x140715ca8: cmp    r8d,0xffffffff
0x140715cac: je     0x140715cdb
0x140715cae: cmp    edx,0xffffffff
0x140715cb1: je     0x140715cdb
0x140715cb3: cmp    DWORD PTR [rip+0x11805ae],0x1        # 0x141896268
0x140715cba: ja     0x140715cdb
0x140715cbc: mov    eax,DWORD PTR [rip+0x1c58942]        # 0x14236e604
0x140715cc2: sub    eax,DWORD PTR [rsi+0x38c]
0x140715cc8: dec    eax
0x140715cca: imul   ecx,eax,0x150
0x140715cd0: sub    edx,r8d
0x140715cd3: add    edx,0x62700
0x140715cd9: jmp    0x140715cf4
0x140715cdb: mov    ecx,DWORD PTR [rsi+0x38c]
0x140715ce1: mov    eax,DWORD PTR [rip+0x1c5891d]        # 0x14236e604
0x140715ce7: sub    eax,ecx
0x140715ce9: cmp    edx,0xffffffff
0x140715cec: je     0x140715d09
0x140715cee: imul   ecx,eax,0x150
0x140715cf4: mov    eax,0x1b4e81b5
0x140715cf9: imul   edx
0x140715cfb: sar    edx,0x7
0x140715cfe: mov    eax,edx
0x140715d00: shr    eax,0x1f
0x140715d03: add    edx,ecx
0x140715d05: add    eax,edx
0x140715d07: jmp    0x140715d0f
0x140715d09: imul   eax,eax,0x150
0x140715d0f: mov    DWORD PTR [rbp+0xe8],eax
0x140715d15: movsxd rdx,DWORD PTR [rsi+0xa4]
0x140715d1c: mov    DWORD PTR [rbp+0xec],edx
0x140715d22: movsx  rcx,WORD PTR [rsi+0x12c]
0x140715d2a: mov    DWORD PTR [rbp+0xf0],ecx
0x140715d30: movzx  eax,BYTE PTR [rsi+0x12e]
0x140715d37: mov    BYTE PTR [rbp+0xf4],al
0x140715d3d: mov    r10d,0xffffffff
0x140715d43: test   dx,dx
0x140715d46: js     0x140715dbe
0x140715d48: mov    r8,QWORD PTR [rip+0x1dd0c09]        # 0x1424e6958
0x140715d4f: movsx  r9,dx
0x140715d53: mov    rax,QWORD PTR [rip+0x1dd0c06]        # 0x1424e6960
0x140715d5a: sub    rax,r8
0x140715d5d: sar    rax,0x3
0x140715d61: cmp    r9,rax
0x140715d64: jae    0x140715dbe
0x140715d66: test   cx,cx
0x140715d69: js     0x140715dbe
0x140715d6b: mov    rax,QWORD PTR [r8+r9*8]
0x140715d6f: mov    r8,QWORD PTR [rax+0x178]
0x140715d76: mov    rax,QWORD PTR [rax+0x180]
0x140715d7d: sub    rax,r8
0x140715d80: sar    rax,0x3
0x140715d84: cmp    rcx,rax
0x140715d87: jae    0x140715dbe
0x140715d89: mov    rax,QWORD PTR [r8+rcx*8]
0x140715d8d: test   rax,rax
0x140715d90: je     0x140715dbe
0x140715d92: movzx  ecx,WORD PTR [rax+0x3c76]
0x140715d99: mov    WORD PTR [rbp+0xf6],cx
0x140715da0: mov    r8d,DWORD PTR [rax+0x3c78]
0x140715da7: mov    DWORD PTR [rbp+0xf8],r8d
0x140715dae: movzx  eax,WORD PTR [rax+0x3c74]
0x140715db5: mov    WORD PTR [rbp+0xfc],ax
0x140715dbc: jmp    0x140715dcf
0x140715dbe: mov    ecx,r10d
0x140715dc1: mov    WORD PTR [rbp+0xf6],cx
0x140715dc8: mov    r8d,DWORD PTR [rbp+0xf8]
0x140715dcf: cmp    edx,DWORD PTR [rsi+0xd90]
0x140715dd5: jne    0x140715e0d
0x140715dd7: mov    r9d,DWORD PTR [rsi+0xc30]
0x140715dde: cmp    r9d,r10d
0x140715de1: je     0x140715e0d
0x140715de3: lea    eax,[rcx-0x13]
0x140715de6: mov    r10d,0xc7
0x140715dec: cmp    ax,r10w
0x140715df0: ja     0x140715e0d
0x140715df2: cmp    r8d,edx
0x140715df5: jne    0x140715e0d
0x140715df7: mov    eax,0xc8
0x140715dfc: add    cx,ax
0x140715dff: mov    WORD PTR [rbp+0xf6],cx
0x140715e06: mov    DWORD PTR [rbp+0xf8],r9d
0x140715e0d: lea    rcx,[rbp-0x30]
0x140715e11: call   0x14070ca90
0x140715e16: mov    DWORD PTR [rsp+0x4c],0x7cf
0x140715e1e: mov    rbx,QWORD PTR [rbp+0x118]
0x140715e25: mov    rdi,QWORD PTR [rbp+0x120]
0x140715e2c: mov    QWORD PTR [rbp-0x38],rdi
0x140715e30: lea    r9,[r14+0x1608]
0x140715e37: mov    QWORD PTR [rbp-0x80],r9
0x140715e3b: lea    rax,[rsi+0x13e8]
0x140715e42: mov    QWORD PTR [rsp+0x68],rax
0x140715e47: mov    edx,0xf
0x140715e4c: mov    QWORD PTR [rbp-0x40],rbx
0x140715e50: cmp    rbx,rdi
0x140715e53: je     0x140717b73
0x140715e59: mov    QWORD PTR [rsp+0x58],r13
0x140715e5e: mov    rcx,r14
0x140715e61: mov    QWORD PTR [rbp-0x68],rcx
0x140715e65: jae    0x140717b73
0x140715e6b: mov    r11,QWORD PTR [rbx]
0x140715e6e: mov    QWORD PTR [rbp-0x60],r11
0x140715e72: mov    r14,QWORD PTR [r11+0x38]
0x140715e76: mov    r12,QWORD PTR [r11+0x40]
0x140715e7a: sub    r12,r14
0x140715e7d: sar    r12,0x2
0x140715e81: test   r12,r12
0x140715e84: je     0x140716534
0x140715e8a: cmp    WORD PTR [r11],0x0
0x140715e8f: jne    0x140717b60
0x140715e95: mov    DWORD PTR [rbp-0x78],0xffff8ad0
0x140715e9c: mov    DWORD PTR [rsp+0x70],0xffff8ad0
0x140715ea4: mov    DWORD PTR [rsp+0x48],0xffff8ad0
0x140715eac: mov    esi,0xffff8ad0
0x140715eb1: mov    edx,esi
0x140715eb3: xor    eax,eax
0x140715eb5: mov    r11d,esi
0x140715eb8: mov    r13d,eax
0x140715ebb: mov    rcx,QWORD PTR [rbp-0x60]
0x140715ebf: mov    rdi,QWORD PTR [rcx+0x50]
0x140715ec3: mov    rbx,QWORD PTR [r9]
0x140715ec6: mov    rcx,QWORD PTR [rsp+0x40]
0x140715ecb: mov    r8,QWORD PTR [rcx+0x6e8]
0x140715ed2: mov    QWORD PTR [rbp-0x50],r8
0x140715ed6: sub    rdi,r14
0x140715ed9: nop    DWORD PTR [rax+0x0]
0x140715ee0: cmp    DWORD PTR [r14+rdi*1],r15d
0x140715ee4: cmovg  r15d,DWORD PTR [r14+rdi*1]
0x140715ee9: movsxd rax,DWORD PTR [r14]
0x140715eec: mov    rcx,QWORD PTR [rbx+rax*8]
0x140715ef0: mov    r9d,DWORD PTR [r8+rax*4]
0x140715ef4: mov    r10d,DWORD PTR [rcx+0x10]
0x140715ef8: movsx  r8d,WORD PTR [rcx]
0x140715efc: test   r8d,r8d
0x140715eff: je     0x140715f2c
0x140715f01: sub    r8d,0x1
0x140715f05: je     0x140715f1d
0x140715f07: mov    ecx,DWORD PTR [rsp+0x70]
0x140715f0b: cmp    r8d,0x1
0x140715f0f: jne    0x140715f3b
0x140715f11: mov    DWORD PTR [rbp-0x78],r9d
0x140715f15: mov    esi,r9d
0x140715f18: sub    esi,r10d
0x140715f1b: jmp    0x140715f3b
0x140715f1d: mov    ecx,r9d
0x140715f20: mov    DWORD PTR [rsp+0x70],ecx
0x140715f24: mov    edx,r9d
0x140715f27: sub    edx,r10d
0x140715f2a: jmp    0x140715f3b
0x140715f2c: mov    DWORD PTR [rsp+0x48],r9d
0x140715f31: mov    r11d,r9d
0x140715f34: sub    r11d,r10d
0x140715f37: mov    ecx,DWORD PTR [rsp+0x70]
0x140715f3b: inc    r13d
0x140715f3e: add    r14,0x4
0x140715f42: movsxd rax,r13d
0x140715f45: cmp    rax,r12
0x140715f48: mov    r8,QWORD PTR [rbp-0x50]
0x140715f4c: jb     0x140715ee0
0x140715f4e: mov    r14,QWORD PTR [rbp-0x68]
0x140715f52: mov    r12,QWORD PTR [rsp+0x58]
0x140715f57: mov    r13,r12
0x140715f5a: cmp    r15d,DWORD PTR [rsp+0x4c]
0x140715f5f: mov    rbx,QWORD PTR [rbp-0x40]
0x140715f63: mov    rdi,QWORD PTR [rbp-0x38]
0x140715f67: jle    0x1407162c7
0x140715f6d: mov    DWORD PTR [rsp+0x4c],r15d
0x140715f72: cmp    esi,0xffff8ad0
0x140715f78: je     0x1407162d1
0x140715f7e: cmp    r11d,0xffff8ad0
0x140715f85: je     0x140716046
0x140715f8b: cmp    edx,0xffff8ad0
0x140715f91: je     0x1407161b8
0x140715f97: movsxd rcx,ecx
0x140715f9a: movsxd rax,DWORD PTR [rbp-0x78]
0x140715f9e: imul   rcx,rax
0x140715fa2: movsxd rax,DWORD PTR [rsp+0x48]
0x140715fa7: imul   rcx,rax
0x140715fab: cmp    rcx,0x16e360
0x140715fb2: jl     0x140715fbd
0x140715fb4: xor    r15d,r15d
0x140715fb7: movzx  edx,r15w
0x140715fbb: jmp    0x140716013
0x140715fbd: cmp    rcx,0x1312d0
0x140715fc4: jl     0x140715fcd
0x140715fc6: mov    edx,0x1
0x140715fcb: jmp    0x140716010
0x140715fcd: cmp    rcx,0x10c8e0
0x140715fd4: jl     0x140715fdd
0x140715fd6: mov    edx,0x2
0x140715fdb: jmp    0x140716010
0x140715fdd: cmp    rcx,0x7c830
0x140715fe4: jge    0x140715fed
0x140715fe6: mov    edx,0x1b
0x140715feb: jmp    0x140716010
0x140715fed: cmp    rcx,0xb98c0
0x140715ff4: jge    0x140715ffd
0x140715ff6: mov    edx,0x1a
0x140715ffb: jmp    0x140716010
0x140715ffd: cmp    rcx,0xde2b0
0x140716004: mov    edx,0x19
0x140716009: jl     0x140716010
0x14071600b: mov    edx,0x18
0x140716010: xor    r15d,r15d
0x140716013: mov    r8d,DWORD PTR [rsp+0x34]
0x140716018: mov    r9d,DWORD PTR [rsp+0x30]
0x14071601d: mov    rax,QWORD PTR [rsp+0x40]
0x140716022: mov    ecx,0x13e8
0x140716027: add    rcx,rax
0x14071602a: call   0x140714590
0x14071602f: mov    rsi,QWORD PTR [rsp+0x40]
0x140716034: mov    r9,QWORD PTR [rbp-0x80]
0x140716038: mov    edx,0xf
0x14071603d: add    rbx,0x8
0x140716041: jmp    0x140715e4c
0x140716046: cmp    edx,0xffff8ad0
0x14071604c: je     0x1407161ab
0x140716052: cmp    esi,0x32
0x140716055: jl     0x14071606d
0x140716057: cmp    edx,0x32
0x14071605a: jl     0x14071608b
0x14071605c: mov    rcx,QWORD PTR [rsp+0x68]
0x140716061: xor    r15d,r15d
0x140716064: movzx  edx,r15w
0x140716068: jmp    0x140716185
0x14071606d: cmp    esi,0xffffffce
0x140716070: jg     0x140716086
0x140716072: cmp    edx,0xffffffce
0x140716075: jg     0x1407160b8
0x140716077: mov    rcx,QWORD PTR [rsp+0x68]
0x14071607c: mov    edx,0x1b
0x140716081: jmp    0x140716182
0x140716086: cmp    esi,0xa
0x140716089: jl     0x1407160b3
0x14071608b: cmp    edx,0xa
0x14071608e: jl     0x14071609f
0x140716090: mov    rcx,QWORD PTR [rsp+0x68]
0x140716095: mov    edx,0x2
0x14071609a: jmp    0x140716182
0x14071609f: cmp    edx,0xfffffff6
0x1407160a2: jg     0x1407160e0
0x1407160a4: mov    rcx,QWORD PTR [rsp+0x68]
0x1407160a9: mov    edx,0x8
0x1407160ae: jmp    0x140716182
0x1407160b3: cmp    esi,0xfffffff6
0x1407160b6: jg     0x1407160e0
0x1407160b8: cmp    edx,0xa
0x1407160bb: jl     0x1407160cc
0x1407160bd: mov    rcx,QWORD PTR [rsp+0x68]
0x1407160c2: mov    edx,0x4
0x1407160c7: jmp    0x140716182
0x1407160cc: cmp    edx,0xfffffff6
0x1407160cf: jg     0x1407160e0
0x1407160d1: mov    rcx,QWORD PTR [rsp+0x68]
0x1407160d6: mov    edx,0x19
0x1407160db: jmp    0x140716182
0x1407160e0: mov    rcx,QWORD PTR [rsp+0x40]
0x1407160e5: add    rcx,0x13e8
0x1407160ec: cmp    edx,0x32
0x1407160ef: jl     0x1407160fb
0x1407160f1: mov    edx,0x5
0x1407160f6: jmp    0x140716182
0x1407160fb: cmp    edx,0x19
0x1407160fe: jl     0x140716107
0x140716100: mov    edx,0x6
0x140716105: jmp    0x140716182
0x140716107: cmp    edx,0xa
0x14071610a: jl     0x140716113
0x14071610c: mov    edx,0x7
0x140716111: jmp    0x140716182
0x140716113: cmp    edx,0xffffffce
0x140716116: jg     0x14071611f
0x140716118: mov    edx,0x9
0x14071611d: jmp    0x140716182
0x14071611f: cmp    edx,0xffffffe7
0x140716122: jg     0x14071612b
0x140716124: mov    edx,0xa
0x140716129: jmp    0x140716182
0x14071612b: cmp    edx,0xfffffff6
0x14071612e: jg     0x140716137
0x140716130: mov    edx,0xb
0x140716135: jmp    0x140716182
0x140716137: cmp    esi,0x32
0x14071613a: jl     0x140716143
0x14071613c: mov    edx,0xf
0x140716141: jmp    0x140716182
0x140716143: cmp    esi,0x19
0x140716146: jl     0x14071614f
0x140716148: mov    edx,0x10
0x14071614d: jmp    0x140716182
0x14071614f: cmp    esi,0xa
0x140716152: jl     0x14071615b
0x140716154: mov    edx,0x11
0x140716159: jmp    0x140716182
0x14071615b: cmp    esi,0xffffffce
0x14071615e: jg     0x140716167
0x140716160: mov    edx,0x15
0x140716165: jmp    0x140716182
0x140716167: cmp    esi,0xffffffe7
0x14071616a: jg     0x140716173
0x14071616c: mov    edx,0x16
0x140716171: jmp    0x140716182
0x140716173: cmp    esi,0xfffffff6
0x140716176: mov    edx,0x17
0x14071617b: jle    0x140716182
0x14071617d: mov    edx,0x18
0x140716182: xor    r15d,r15d
0x140716185: mov    r8d,DWORD PTR [rsp+0x34]
0x14071618a: mov    r9d,DWORD PTR [rsp+0x30]
0x14071618f: call   0x140714590
0x140716194: mov    rsi,QWORD PTR [rsp+0x40]
0x140716199: mov    r9,QWORD PTR [rbp-0x80]
0x14071619d: mov    edx,0xf
0x1407161a2: add    rbx,0x8
0x1407161a6: jmp    0x140715e4c
0x1407161ab: cmp    r11d,0xffff8ad0
0x1407161b2: je     0x140716260
0x1407161b8: movsxd rcx,DWORD PTR [rbp-0x78]
0x1407161bc: movsxd rax,DWORD PTR [rsp+0x48]
0x1407161c1: imul   rcx,rax
0x1407161c5: cmp    rcx,0x3a98
0x1407161cc: jl     0x1407161d7
0x1407161ce: xor    r15d,r15d
0x1407161d1: movzx  edx,r15w
0x1407161d5: jmp    0x14071622d
0x1407161d7: cmp    rcx,0x30d4
0x1407161de: jl     0x1407161e7
0x1407161e0: mov    edx,0x1
0x1407161e5: jmp    0x14071622a
0x1407161e7: cmp    rcx,0x2af8
0x1407161ee: jl     0x1407161f7
0x1407161f0: mov    edx,0x2
0x1407161f5: jmp    0x14071622a
0x1407161f7: cmp    rcx,0x13ec
0x1407161fe: jge    0x140716207
0x140716200: mov    edx,0x1b
0x140716205: jmp    0x14071622a
0x140716207: cmp    rcx,0x1db0
0x14071620e: jge    0x140716217
0x140716210: mov    edx,0x1a
0x140716215: jmp    0x14071622a
0x140716217: cmp    rcx,0x238c
0x14071621e: mov    edx,0x19
0x140716223: jl     0x14071622a
0x140716225: mov    edx,0x18
0x14071622a: xor    r15d,r15d
0x14071622d: mov    r8d,DWORD PTR [rsp+0x34]
0x140716232: mov    r9d,DWORD PTR [rsp+0x30]
0x140716237: mov    rax,QWORD PTR [rsp+0x40]
0x14071623c: mov    ecx,0x13e8
0x140716241: add    rcx,rax
0x140716244: call   0x140714590
0x140716249: mov    rsi,QWORD PTR [rsp+0x40]
0x14071624e: mov    r9,QWORD PTR [rbp-0x80]
0x140716252: mov    edx,0xf
0x140716257: add    rbx,0x8
0x14071625b: jmp    0x140715e4c
0x140716260: cmp    esi,0x32
0x140716263: jl     0x14071626c
0x140716265: mov    edx,0xf
0x14071626a: jmp    0x1407162ab
0x14071626c: cmp    esi,0x19
0x14071626f: jl     0x140716278
0x140716271: mov    edx,0x10
0x140716276: jmp    0x1407162ab
0x140716278: cmp    esi,0xa
0x14071627b: jl     0x140716284
0x14071627d: mov    edx,0x11
0x140716282: jmp    0x1407162ab
0x140716284: cmp    esi,0xffffffce
0x140716287: jg     0x140716290
0x140716289: mov    edx,0x15
0x14071628e: jmp    0x1407162ab
0x140716290: cmp    esi,0xffffffe7
0x140716293: jg     0x14071629c
0x140716295: mov    edx,0x16
0x14071629a: jmp    0x1407162ab
0x14071629c: cmp    esi,0xfffffff6
0x14071629f: mov    edx,0x17
0x1407162a4: jle    0x1407162ab
0x1407162a6: mov    edx,0x18
0x1407162ab: mov    r8d,DWORD PTR [rsp+0x34]
0x1407162b0: mov    r9d,DWORD PTR [rsp+0x30]
0x1407162b5: mov    rax,QWORD PTR [rsp+0x40]
0x1407162ba: mov    ecx,0x13e8
0x1407162bf: add    rcx,rax
0x1407162c2: call   0x140714590
0x1407162c7: mov    rsi,QWORD PTR [rsp+0x40]
0x1407162cc: jmp    0x14071651f
0x1407162d1: cmp    r11d,0xffff8ad0
0x1407162d8: je     0x140716440
0x1407162de: cmp    edx,0xffff8ad0
0x1407162e4: je     0x1407164b3
0x1407162ea: cmp    r11d,0x32
0x1407162ee: jl     0x140716306
0x1407162f0: cmp    edx,0x32
0x1407162f3: jl     0x140716326
0x1407162f5: mov    rcx,QWORD PTR [rsp+0x68]
0x1407162fa: xor    r15d,r15d
0x1407162fd: movzx  edx,r15w
0x140716301: jmp    0x140716185
0x140716306: cmp    r11d,0xffffffce
0x14071630a: jg     0x140716320
0x14071630c: cmp    edx,0xffffffce
0x14071630f: jg     0x140716354
0x140716311: mov    rcx,QWORD PTR [rsp+0x68]
0x140716316: mov    edx,0x1b
0x14071631b: jmp    0x140716182
0x140716320: cmp    r11d,0xa
0x140716324: jl     0x14071634e
0x140716326: cmp    edx,0xa
0x140716329: jl     0x14071633a
0x14071632b: mov    rcx,QWORD PTR [rsp+0x68]
0x140716330: mov    edx,0x2
0x140716335: jmp    0x140716182
0x14071633a: cmp    edx,0xfffffff6
0x14071633d: jg     0x14071637c
0x14071633f: mov    rcx,QWORD PTR [rsp+0x68]
0x140716344: mov    edx,0x3
0x140716349: jmp    0x140716182
0x14071634e: cmp    r11d,0xfffffff6
0x140716352: jg     0x14071637c
0x140716354: cmp    edx,0xa
0x140716357: jl     0x140716368
0x140716359: mov    rcx,QWORD PTR [rsp+0x68]
0x14071635e: mov    edx,0x4
0x140716363: jmp    0x140716182
0x140716368: cmp    edx,0xfffffff6
0x14071636b: jg     0x14071637c
0x14071636d: mov    rcx,QWORD PTR [rsp+0x68]
0x140716372: mov    edx,0x19
0x140716377: jmp    0x140716182
0x14071637c: mov    rcx,QWORD PTR [rsp+0x40]
0x140716381: add    rcx,0x13e8
0x140716388: cmp    edx,0x32
0x14071638b: jl     0x140716397
0x14071638d: mov    edx,0x5
0x140716392: jmp    0x140716182
0x140716397: cmp    edx,0x19
0x14071639a: jl     0x1407163a6
0x14071639c: mov    edx,0x6
0x1407163a1: jmp    0x140716182
0x1407163a6: cmp    edx,0xa
0x1407163a9: jl     0x1407163b5
0x1407163ab: mov    edx,0x7
0x1407163b0: jmp    0x140716182
0x1407163b5: cmp    edx,0xffffffce
0x1407163b8: jg     0x1407163c4
0x1407163ba: mov    edx,0x9
0x1407163bf: jmp    0x140716182
0x1407163c4: cmp    edx,0xffffffe7
0x1407163c7: jg     0x1407163d3
0x1407163c9: mov    edx,0xa
0x1407163ce: jmp    0x140716182
0x1407163d3: cmp    edx,0xfffffff6
0x1407163d6: jg     0x1407163e2
0x1407163d8: mov    edx,0xb
0x1407163dd: jmp    0x140716182
0x1407163e2: cmp    r11d,0x32
0x1407163e6: jl     0x1407163f2
0x1407163e8: mov    edx,0xc
0x1407163ed: jmp    0x140716182
0x1407163f2: cmp    r11d,0x19
0x1407163f6: jl     0x140716402
0x1407163f8: mov    edx,0xd
0x1407163fd: jmp    0x140716182
0x140716402: cmp    r11d,0xa
0x140716406: jl     0x140716412
0x140716408: mov    edx,0xe
0x14071640d: jmp    0x140716182
0x140716412: cmp    r11d,0xffffffce
0x140716416: jg     0x140716422
0x140716418: mov    edx,0x12
0x14071641d: jmp    0x140716182
0x140716422: cmp    r11d,0xffffffe7
0x140716426: jg     0x140716432
0x140716428: mov    edx,0x13
0x14071642d: jmp    0x140716182
0x140716432: cmp    r11d,0xfffffff6
0x140716436: mov    edx,0x14
0x14071643b: jmp    0x14071617b
0x140716440: cmp    edx,0xffff8ad0
0x140716446: je     0x1407164a6
0x140716448: cmp    edx,0x32
0x14071644b: jl     0x140716457
0x14071644d: mov    edx,0x5
0x140716452: jmp    0x1407162ab
0x140716457: cmp    edx,0x19
0x14071645a: jl     0x140716466
0x14071645c: mov    edx,0x6
0x140716461: jmp    0x1407162ab
0x140716466: cmp    edx,0xa
0x140716469: jl     0x140716475
0x14071646b: mov    edx,0x7
0x140716470: jmp    0x1407162ab
0x140716475: cmp    edx,0xffffffce
0x140716478: jg     0x140716484
0x14071647a: mov    edx,0x9
0x14071647f: jmp    0x1407162ab
0x140716484: cmp    edx,0xffffffe7
0x140716487: jg     0x140716493
0x140716489: mov    edx,0xa
0x14071648e: jmp    0x1407162ab
0x140716493: cmp    edx,0xfffffff6
0x140716496: jg     0x1407162a6
0x14071649c: mov    edx,0xb
0x1407164a1: jmp    0x1407162ab
0x1407164a6: cmp    r11d,0xffff8ad0
0x1407164ad: je     0x1407162c7
0x1407164b3: mov    rsi,QWORD PTR [rsp+0x40]
0x1407164b8: lea    rcx,[rsi+0x13e8]
0x1407164bf: mov    r9d,DWORD PTR [rsp+0x30]
0x1407164c4: mov    r8d,DWORD PTR [rsp+0x34]
0x1407164c9: cmp    r11d,0x32
0x1407164cd: jl     0x1407164d6
0x1407164cf: mov    edx,0xc
0x1407164d4: jmp    0x14071651a
0x1407164d6: cmp    r11d,0x19
0x1407164da: jl     0x1407164e3
0x1407164dc: mov    edx,0xd
0x1407164e1: jmp    0x14071651a
0x1407164e3: cmp    r11d,0xa
0x1407164e7: jl     0x1407164f0
0x1407164e9: mov    edx,0xe
0x1407164ee: jmp    0x14071651a
0x1407164f0: cmp    r11d,0xffffffce
0x1407164f4: jg     0x1407164fd
0x1407164f6: mov    edx,0x12
0x1407164fb: jmp    0x14071651a
0x1407164fd: cmp    r11d,0xffffffe7
0x140716501: jg     0x14071650a
0x140716503: mov    edx,0x13
0x140716508: jmp    0x14071651a
0x14071650a: cmp    r11d,0xfffffff6
0x14071650e: mov    edx,0x14
0x140716513: jle    0x14071651a
0x140716515: mov    edx,0x18
0x14071651a: call   0x140714590
0x14071651f: xor    r15d,r15d
0x140716522: mov    r9,QWORD PTR [rbp-0x80]
0x140716526: mov    edx,0xf
0x14071652b: add    rbx,0x8
0x14071652f: jmp    0x140715e4c
0x140716534: xorps  xmm0,xmm0
0x140716537: movups XMMWORD PTR [rbp+0x150],xmm0
0x14071653e: xor    r12d,r12d
0x140716541: mov    QWORD PTR [rbp+0x160],r12
0x140716548: mov    r15,rdx
0x14071654b: mov    QWORD PTR [rbp+0x168],rdx
0x140716552: mov    BYTE PTR [rbp+0x150],r12b
0x140716559: movups XMMWORD PTR [rbp+0x170],xmm0
0x140716560: mov    QWORD PTR [rbp+0x180],r12
0x140716567: mov    QWORD PTR [rbp+0x188],rdx
0x14071656e: mov    BYTE PTR [rbp+0x170],r12b
0x140716575: mov    r9,QWORD PTR [r11+0x8]
0x140716579: mov    r10,QWORD PTR [r11+0x10]
0x14071657d: sub    r10,r9
0x140716580: sar    r10,0x2
0x140716584: mov    QWORD PTR [rbp-0x50],r10
0x140716588: mov    r14,rcx
0x14071658b: test   r10,r10
0x14071658e: jne    0x1407165a4
0x140716590: mov    rax,QWORD PTR [r11+0x70]
0x140716594: sub    rax,QWORD PTR [r11+0x68]
0x140716598: test   rax,0xfffffffffffffffc
0x14071659e: je     0x140716c27
0x1407165a4: mov    QWORD PTR [rsp+0x58],r13
0x1407165a9: mov    QWORD PTR [rsp+0x50],r14
0x1407165ae: movsx  ecx,WORD PTR [r11]
0x1407165b2: sub    ecx,0x2
0x1407165b5: je     0x140717159
0x1407165bb: sub    ecx,0x1
0x1407165be: je     0x140716c63
0x1407165c4: cmp    ecx,0x1
0x1407165c7: jne    0x140716c27
0x1407165cd: mov    r9d,r12d
0x1407165d0: mov    DWORD PTR [rsp+0x48],r12d
0x1407165d5: mov    r15d,r12d
0x1407165d8: mov    r14d,r12d
0x1407165db: mov    DWORD PTR [rsp+0x38],r12d
0x1407165e0: mov    DWORD PTR [rbp-0x70],r12d
0x1407165e4: mov    r13d,r12d
0x1407165e7: mov    DWORD PTR [rbp-0x48],r12d
0x1407165eb: mov    DWORD PTR [rbp-0x78],r12d
0x1407165ef: xor    ecx,ecx
0x1407165f1: mov    esi,ecx
0x1407165f3: mov    DWORD PTR [rsp+0x70],ecx
0x1407165f7: mov    edx,0xffffffff
0x1407165fc: mov    DWORD PTR [rbp-0x58],edx
0x1407165ff: mov    r8d,ecx
0x140716602: mov    DWORD PTR [rsp+0x78],ecx
0x140716606: test   r10,r10
0x140716609: je     0x140716a28
0x14071660f: mov    rcx,QWORD PTR [r11+0x8]
0x140716613: mov    rdi,QWORD PTR [rsp+0x50]
0x140716618: mov    rdi,QWORD PTR [rdi+0x1620]
0x14071661f: mov    rax,QWORD PTR [rsp+0x40]
0x140716624: mov    r14,QWORD PTR [rax+0x700]
0x14071662b: mov    r11,QWORD PTR [rax+0x708]
0x140716632: sub    r11,r14
0x140716635: sar    r11,0x2
0x140716639: mov    QWORD PTR [rbp-0x68],r11
0x14071663d: xor    eax,eax
0x14071663f: mov    r12d,eax
0x140716642: movzx  ebx,dx
0x140716645: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140716650: movsxd rsi,DWORD PTR [rcx+r12*1]
0x140716654: mov    rdx,QWORD PTR [rdi+rsi*8]
0x140716658: test   r8d,r8d
0x14071665b: jne    0x140716674
0x14071665d: mov    rax,QWORD PTR [rdx+0x80]
0x140716664: movzx  ebx,WORD PTR [rax]
0x140716667: mov    rax,QWORD PTR [rdx+0x98]
0x14071666e: movsx  eax,WORD PTR [rax]
0x140716671: mov    DWORD PTR [rbp-0x58],eax
0x140716674: xor    eax,eax
0x140716676: mov    r10d,eax
0x140716679: mov    r8d,eax
0x14071667c: test   r11,r11
0x14071667f: je     0x1407166cc
0x140716681: mov    rax,QWORD PTR [rsp+0x50]
0x140716686: mov    r11,QWORD PTR [rax+0x1638]
0x14071668d: nop    DWORD PTR [rax]
0x140716690: lea    r9,[r8*4+0x0]
0x140716698: cmp    DWORD PTR [r11+r9*1],esi
0x14071669c: je     0x14071677e
0x1407166a2: inc    r10d
0x1407166a5: inc    r8
0x1407166a8: mov    rax,QWORD PTR [rsp+0x40]
0x1407166ad: mov    rcx,QWORD PTR [rax+0x708]
0x1407166b4: sub    rcx,r14
0x1407166b7: sar    rcx,0x2
0x1407166bb: movsxd rax,r10d
0x1407166be: cmp    rax,rcx
0x1407166c1: jb     0x140716690
0x1407166c3: mov    r9d,DWORD PTR [rsp+0x48]
0x1407166c8: mov    r11,QWORD PTR [rbp-0x68]
0x1407166cc: mov    esi,DWORD PTR [rsp+0x70]
0x1407166d0: mov    r8d,DWORD PTR [rsp+0x78]
0x1407166d5: inc    r8d
0x1407166d8: mov    DWORD PTR [rsp+0x78],r8d
0x1407166dd: add    r12,0x4
0x1407166e1: mov    rax,QWORD PTR [rbp-0x60]
0x1407166e5: mov    rcx,QWORD PTR [rax+0x8]
0x1407166e9: movsxd rax,r8d
0x1407166ec: cmp    rax,QWORD PTR [rbp-0x50]
0x1407166f0: jb     0x140716650
0x1407166f6: mov    WORD PTR [rsp+0x60],bx
0x1407166fb: cmp    bx,0xffff
0x1407166ff: mov    rbx,QWORD PTR [rbp-0x40]
0x140716703: mov    rdi,QWORD PTR [rbp-0x38]
0x140716707: je     0x140716a1f
0x14071670d: movsx  r8,WORD PTR [rsp+0x60]
0x140716713: mov    rax,QWORD PTR [rbp+0x130]
0x14071671a: cmp    BYTE PTR [r8+rax*1],0x0
0x14071671f: jne    0x140716e57
0x140716725: movsxd rdx,DWORD PTR [rbp-0x58]
0x140716729: mov    r10,QWORD PTR [rsp+0x40]
0x14071672e: cmp    edx,0xffffffff
0x140716731: je     0x14071675e
0x140716733: mov    rax,QWORD PTR [r10+0x5f8]
0x14071673a: mov    rcx,QWORD PTR [rax]
0x14071673d: mov    rax,QWORD PTR [rcx+r8*8]
0x140716741: mov    rax,QWORD PTR [rax+0x58]
0x140716745: mov    rcx,QWORD PTR [rax+rdx*8]
0x140716749: movsxd rdx,DWORD PTR [rcx+0x68]
0x14071674d: mov    rax,QWORD PTR [r10+0x538]
0x140716754: test   BYTE PTR [rax+rdx*4],0x1
0x140716758: jne    0x140717b4d
0x14071675e: mov    rax,QWORD PTR [r10+0x4f0]
0x140716765: test   BYTE PTR [rax+r8*4],0x2
0x14071676a: jne    0x140716e57
0x140716770: mov    r14d,DWORD PTR [rsp+0x38]
0x140716775: mov    r12d,DWORD PTR [rbp-0x78]
0x140716779: jmp    0x140716a2d
0x14071677e: movsx  ecx,WORD PTR [rdx]
0x140716781: sub    ecx,0x10
0x140716784: je     0x1407169b3
0x14071678a: sub    ecx,0x1
0x14071678d: je     0x1407168e0
0x140716793: sub    ecx,0x1
0x140716796: je     0x140716821
0x14071679c: cmp    ecx,0x1
0x14071679f: jne    0x1407166c3
0x1407167a5: mov    eax,DWORD PTR [r14+r9*1]
0x1407167a9: cmp    eax,DWORD PTR [rdx+0x20]
0x1407167ac: jg     0x1407167b7
0x1407167ae: mov    DWORD PTR [rbp-0x78],0xfffffffd
0x1407167b5: jmp    0x140716803
0x1407167b7: cmp    eax,DWORD PTR [rdx+0x24]
0x1407167ba: jg     0x1407167c5
0x1407167bc: mov    DWORD PTR [rbp-0x78],0xfffffffe
0x1407167c3: jmp    0x140716803
0x1407167c5: cmp    eax,DWORD PTR [rdx+0x28]
0x1407167c8: jg     0x1407167d3
0x1407167ca: mov    DWORD PTR [rbp-0x78],0xffffffff
0x1407167d1: jmp    0x140716803
0x1407167d3: cmp    eax,DWORD PTR [rdx+0x34]
0x1407167d6: jl     0x1407167e1
0x1407167d8: mov    DWORD PTR [rbp-0x78],0x3
0x1407167df: jmp    0x140716803
0x1407167e1: cmp    eax,DWORD PTR [rdx+0x30]
0x1407167e4: jl     0x1407167ef
0x1407167e6: mov    DWORD PTR [rbp-0x78],0x2
0x1407167ed: jmp    0x140716803
0x1407167ef: mov    r11d,DWORD PTR [rbp-0x78]
0x1407167f3: cmp    eax,DWORD PTR [rdx+0x2c]
0x1407167f6: mov    eax,0x1
0x1407167fb: cmovge r11d,eax
0x1407167ff: mov    DWORD PTR [rbp-0x78],r11d
0x140716803: mov    rcx,QWORD PTR [rbp-0x60]
0x140716807: mov    rax,QWORD PTR [rcx+0x20]
0x14071680b: mov    esi,DWORD PTR [r12+rax*1]
0x14071680f: mov    DWORD PTR [rsp+0x70],esi
0x140716813: mov    r9d,DWORD PTR [rsp+0x48]
0x140716818: mov    r11,QWORD PTR [rbp-0x68]
0x14071681c: jmp    0x1407166d0
0x140716821: mov    eax,DWORD PTR [r14+r9*1]
0x140716825: cmp    eax,DWORD PTR [rdx+0x20]
0x140716828: jg     0x140716844
0x14071682a: mov    r13d,0xfffffffd
0x140716830: mov    rcx,QWORD PTR [rbp-0x60]
0x140716834: mov    rax,QWORD PTR [rcx+0x20]
0x140716838: mov    edx,DWORD PTR [r12+rax*1]
0x14071683c: mov    DWORD PTR [rbp-0x48],edx
0x14071683f: jmp    0x1407166c3
0x140716844: cmp    eax,DWORD PTR [rdx+0x24]
0x140716847: jg     0x140716863
0x140716849: mov    r13d,0xfffffffe
0x14071684f: mov    rcx,QWORD PTR [rbp-0x60]
0x140716853: mov    rax,QWORD PTR [rcx+0x20]
0x140716857: mov    edx,DWORD PTR [r12+rax*1]
0x14071685b: mov    DWORD PTR [rbp-0x48],edx
0x14071685e: jmp    0x1407166c3
0x140716863: cmp    eax,DWORD PTR [rdx+0x28]
0x140716866: jg     0x140716882
0x140716868: mov    r13d,0xffffffff
0x14071686e: mov    rcx,QWORD PTR [rbp-0x60]
0x140716872: mov    rax,QWORD PTR [rcx+0x20]
0x140716876: mov    edx,DWORD PTR [r12+rax*1]
0x14071687a: mov    DWORD PTR [rbp-0x48],edx
0x14071687d: jmp    0x1407166c3
0x140716882: cmp    eax,DWORD PTR [rdx+0x34]
0x140716885: jl     0x1407168a1
0x140716887: mov    r13d,0x3
0x14071688d: mov    rcx,QWORD PTR [rbp-0x60]
0x140716891: mov    rax,QWORD PTR [rcx+0x20]
0x140716895: mov    edx,DWORD PTR [r12+rax*1]
0x140716899: mov    DWORD PTR [rbp-0x48],edx
0x14071689c: jmp    0x1407166c3
0x1407168a1: cmp    eax,DWORD PTR [rdx+0x30]
0x1407168a4: jl     0x1407168c0
0x1407168a6: mov    r13d,0x2
0x1407168ac: mov    rcx,QWORD PTR [rbp-0x60]
0x1407168b0: mov    rax,QWORD PTR [rcx+0x20]
0x1407168b4: mov    edx,DWORD PTR [r12+rax*1]
0x1407168b8: mov    DWORD PTR [rbp-0x48],edx
0x1407168bb: jmp    0x1407166c3
0x1407168c0: cmp    eax,DWORD PTR [rdx+0x2c]
0x1407168c3: mov    eax,0x1
0x1407168c8: cmovge r13d,eax
0x1407168cc: mov    rcx,QWORD PTR [rbp-0x60]
0x1407168d0: mov    rax,QWORD PTR [rcx+0x20]
0x1407168d4: mov    edx,DWORD PTR [r12+rax*1]
0x1407168d8: mov    DWORD PTR [rbp-0x48],edx
0x1407168db: jmp    0x1407166c3
0x1407168e0: mov    eax,DWORD PTR [r14+r9*1]
0x1407168e4: cmp    eax,DWORD PTR [rdx+0x20]
0x1407168e7: jg     0x140716905
0x1407168e9: mov    DWORD PTR [rsp+0x38],0xfffffffd
0x1407168f1: mov    rcx,QWORD PTR [rbp-0x60]
0x1407168f5: mov    rax,QWORD PTR [rcx+0x20]
0x1407168f9: mov    edx,DWORD PTR [r12+rax*1]
0x1407168fd: mov    DWORD PTR [rbp-0x70],edx
0x140716900: jmp    0x1407166c3
0x140716905: cmp    eax,DWORD PTR [rdx+0x24]
0x140716908: jg     0x140716926
0x14071690a: mov    DWORD PTR [rsp+0x38],0xfffffffe
0x140716912: mov    rcx,QWORD PTR [rbp-0x60]
0x140716916: mov    rax,QWORD PTR [rcx+0x20]
0x14071691a: mov    edx,DWORD PTR [r12+rax*1]
0x14071691e: mov    DWORD PTR [rbp-0x70],edx
0x140716921: jmp    0x1407166c3
0x140716926: cmp    eax,DWORD PTR [rdx+0x28]
0x140716929: jg     0x140716947
0x14071692b: mov    DWORD PTR [rsp+0x38],0xffffffff
0x140716933: mov    rcx,QWORD PTR [rbp-0x60]
0x140716937: mov    rax,QWORD PTR [rcx+0x20]
0x14071693b: mov    edx,DWORD PTR [r12+rax*1]
0x14071693f: mov    DWORD PTR [rbp-0x70],edx
0x140716942: jmp    0x1407166c3
0x140716947: cmp    eax,DWORD PTR [rdx+0x34]
0x14071694a: jl     0x140716968
0x14071694c: mov    DWORD PTR [rsp+0x38],0x3
0x140716954: mov    rcx,QWORD PTR [rbp-0x60]
0x140716958: mov    rax,QWORD PTR [rcx+0x20]
0x14071695c: mov    edx,DWORD PTR [r12+rax*1]
0x140716960: mov    DWORD PTR [rbp-0x70],edx
0x140716963: jmp    0x1407166c3
0x140716968: cmp    eax,DWORD PTR [rdx+0x30]
0x14071696b: jl     0x140716989
0x14071696d: mov    DWORD PTR [rsp+0x38],0x2
0x140716975: mov    rcx,QWORD PTR [rbp-0x60]
0x140716979: mov    rax,QWORD PTR [rcx+0x20]
0x14071697d: mov    edx,DWORD PTR [r12+rax*1]
0x140716981: mov    DWORD PTR [rbp-0x70],edx
0x140716984: jmp    0x1407166c3
0x140716989: mov    r11d,DWORD PTR [rsp+0x38]
0x14071698e: cmp    eax,DWORD PTR [rdx+0x2c]
0x140716991: mov    eax,0x1
0x140716996: cmovge r11d,eax
0x14071699a: mov    DWORD PTR [rsp+0x38],r11d
0x14071699f: mov    rcx,QWORD PTR [rbp-0x60]
0x1407169a3: mov    rax,QWORD PTR [rcx+0x20]
0x1407169a7: mov    edx,DWORD PTR [r12+rax*1]
0x1407169ab: mov    DWORD PTR [rbp-0x70],edx
0x1407169ae: jmp    0x1407166c3
0x1407169b3: mov    eax,DWORD PTR [r14+r9*1]
0x1407169b7: cmp    eax,DWORD PTR [rdx+0x20]
0x1407169ba: jg     0x1407169c4
0x1407169bc: mov    r9d,0xfffffffd
0x1407169c2: jmp    0x140716a09
0x1407169c4: cmp    eax,DWORD PTR [rdx+0x24]
0x1407169c7: jg     0x1407169d1
0x1407169c9: mov    r9d,0xfffffffe
0x1407169cf: jmp    0x140716a09
0x1407169d1: cmp    eax,DWORD PTR [rdx+0x28]
0x1407169d4: jg     0x1407169de
0x1407169d6: mov    r9d,0xffffffff
0x1407169dc: jmp    0x140716a09
0x1407169de: cmp    eax,DWORD PTR [rdx+0x34]
0x1407169e1: jl     0x1407169eb
0x1407169e3: mov    r9d,0x3
0x1407169e9: jmp    0x140716a09
0x1407169eb: cmp    eax,DWORD PTR [rdx+0x30]
0x1407169ee: jl     0x1407169f8
0x1407169f0: mov    r9d,0x2
0x1407169f6: jmp    0x140716a09
0x1407169f8: mov    r9d,DWORD PTR [rsp+0x48]
0x1407169fd: cmp    eax,DWORD PTR [rdx+0x2c]
0x140716a00: mov    eax,0x1
0x140716a05: cmovge r9d,eax
0x140716a09: mov    DWORD PTR [rsp+0x48],r9d
0x140716a0e: mov    rcx,QWORD PTR [rbp-0x60]
0x140716a12: mov    rax,QWORD PTR [rcx+0x20]
0x140716a16: mov    r15d,DWORD PTR [r12+rax*1]
0x140716a1a: jmp    0x1407166c8
0x140716a1f: mov    r14d,DWORD PTR [rsp+0x38]
0x140716a24: mov    r12d,DWORD PTR [rbp-0x78]
0x140716a28: mov    r10,QWORD PTR [rsp+0x40]
0x140716a2d: cmp    r15d,DWORD PTR [rsp+0x4c]
0x140716a32: jle    0x140716a77
0x140716a34: lea    eax,[r9+0x1]
0x140716a38: cmp    eax,0x2
0x140716a3b: jbe    0x140716a77
0x140716a3d: mov    DWORD PTR [rsp+0x4c],r15d
0x140716a42: lea    rcx,[r10+0x13e8]
0x140716a49: cmp    r9d,0x2
0x140716a4d: jl     0x140716a63
0x140716a4f: mov    r8d,0xf
0x140716a55: lea    rdx,[rip+0xf6a7b4]        # 0x141681210 ; SOURCE 'high-cheekbones'
0x140716a5c: call   0x14006f860
0x140716a61: jmp    0x140716a7c
0x140716a63: mov    r8d,0xe
0x140716a69: lea    rdx,[rip+0xf6a790]        # 0x141681200 ; SOURCE 'low-cheekbones'
0x140716a70: call   0x14006f860
0x140716a75: jmp    0x140716a7c
0x140716a77: mov    r15d,DWORD PTR [rsp+0x4c]
0x140716a7c: cmp    esi,r15d
0x140716a7f: jle    0x140716ad0
0x140716a81: lea    eax,[r12+0x1]
0x140716a86: cmp    eax,0x2
0x140716a89: jbe    0x140716ad0
0x140716a8b: mov    r15d,esi
0x140716a8e: mov    DWORD PTR [rsp+0x4c],esi
0x140716a92: mov    rsi,QWORD PTR [rsp+0x40]
0x140716a97: lea    rcx,[rsi+0x13e8]
0x140716a9e: cmp    DWORD PTR [rsp+0x48],0x2
0x140716aa3: jl     0x140716abc
0x140716aa5: mov    r12d,0xb
0x140716aab: mov    r8d,r12d
0x140716aae: lea    rdx,[rip+0xf6a73b]        # 0x1416811f0 ; SOURCE 'square-chin'
0x140716ab5: call   0x14006f860
0x140716aba: jmp    0x140716adb
0x140716abc: mov    r8d,0xa
0x140716ac2: lea    rdx,[rip+0xf6a717]        # 0x1416811e0 ; SOURCE 'round-chin'
0x140716ac9: call   0x14006f860
0x140716ace: jmp    0x140716ad5
0x140716ad0: mov    rsi,QWORD PTR [rsp+0x40]
0x140716ad5: mov    r12d,0xb
0x140716adb: mov    ecx,DWORD PTR [rbp-0x70]
0x140716ade: mov    edx,DWORD PTR [rbp-0x48]
0x140716ae1: cmp    ecx,r15d
0x140716ae4: jg     0x140716aef
0x140716ae6: cmp    edx,r15d
0x140716ae9: jle    0x140716c1d
0x140716aef: lea    eax,[r14+0x1]
0x140716af3: cmp    eax,0x2
0x140716af6: ja     0x140716b05
0x140716af8: lea    eax,[r13+0x1]
0x140716afc: cmp    eax,0x2
0x140716aff: jbe    0x140716c1d
0x140716b05: cmp    ecx,r15d
0x140716b08: cmovg  r15d,ecx
0x140716b0c: cmp    edx,r15d
0x140716b0f: cmovg  r15d,edx
0x140716b13: mov    DWORD PTR [rsp+0x4c],r15d
0x140716b18: cmp    r14d,0x3
0x140716b1c: jne    0x140716b69
0x140716b1e: cmp    r13d,r14d
0x140716b21: jne    0x140716b41
0x140716b23: lea    rdx,[rip+0xf6a6a6]        # 0x1416811d0 ; SOURCE 'massive-chin'
0x140716b2a: mov    r8d,0xc
0x140716b30: lea    rcx,[rsi+0x13e8]
0x140716b37: call   0x14006f860
0x140716b3c: jmp    0x140716c1d
0x140716b41: cmp    r13d,0xfffffffd
0x140716b45: jne    0x140716bcb
0x140716b4b: mov    r8d,0xd
0x140716b51: lea    rdx,[rip+0xf6a668]        # 0x1416811c0 ; SOURCE 'recessed-chin'
0x140716b58: lea    rcx,[rsi+0x13e8]
0x140716b5f: call   0x14006f860
0x140716b64: jmp    0x140716c1d
0x140716b69: cmp    r14d,0xfffffffd
0x140716b6d: jne    0x140716b86
0x140716b6f: cmp    r13d,0x3
0x140716b73: jne    0x140716b7e
0x140716b75: lea    rdx,[rip+0xf6a634]        # 0x1416811b0 ; SOURCE 'jutting-chin'
0x140716b7c: jmp    0x140716b2a
0x140716b7e: cmp    r13d,0xfffffffd
0x140716b82: jne    0x140716bec
0x140716b84: jmp    0x140716b4b
0x140716b86: cmp    r14d,0x2
0x140716b8a: jne    0x140716bb2
0x140716b8c: cmp    r13d,r14d
0x140716b8f: jne    0x140716bac
0x140716b91: mov    r8d,0xe
0x140716b97: lea    rdx,[rip+0xf6a602]        # 0x1416811a0 ; SOURCE 'prominent-chin'
0x140716b9e: lea    rcx,[rsi+0x13e8]
0x140716ba5: call   0x14006f860
0x140716baa: jmp    0x140716c1d
0x140716bac: cmp    r13d,0xfffffffe
0x140716bb0: jmp    0x140716b45
0x140716bb2: cmp    r14d,0xfffffffe
0x140716bb6: jne    0x140716bc5
0x140716bb8: cmp    r13d,0x2
0x140716bbc: je     0x140716b91
0x140716bbe: cmp    r13d,r14d
0x140716bc1: jne    0x140716bec
0x140716bc3: jmp    0x140716b4b
0x140716bc5: cmp    r14d,0x2
0x140716bc9: jl     0x140716be6
0x140716bcb: mov    r8d,0xa
0x140716bd1: lea    rdx,[rip+0xf6a5b8]        # 0x141681190 ; SOURCE 'broad-chin'
0x140716bd8: lea    rcx,[rsi+0x13e8]
0x140716bdf: call   0x14006f860
0x140716be4: jmp    0x140716c1d
0x140716be6: cmp    r14d,0xfffffffe
0x140716bea: jg     0x140716c04
0x140716bec: mov    r8,r12
0x140716bef: lea    rdx,[rip+0xf6a58a]        # 0x141681180 ; SOURCE 'narrow-chin'
0x140716bf6: lea    rcx,[rsi+0x13e8]
0x140716bfd: call   0x14006f860
0x140716c02: jmp    0x140716c1d
0x140716c04: cmp    r13d,0x3
0x140716c08: jl     0x140716c45
0x140716c0a: lea    rdx,[rip+0xf6a59f]        # 0x1416811b0 ; SOURCE 'jutting-chin'
0x140716c11: lea    rcx,[rsi+0x13e8]
0x140716c18: call   0x14006f510
0x140716c1d: mov    r14,QWORD PTR [rsp+0x50]
0x140716c22: mov    r13,QWORD PTR [rsp+0x58]
0x140716c27: lea    rcx,[rbp+0x170]
0x140716c2e: call   0x14006f7e0
0x140716c33: nop
0x140716c34: lea    rcx,[rbp+0x150]
0x140716c3b: call   0x14006f7e0
0x140716c40: jmp    0x14071651f
0x140716c45: cmp    r13d,0x2
0x140716c49: jl     0x140716c54
0x140716c4b: lea    rdx,[rip+0xf6a54e]        # 0x1416811a0 ; SOURCE 'prominent-chin'
0x140716c52: jmp    0x140716c11
0x140716c54: cmp    r13d,0xfffffffe
0x140716c58: jg     0x140716c1d
0x140716c5a: lea    rdx,[rip+0xf6a55f]        # 0x1416811c0 ; SOURCE 'recessed-chin'
0x140716c61: jmp    0x140716c11
0x140716c63: mov    DWORD PTR [rsp+0x48],r12d
0x140716c68: mov    r13d,r12d
0x140716c6b: mov    ecx,0xffffffff
0x140716c70: mov    WORD PTR [rsp+0x60],cx
0x140716c75: mov    DWORD PTR [rbp-0x70],ecx
0x140716c78: mov    r11d,DWORD PTR [rsp+0x4c]
0x140716c7d: test   r10,r10
0x140716c80: je     0x140716c22
0x140716c82: mov    rcx,r9
0x140716c85: mov    r9,QWORD PTR [r14+0x1620]
0x140716c8c: mov    QWORD PTR [rbp-0x78],r9
0x140716c90: mov    r15,QWORD PTR [rsi+0x708]
0x140716c97: mov    QWORD PTR [rsp+0x70],r15
0x140716c9c: mov    r14,QWORD PTR [rsi+0x700]
0x140716ca3: mov    QWORD PTR [rbp-0x48],r14
0x140716ca7: mov    r8,r15
0x140716caa: sub    r8,r14
0x140716cad: sar    r8,0x2
0x140716cb1: mov    QWORD PTR [rsp+0x78],r8
0x140716cb6: mov    rdx,r12
0x140716cb9: mov    QWORD PTR [rbp-0x68],rdx
0x140716cbd: mov    edi,r12d
0x140716cc0: movzx  ebx,WORD PTR [rsp+0x60]
0x140716cc5: jmp    0x140716cd9
0x140716cc7: nop    WORD PTR [rax+rax*1+0x0]
0x140716cd0: mov    r14,QWORD PTR [rbp-0x48]
0x140716cd4: mov    r15,QWORD PTR [rsp+0x70]
0x140716cd9: movsxd rsi,DWORD PTR [rdx+rcx*1]
0x140716cdd: mov    r9,QWORD PTR [r9+rsi*8]
0x140716ce1: mov    rcx,QWORD PTR [rbp-0x60]
0x140716ce5: mov    rax,QWORD PTR [rcx+0x20]
0x140716ce9: mov    eax,DWORD PTR [rax+rdx*1]
0x140716cec: cmp    eax,r11d
0x140716cef: cmovle eax,r11d
0x140716cf3: mov    r11d,eax
0x140716cf6: mov    DWORD PTR [rsp+0x38],eax
0x140716cfa: test   edi,edi
0x140716cfc: jne    0x140716d1c
0x140716cfe: mov    rax,QWORD PTR [r9+0x80]
0x140716d05: movzx  ebx,WORD PTR [rax]
0x140716d08: mov    WORD PTR [rsp+0x60],bx
0x140716d0d: mov    rax,QWORD PTR [r9+0x98]
0x140716d14: movsx  r12d,WORD PTR [rax]
0x140716d18: mov    DWORD PTR [rbp-0x70],r12d
0x140716d1c: xor    eax,eax
0x140716d1e: mov    r10d,eax
0x140716d21: mov    edx,eax
0x140716d23: test   r8,r8
0x140716d26: je     0x140716d68
0x140716d28: mov    rax,QWORD PTR [rsp+0x50]
0x140716d2d: mov    r11,QWORD PTR [rax+0x1638]
0x140716d34: lea    r8,[rdx*4+0x0]
0x140716d3c: cmp    DWORD PTR [r11+r8*1],esi
0x140716d40: je     0x140716e61
0x140716d46: inc    r10d
0x140716d49: inc    rdx
0x140716d4c: mov    rcx,r15
0x140716d4f: sub    rcx,r14
0x140716d52: sar    rcx,0x2
0x140716d56: movsxd rax,r10d
0x140716d59: cmp    rax,rcx
0x140716d5c: jb     0x140716d34
0x140716d5e: mov    r11d,DWORD PTR [rsp+0x38]
0x140716d63: mov    r8,QWORD PTR [rsp+0x78]
0x140716d68: mov    r10d,DWORD PTR [rsp+0x48]
0x140716d6d: mov    rsi,QWORD PTR [rsp+0x58]
0x140716d72: mov    r14,QWORD PTR [rsp+0x50]
0x140716d77: mov    r15,rsi
0x140716d7a: mov    r12,r14
0x140716d7d: inc    edi
0x140716d7f: mov    rdx,QWORD PTR [rbp-0x68]
0x140716d83: add    rdx,0x4
0x140716d87: mov    QWORD PTR [rbp-0x68],rdx
0x140716d8b: mov    rax,QWORD PTR [rbp-0x60]
0x140716d8f: mov    rcx,QWORD PTR [rax+0x8]
0x140716d93: movsxd rax,edi
0x140716d96: cmp    rax,QWORD PTR [rbp-0x50]
0x140716d9a: mov    r9,QWORD PTR [rbp-0x78]
0x140716d9e: jb     0x140716cd0
0x140716da4: cmp    bx,0xffff
0x140716da8: mov    rbx,QWORD PTR [rbp-0x40]
0x140716dac: mov    rdi,QWORD PTR [rbp-0x38]
0x140716db0: je     0x140716e15
0x140716db2: movsx  r8,WORD PTR [rsp+0x60]
0x140716db8: mov    rax,QWORD PTR [rbp+0x130]
0x140716dbf: cmp    BYTE PTR [r8+rax*1],0x0
0x140716dc4: jne    0x140717b40
0x140716dca: movsxd rdx,DWORD PTR [rbp-0x70]
0x140716dce: mov    r9,QWORD PTR [rsp+0x40]
0x140716dd3: cmp    edx,0xffffffff
0x140716dd6: je     0x140716e03
0x140716dd8: mov    rax,QWORD PTR [r9+0x5f8]
0x140716ddf: mov    rcx,QWORD PTR [rax]
0x140716de2: mov    rax,QWORD PTR [rcx+r8*8]
0x140716de6: mov    rax,QWORD PTR [rax+0x58]
0x140716dea: mov    rcx,QWORD PTR [rax+rdx*8]
0x140716dee: movsxd rdx,DWORD PTR [rcx+0x68]
0x140716df2: mov    rax,QWORD PTR [r9+0x538]
0x140716df9: test   BYTE PTR [rax+rdx*4],0x1
0x140716dfd: jne    0x140717b55
0x140716e03: mov    rax,QWORD PTR [r9+0x4f0]
0x140716e0a: test   BYTE PTR [rax+r8*4],0x2
0x140716e0f: jne    0x140717b40
0x140716e15: cmp    r11d,DWORD PTR [rsp+0x4c]
0x140716e1a: jle    0x140717b40
0x140716e20: test   r10d,r10d
0x140716e23: jne    0x140716f8b
0x140716e29: test   r13d,r13d
0x140716e2c: je     0x140717b40
0x140716e32: cmp    r13d,0xfffffffd
0x140716e36: jne    0x140717106
0x140716e3c: lea    rdx,[rip+0xf6983d]        # 0x141680680 ; SOURCE 'high-voiced'
0x140716e43: mov    rcx,QWORD PTR [rsp+0x68]
0x140716e48: call   0x14006f510
0x140716e4d: mov    r15d,DWORD PTR [rsp+0x38]
0x140716e52: mov    DWORD PTR [rsp+0x4c],r15d
0x140716e57: mov    rsi,QWORD PTR [rsp+0x40]
0x140716e5c: jmp    0x140716c1d
0x140716e61: movsx  ecx,WORD PTR [r9]
0x140716e65: sub    ecx,0x16
0x140716e68: je     0x140716f11
0x140716e6e: cmp    ecx,0x1
0x140716e71: jne    0x140716d5e
0x140716e77: mov    eax,DWORD PTR [r8+r14*1]
0x140716e7b: mov    r11d,DWORD PTR [rsp+0x38]
0x140716e80: mov    r8,QWORD PTR [rsp+0x78]
0x140716e85: cmp    eax,DWORD PTR [r9+0x20]
0x140716e89: jg     0x140716e9b
0x140716e8b: mov    r10d,0xfffffffd
0x140716e91: mov    DWORD PTR [rsp+0x48],r10d
0x140716e96: jmp    0x140716d6d
0x140716e9b: cmp    eax,DWORD PTR [r9+0x24]
0x140716e9f: jg     0x140716eb1
0x140716ea1: mov    r10d,0xfffffffe
0x140716ea7: mov    DWORD PTR [rsp+0x48],r10d
0x140716eac: jmp    0x140716d6d
0x140716eb1: cmp    eax,DWORD PTR [r9+0x28]
0x140716eb5: jg     0x140716ec8
0x140716eb7: mov    eax,0xffffffff
0x140716ebc: mov    r10d,eax
0x140716ebf: mov    DWORD PTR [rsp+0x48],eax
0x140716ec3: jmp    0x140716d6d
0x140716ec8: cmp    eax,DWORD PTR [r9+0x34]
0x140716ecc: jl     0x140716edf
0x140716ece: mov    eax,0x3
0x140716ed3: mov    r10d,eax
0x140716ed6: mov    DWORD PTR [rsp+0x48],eax
0x140716eda: jmp    0x140716d6d
0x140716edf: cmp    eax,DWORD PTR [r9+0x30]
0x140716ee3: jl     0x140716ef6
0x140716ee5: mov    eax,0x2
0x140716eea: mov    r10d,eax
0x140716eed: mov    DWORD PTR [rsp+0x48],eax
0x140716ef1: jmp    0x140716d6d
0x140716ef6: cmp    eax,DWORD PTR [r9+0x2c]
0x140716efa: jl     0x140716d68
0x140716f00: mov    eax,0x1
0x140716f05: mov    r10d,eax
0x140716f08: mov    DWORD PTR [rsp+0x48],eax
0x140716f0c: jmp    0x140716d6d
0x140716f11: mov    eax,DWORD PTR [r8+r14*1]
0x140716f15: cmp    eax,DWORD PTR [r9+0x20]
0x140716f19: jg     0x140716f26
0x140716f1b: mov    r13d,0xfffffffd
0x140716f21: jmp    0x140716d5e
0x140716f26: cmp    eax,DWORD PTR [r9+0x24]
0x140716f2a: jg     0x140716f37
0x140716f2c: mov    r13d,0xfffffffe
0x140716f32: jmp    0x140716d5e
0x140716f37: cmp    eax,DWORD PTR [r9+0x28]
0x140716f3b: jg     0x140716f48
0x140716f3d: mov    r13d,0xffffffff
0x140716f43: jmp    0x140716d5e
0x140716f48: mov    r11d,DWORD PTR [rsp+0x38]
0x140716f4d: mov    r8,QWORD PTR [rsp+0x78]
0x140716f52: cmp    eax,DWORD PTR [r9+0x34]
0x140716f56: jl     0x140716f63
0x140716f58: mov    r13d,0x3
0x140716f5e: jmp    0x140716d68
0x140716f63: mov    r10d,DWORD PTR [rsp+0x48]
0x140716f68: cmp    eax,DWORD PTR [r9+0x30]
0x140716f6c: jl     0x140716f79
0x140716f6e: mov    r13d,0x2
0x140716f74: jmp    0x140716d6d
0x140716f79: cmp    eax,DWORD PTR [r9+0x2c]
0x140716f7d: mov    eax,0x1
0x140716f82: cmovge r13d,eax
0x140716f86: jmp    0x140716d6d
0x140716f8b: cmp    r10d,0x3
0x140716f8f: jne    0x140717003
0x140716f91: cmp    r13d,r10d
0x140716f94: jne    0x140716fc1
0x140716f96: mov    r8d,0xf
0x140716f9c: lea    rdx,[rip+0xf6a2bd]        # 0x141681260 ; SOURCE 'guttural-voiced'
0x140716fa3: mov    rcx,QWORD PTR [rsp+0x68]
0x140716fa8: call   0x14006f860
0x140716fad: mov    r15d,DWORD PTR [rsp+0x38]
0x140716fb2: mov    DWORD PTR [rsp+0x4c],r15d
0x140716fb7: mov    rsi,QWORD PTR [rsp+0x40]
0x140716fbc: jmp    0x140716c22
0x140716fc1: mov    QWORD PTR [rsp+0x50],r14
0x140716fc6: mov    QWORD PTR [rsp+0x58],rsi
0x140716fcb: cmp    r13d,0xfffffffd
0x140716fcf: jne    0x140717069
0x140716fd5: mov    r8d,0xe
0x140716fdb: lea    rdx,[rip+0xf6a26e]        # 0x141681250 ; SOURCE 'grating-voiced'
0x140716fe2: mov    rcx,QWORD PTR [rsp+0x68]
0x140716fe7: call   0x14006f860
0x140716fec: mov    r15d,DWORD PTR [rsp+0x38]
0x140716ff1: mov    DWORD PTR [rsp+0x4c],r15d
0x140716ff6: mov    r13,rsi
0x140716ff9: mov    rsi,QWORD PTR [rsp+0x40]
0x140716ffe: jmp    0x140716c27
0x140717003: cmp    r10d,0xfffffffd
0x140717007: jne    0x140717059
0x140717009: cmp    r13d,r10d
0x14071700c: jne    0x14071701d
0x14071700e: mov    r8d,0xc
0x140717014: lea    rdx,[rip+0xf69645]        # 0x141680660 ; SOURCE 'clear-voiced'
0x14071701b: jmp    0x140716fa3
0x14071701d: mov    QWORD PTR [rsp+0x50],r12
0x140717022: mov    QWORD PTR [rsp+0x58],r15
0x140717027: cmp    r13d,0x3
0x14071702b: jne    0x14071709f
0x14071702d: mov    r8d,0xb
0x140717033: lea    rdx,[rip+0xf69656]        # 0x141680690 ; SOURCE 'deep-voiced'
0x14071703a: mov    rcx,QWORD PTR [rsp+0x68]
0x14071703f: call   0x14006f860
0x140717044: mov    eax,DWORD PTR [rsp+0x38]
0x140717048: mov    DWORD PTR [rsp+0x4c],eax
0x14071704c: mov    r13,r15
0x14071704f: mov    rsi,QWORD PTR [rsp+0x40]
0x140717054: jmp    0x140716c27
0x140717059: mov    QWORD PTR [rsp+0x50],r12
0x14071705e: mov    QWORD PTR [rsp+0x58],rsi
0x140717063: cmp    r10d,0x2
0x140717067: jl     0x140717099
0x140717069: cmp    r13d,0x2
0x14071706d: jl     0x140717081
0x14071706f: mov    r8d,0xc
0x140717075: lea    rdx,[rip+0xf695f4]        # 0x141680670 ; SOURCE 'raspy-voiced'
0x14071707c: jmp    0x140716fa3
0x140717081: cmp    r13d,0xfffffffe
0x140717085: jg     0x140717099
0x140717087: mov    r8d,0xe
0x14071708d: lea    rdx,[rip+0xf6a1ac]        # 0x141681240 ; SOURCE 'squeaky-voiced'
0x140717094: jmp    0x140716fa3
0x140717099: cmp    r10d,0xfffffffe
0x14071709d: jg     0x1407170d4
0x14071709f: cmp    r13d,0x2
0x1407170a3: jge    0x14071700e
0x1407170a9: cmp    r13d,0xfffffffe
0x1407170ad: jg     0x1407170d4
0x1407170af: lea    rdx,[rip+0xf695aa]        # 0x141680660 ; SOURCE 'clear-voiced'
0x1407170b6: mov    rcx,QWORD PTR [rsp+0x68]
0x1407170bb: call   0x14006f510
0x1407170c0: mov    r15d,DWORD PTR [rsp+0x38]
0x1407170c5: mov    DWORD PTR [rsp+0x4c],r15d
0x1407170ca: mov    rsi,QWORD PTR [rsp+0x40]
0x1407170cf: jmp    0x140716c22
0x1407170d4: cmp    r10d,0xfffffffd
0x1407170d8: je     0x14071700e
0x1407170de: cmp    r10d,0xfffffffe
0x1407170e2: je     0x1407170af
0x1407170e4: cmp    r10d,0x3
0x1407170e8: jne    0x1407170f3
0x1407170ea: lea    rdx,[rip+0xf6a15f]        # 0x141681250 ; SOURCE 'grating-voiced'
0x1407170f1: jmp    0x1407170b6
0x1407170f3: cmp    r10d,0x2
0x1407170f7: jne    0x140716e32
0x1407170fd: lea    rdx,[rip+0xf6a12c]        # 0x141681230 ; SOURCE 'scratchy-voiced'
0x140717104: jmp    0x1407170b6
0x140717106: cmp    r13d,0xfffffffe
0x14071710a: jne    0x140717131
0x14071710c: lea    rdx,[rip+0xf6956d]        # 0x141680680 ; SOURCE 'high-voiced'
0x140717113: mov    rcx,QWORD PTR [rsp+0x68]
0x140717118: call   0x14006f510
0x14071711d: mov    r15d,DWORD PTR [rsp+0x38]
0x140717122: mov    DWORD PTR [rsp+0x4c],r15d
0x140717127: mov    rsi,QWORD PTR [rsp+0x40]
0x14071712c: jmp    0x140716c1d
0x140717131: cmp    r13d,0x3
0x140717135: jne    0x140717143
0x140717137: lea    rdx,[rip+0xf69552]        # 0x141680690 ; SOURCE 'deep-voiced'
0x14071713e: jmp    0x140716e43
0x140717143: cmp    r13d,0x2
0x140717147: jne    0x140716e57
0x14071714d: lea    rdx,[rip+0xf6a0cc]        # 0x141681220 ; SOURCE 'low-voiced'
0x140717154: jmp    0x140716e43
0x140717159: test   r10,r10
0x14071715c: je     0x1407171c6
0x14071715e: movsxd rcx,DWORD PTR [r9]
0x140717161: mov    rax,QWORD PTR [r14+0x1620]
0x140717168: mov    rsi,QWORD PTR [rax+rcx*8]
0x14071716c: mov    rax,QWORD PTR [rsi+0x80]
0x140717173: movzx  r12d,WORD PTR [rax]
0x140717177: mov    WORD PTR [rsp+0x60],r12w
0x14071717d: mov    rax,QWORD PTR [rsi+0x98]
0x140717184: movzx  r13d,WORD PTR [rax]
0x140717188: mov    WORD PTR [rsp+0x38],r13w
0x14071718e: lea    rdx,[rsi+0x58]
0x140717192: lea    rax,[rbp+0x170]
0x140717199: cmp    rax,rdx
0x14071719c: je     0x1407171bf
0x14071719e: mov    r8,QWORD PTR [rdx+0x10]
0x1407171a2: cmp    QWORD PTR [rdx+0x18],0xf
0x1407171a7: jbe    0x1407171ac
0x1407171a9: mov    rdx,QWORD PTR [rdx]
0x1407171ac: lea    rcx,[rbp+0x170]
0x1407171b3: call   0x14006f860
0x1407171b8: mov    r15,QWORD PTR [rbp+0x168]
0x1407171bf: movzx  r9d,WORD PTR [rsi+0x78]
0x1407171c4: jmp    0x14071722d
0x1407171c6: mov    rax,QWORD PTR [r11+0x68]
0x1407171ca: movsxd rcx,DWORD PTR [rax]
0x1407171cd: mov    rax,QWORD PTR [r14+0x16c8]
0x1407171d4: mov    rsi,QWORD PTR [rax+rcx*8]
0x1407171d8: mov    rax,QWORD PTR [rsi+0x30]
0x1407171dc: movzx  r12d,WORD PTR [rax]
0x1407171e0: mov    WORD PTR [rsp+0x60],r12w
0x1407171e6: mov    rax,QWORD PTR [rsi+0x48]
0x1407171ea: movzx  r13d,WORD PTR [rax]
0x1407171ee: mov    WORD PTR [rsp+0x38],r13w
0x1407171f4: lea    rdx,[rsi+0x70]
0x1407171f8: lea    rax,[rbp+0x170]
0x1407171ff: cmp    rax,rdx
0x140717202: je     0x140717225
0x140717204: mov    r8,QWORD PTR [rdx+0x10]
0x140717208: cmp    QWORD PTR [rdx+0x18],0xf
0x14071720d: jbe    0x140717212
0x14071720f: mov    rdx,QWORD PTR [rdx]
0x140717212: lea    rcx,[rbp+0x170]
0x140717219: call   0x14006f860
0x14071721e: mov    r15,QWORD PTR [rbp+0x168]
0x140717225: movzx  r9d,WORD PTR [rsi+0x90]
0x14071722d: movsx  r8,r12w
0x140717231: mov    rax,QWORD PTR [rbp+0x130]
0x140717238: mov    rsi,QWORD PTR [rsp+0x40]
0x14071723d: cmp    BYTE PTR [rax+r8*1],0x0
0x140717242: jne    0x140716c22
0x140717248: cmp    r13w,0xffff
0x14071724d: je     0x14071727e
0x14071724f: mov    rax,QWORD PTR [rsi+0x5f8]
0x140717256: mov    rcx,QWORD PTR [rax]
0x140717259: mov    rax,QWORD PTR [rcx+r8*8]
0x14071725d: movsx  rcx,r13w
0x140717261: mov    rax,QWORD PTR [rax+0x58]
0x140717265: mov    rcx,QWORD PTR [rax+rcx*8]
0x140717269: movsxd rdx,DWORD PTR [rcx+0x68]
0x14071726d: mov    rax,QWORD PTR [rsi+0x538]
0x140717274: test   BYTE PTR [rax+rdx*4],0x1
0x140717278: jne    0x140716c22
0x14071727e: mov    rax,QWORD PTR [rsi+0x4f0]
0x140717285: test   BYTE PTR [rax+r8*4],0x2
0x14071728a: jne    0x140716c22
0x140717290: cmp    r9w,0xffff
0x140717295: je     0x1407172c6
0x140717297: lea    rdx,[rbp+0x170]
0x14071729e: cmp    QWORD PTR [rbp+0x188],0xf
0x1407172a6: cmova  rdx,QWORD PTR [rbp+0x170]
0x1407172ae: mov    r8,QWORD PTR [rbp+0x180]
0x1407172b5: lea    rcx,[rbp+0x150]
0x1407172bc: call   0x14006f860
0x1407172c1: jmp    0x14071768a
0x1407172c6: cmp    r13w,0xffff
0x1407172cb: je     0x14071766d
0x1407172d1: test   r12w,r12w
0x1407172d5: js     0x14071750d
0x1407172db: mov    rax,QWORD PTR [rsi+0x5f8]
0x1407172e2: mov    rdx,QWORD PTR [rax]
0x1407172e5: movsx  rsi,r12w
0x1407172e9: mov    rcx,QWORD PTR [rax+0x8]
0x1407172ed: sub    rcx,rdx
0x1407172f0: sar    rcx,0x3
0x1407172f4: cmp    rsi,rcx
0x1407172f7: jae    0x14071750d
0x1407172fd: mov    rax,QWORD PTR [rdx+rsi*8]
0x140717301: mov    rcx,QWORD PTR [rax+0x98]
0x140717308: sub    rcx,QWORD PTR [rax+0x90]
0x14071730f: sar    rcx,0x3
0x140717313: xor    eax,eax
0x140717315: mov    QWORD PTR [rbp+0x160],rax
0x14071731c: lea    rax,[rbp+0x150]
0x140717323: test   rcx,rcx
0x140717326: je     0x140717388
0x140717328: cmp    r15,0xf
0x14071732c: cmova  rax,QWORD PTR [rbp+0x150]
0x140717334: mov    BYTE PTR [rax],0x0
0x140717337: mov    rax,QWORD PTR [rsp+0x40]
0x14071733c: mov    rax,QWORD PTR [rax+0x5f8]
0x140717343: mov    rcx,QWORD PTR [rax]
0x140717346: mov    rax,QWORD PTR [rcx+rsi*8]
0x14071734a: cmp    DWORD PTR [rax+0x84],0x1
0x140717351: jle    0x14071735f
0x140717353: mov    rcx,QWORD PTR [rax+0xa8]
0x14071735a: mov    rdx,QWORD PTR [rcx]
0x14071735d: jmp    0x140717369
0x14071735f: mov    rax,QWORD PTR [rax+0x90]
0x140717366: mov    rdx,QWORD PTR [rax]
0x140717369: cmp    QWORD PTR [rdx+0x18],0xf
0x14071736e: mov    r8,QWORD PTR [rdx+0x10]
0x140717372: jbe    0x140717377
0x140717374: mov    rdx,QWORD PTR [rdx]
0x140717377: lea    rcx,[rbp+0x150]
0x14071737e: call   0x14006f9a0
0x140717383: jmp    0x140717600
0x140717388: cmp    r15,0xf
0x14071738c: cmova  rax,QWORD PTR [rbp+0x150]
0x140717394: mov    BYTE PTR [rax],0x0
0x140717397: mov    r8d,0x9
0x14071739d: lea    rdx,[rip+0xf64a4c]        # 0x14167bdf0 ; SOURCE 'body part'
0x1407173a4: lea    rcx,[rbp+0x150]
0x1407173ab: call   0x14006f9a0
0x1407173b0: mov    rcx,QWORD PTR [rsp+0x40]
0x1407173b5: mov    rax,QWORD PTR [rcx+0x5f8]
0x1407173bc: mov    rcx,QWORD PTR [rax]
0x1407173bf: mov    rax,QWORD PTR [rcx+rsi*8]
0x1407173c3: cmp    DWORD PTR [rax+0x84],0x1
0x1407173ca: jle    0x140717600
0x1407173d0: mov    r14,QWORD PTR [rbp+0x160]
0x1407173d7: mov    r15,QWORD PTR [rbp+0x168]
0x1407173de: cmp    r14,r15
0x1407173e1: jae    0x14071740d
0x1407173e3: lea    rax,[r14+0x1]
0x1407173e7: mov    QWORD PTR [rbp+0x160],rax
0x1407173ee: lea    rax,[rbp+0x150]
0x1407173f5: cmp    r15,0xf
0x1407173f9: cmova  rax,QWORD PTR [rbp+0x150]
0x140717401: mov    WORD PTR [r14+rax*1],0x73
0x140717408: jmp    0x1407175fb
0x14071740d: movabs rdx,0x7fffffffffffffff
0x140717417: mov    rax,rdx
0x14071741a: sub    rax,r14
0x14071741d: cmp    rax,0x1
0x140717421: jb     0x140717c75
0x140717427: lea    r13,[r14+0x1]
0x14071742b: mov    rsi,r13
0x14071742e: or     rsi,0xf
0x140717432: cmp    rsi,rdx
0x140717435: jbe    0x14071743c
0x140717437: mov    rsi,rdx
0x14071743a: jmp    0x14071745d
0x14071743c: mov    rcx,r15
0x14071743f: shr    rcx,1
0x140717442: mov    rax,rdx
0x140717445: sub    rax,rcx
0x140717448: cmp    r15,rax
0x14071744b: jbe    0x140717452
0x14071744d: mov    rsi,rdx
0x140717450: jmp    0x14071745d
0x140717452: lea    rax,[rcx+r15*1]
0x140717456: cmp    rsi,rax
0x140717459: cmovb  rsi,rax
0x14071745d: lea    rcx,[rsi+0x1]
0x140717461: call   0x140070760
0x140717466: mov    r12,rax
0x140717469: mov    QWORD PTR [rbp+0x160],r13
0x140717470: mov    QWORD PTR [rbp+0x168],rsi
0x140717477: mov    r8,r14
0x14071747a: mov    rcx,rax
0x14071747d: cmp    r15,0xf
0x140717481: jbe    0x1407174e2
0x140717483: mov    rsi,QWORD PTR [rbp+0x150]
0x14071748a: mov    rdx,rsi
0x14071748d: call   0x1415359e8
0x140717492: mov    WORD PTR [r12+r14*1],0x73
0x140717499: lea    rdx,[r15+0x1]
0x14071749d: cmp    rdx,0x1000
0x1407174a4: jb     0x1407174c2
0x1407174a6: add    rdx,0x27
0x1407174aa: mov    rcx,QWORD PTR [rsi-0x8]
0x1407174ae: sub    rsi,rcx
0x1407174b1: lea    rax,[rsi-0x8]
0x1407174b5: cmp    rax,0x1f
0x1407174b9: ja     0x140717b6c
0x1407174bf: mov    rsi,rcx
0x1407174c2: mov    rcx,rsi
0x1407174c5: call   0x1415345f0
0x1407174ca: mov    QWORD PTR [rbp+0x150],r12
0x1407174d1: movzx  r12d,WORD PTR [rsp+0x60]
0x1407174d7: movzx  r13d,WORD PTR [rsp+0x38]
0x1407174dd: jmp    0x1407175fb
0x1407174e2: lea    rdx,[rbp+0x150]
0x1407174e9: call   0x1415359e8
0x1407174ee: mov    WORD PTR [r12+r14*1],0x73
0x1407174f5: mov    QWORD PTR [rbp+0x150],r12
0x1407174fc: movzx  r12d,WORD PTR [rsp+0x60]
0x140717502: movzx  r13d,WORD PTR [rsp+0x38]
0x140717508: jmp    0x1407175fb
0x14071750d: cmp    r15,0x9
0x140717511: jb     0x14071754d
0x140717513: lea    rsi,[rbp+0x150]
0x14071751a: cmp    r15,0xf
0x14071751e: cmova  rsi,QWORD PTR [rbp+0x150]
0x140717526: mov    eax,0x9
0x14071752b: mov    QWORD PTR [rbp+0x160],rax
0x140717532: mov    r8d,eax
0x140717535: lea    rdx,[rip+0xf648b4]        # 0x14167bdf0 ; SOURCE 'body part'
0x14071753c: mov    rcx,rsi
0x14071753f: call   0x141535d8a
0x140717544: mov    BYTE PTR [rsi+0x9],0x0
0x140717548: jmp    0x140717600
0x14071754d: mov    rcx,r15
0x140717550: shr    rcx,1
0x140717553: movabs rdx,0x7fffffffffffffff
0x14071755d: mov    rax,rdx
0x140717560: sub    rax,rcx
0x140717563: cmp    r15,rax
0x140717566: jbe    0x14071756d
0x140717568: mov    rsi,rdx
0x14071756b: jmp    0x14071757d
0x14071756d: lea    rax,[r15+rcx*1]
0x140717571: mov    esi,0xf
0x140717576: cmp    rax,rsi
0x140717579: cmova  rsi,rax
0x14071757d: lea    rcx,[rsi+0x1]
0x140717581: call   0x140070760
0x140717586: mov    r14,rax
0x140717589: mov    eax,0x9
0x14071758e: mov    QWORD PTR [rbp+0x160],rax
0x140717595: mov    QWORD PTR [rbp+0x168],rsi
0x14071759c: movsd  xmm0,QWORD PTR [rip+0xf6484c]        # 0x14167bdf0 ; SOURCE 'body part'
0x1407175a4: movsd  QWORD PTR [r14],xmm0
0x1407175a9: movzx  ecx,BYTE PTR [rip+0xf64848]        # 0x14167bdf8 ; SOURCE 't'
0x1407175b0: mov    BYTE PTR [r14+0x8],cl
0x1407175b4: mov    BYTE PTR [r14+0x9],0x0
0x1407175b9: cmp    r15,0xf
0x1407175bd: jbe    0x1407175f4
0x1407175bf: lea    rdx,[r15+0x1]
0x1407175c3: mov    rcx,QWORD PTR [rbp+0x150]
0x1407175ca: mov    rax,rcx
0x1407175cd: cmp    rdx,0x1000
0x1407175d4: jb     0x1407175ef
0x1407175d6: add    rdx,0x27
0x1407175da: mov    rcx,QWORD PTR [rcx-0x8]
0x1407175de: sub    rax,rcx
0x1407175e1: add    rax,0xfffffffffffffff8
0x1407175e5: cmp    rax,0x1f
0x1407175e9: ja     0x140717b6c
0x1407175ef: call   0x1415345f0
0x1407175f4: mov    QWORD PTR [rbp+0x150],r14
0x1407175fb: mov    r14,QWORD PTR [rsp+0x50]
0x140717600: movsx  rdx,r12w
0x140717604: mov    rsi,QWORD PTR [rsp+0x40]
0x140717609: mov    rax,QWORD PTR [rsi+0x5f8]
0x140717610: mov    rcx,QWORD PTR [rax]
0x140717613: mov    rax,QWORD PTR [rcx+rdx*8]
0x140717617: movsx  rcx,r13w
0x14071761b: mov    rax,QWORD PTR [rax+0x58]
0x14071761f: mov    rcx,QWORD PTR [rax+rcx*8]
0x140717623: movsxd rdx,DWORD PTR [rcx+0x20]
0x140717627: mov    rax,QWORD PTR [rsp+0x58]
0x14071762c: mov    rax,QWORD PTR [rax+0x208]
0x140717633: mov    r8,QWORD PTR [rax+rdx*8]
0x140717637: add    r8,0x30
0x14071763b: lea    rdx,[rip+0xed1516]        # 0x1415e8b58 ; SOURCE "'s "
0x140717642: lea    rcx,[rbp+0x190]
0x140717649: call   0x14014af10
0x14071764e: nop
0x14071764f: mov    rdx,rax
0x140717652: lea    rcx,[rbp+0x150]
0x140717659: call   0x1400b9ca0
0x14071765e: nop
0x14071765f: lea    rcx,[rbp+0x190]
0x140717666: call   0x14006f7e0
0x14071766b: jmp    0x14071768a
0x14071766d: mov    WORD PTR [rsp+0x20],0x2
0x140717674: xor    r9d,r9d
0x140717677: movzx  r8d,r12w
0x14071767b: lea    rdx,[rbp+0x150]
0x140717682: mov    rcx,rsi
0x140717685: call   0x14132f540
0x14071768a: xor    r9d,r9d
0x14071768d: mov    r10d,r9d
0x140717690: mov    DWORD PTR [rsp+0x70],r9d
0x140717695: mov    r13d,r9d
0x140717698: mov    rax,QWORD PTR [rbp-0x60]
0x14071769c: mov    rdx,QWORD PTR [rax+0x8]
0x1407176a0: mov    rax,QWORD PTR [rax+0x10]
0x1407176a4: sub    rax,rdx
0x1407176a7: sar    rax,0x2
0x1407176ab: test   rax,rax
0x1407176ae: je     0x140716c22
0x1407176b4: mov    rdi,QWORD PTR [rbp-0x60]
0x1407176b8: mov    rbx,QWORD PTR [rsp+0x40]
0x1407176bd: nop    DWORD PTR [rax]
0x1407176c0: movsxd r14,DWORD PTR [rdx+r13*4]
0x1407176c4: mov    rax,QWORD PTR [rsp+0x50]
0x1407176c9: mov    rax,QWORD PTR [rax+0x1620]
0x1407176d0: mov    r15,QWORD PTR [rax+r14*8]
0x1407176d4: cmp    DWORD PTR [r15+0x38],0x0
0x1407176d9: jne    0x140717b08
0x1407176df: mov    rax,QWORD PTR [rdi+0x20]
0x1407176e3: mov    r12d,DWORD PTR [rax+r13*4]
0x1407176e7: cmp    r12d,DWORD PTR [rsp+0x4c]
0x1407176ec: jle    0x140717b08
0x1407176f2: mov    esi,0x64
0x1407176f7: mov    r8d,r9d
0x1407176fa: mov    rdx,r9
0x1407176fd: mov    r11,QWORD PTR [rbx+0x708]
0x140717704: mov    r9,QWORD PTR [rbx+0x700]
0x14071770b: mov    rax,r11
0x14071770e: sub    rax,r9
0x140717711: sar    rax,0x2
0x140717715: test   rax,rax
0x140717718: je     0x140717761
0x14071771a: mov    rax,QWORD PTR [rsp+0x50]
0x14071771f: mov    r10,QWORD PTR [rax+0x1638]
0x140717726: data16 nop WORD PTR [rax+rax*1+0x0]
0x140717730: lea    rax,[rdx*4+0x0]
0x140717738: cmp    DWORD PTR [r10+rax*1],r14d
0x14071773c: je     0x140717758
0x14071773e: inc    r8d
0x140717741: inc    rdx
0x140717744: mov    rcx,r11
0x140717747: sub    rcx,r9
0x14071774a: sar    rcx,0x2
0x14071774e: movsxd rax,r8d
0x140717751: cmp    rax,rcx
0x140717754: jb     0x140717730
0x140717756: jmp    0x14071775c
0x140717758: mov    esi,DWORD PTR [r9+rax*1]
0x14071775c: mov    r10d,DWORD PTR [rsp+0x70]
0x140717761: xor    r9d,r9d
0x140717764: cmp    esi,DWORD PTR [r15+0x20]
0x140717768: jg     0x140717776
0x14071776a: mov    edx,0xfffffffd
0x14071776f: mov    esi,0x1
0x140717774: jmp    0x1407177cd
0x140717776: cmp    esi,DWORD PTR [r15+0x24]
0x14071777a: jg     0x140717788
0x14071777c: mov    edx,0xfffffffe
0x140717781: mov    esi,0x1
0x140717786: jmp    0x1407177cd
0x140717788: cmp    esi,DWORD PTR [r15+0x28]
0x14071778c: jg     0x14071779a
0x14071778e: mov    edx,0xffffffff
0x140717793: mov    esi,0x1
0x140717798: jmp    0x1407177cd
0x14071779a: cmp    esi,DWORD PTR [r15+0x34]
0x14071779e: jl     0x1407177ac
0x1407177a0: mov    edx,0x3
0x1407177a5: mov    esi,0x1
0x1407177aa: jmp    0x1407177cd
0x1407177ac: cmp    esi,DWORD PTR [r15+0x30]
0x1407177b0: jl     0x1407177be
0x1407177b2: mov    edx,0x2
0x1407177b7: mov    esi,0x1
0x1407177bc: jmp    0x1407177cd
0x1407177be: mov    edx,r9d
0x1407177c1: cmp    esi,DWORD PTR [r15+0x2c]
0x1407177c5: mov    esi,0x1
0x1407177ca: cmovge edx,esi
0x1407177cd: movsx  rax,WORD PTR [r15]
0x1407177d1: cmp    eax,0x15
0x1407177d4: ja     0x140717b08
0x1407177da: lea    r8,[rip+0xffffffffff8e881f]        # 0x140000000
0x1407177e1: mov    ecx,DWORD PTR [r8+rax*4+0x717c7c]
0x1407177e9: add    rcx,r8
0x1407177ec: jmp    rcx
0x1407177ee: test   edx,edx
0x1407177f0: jle    0x1407177fe
0x1407177f2: lea    rdx,[rip+0xf68597]        # 0x14167fd90 ; SOURCE 'tall'
0x1407177f9: jmp    0x140717aaf
0x1407177fe: js     0x14071783d
0x140717800: jmp    0x140717b08
0x140717805: test   edx,edx
0x140717807: jle    0x140717815
0x140717809: lea    rdx,[rip+0xf686fc]        # 0x14167ff0c ; SOURCE 'broad'
0x140717810: jmp    0x140717aaf
0x140717815: jns    0x140717abb
0x14071781b: lea    rdx,[rip+0xf686e2]        # 0x14167ff04 ; SOURCE 'narrow'
0x140717822: jmp    0x140717aaf
0x140717827: test   edx,edx
0x140717829: jle    0x140717837
0x14071782b: lea    rdx,[rip+0xf686ca]        # 0x14167fefc ; SOURCE 'long'
0x140717832: jmp    0x140717aaf
0x140717837: jns    0x140717b08
0x14071783d: lea    rdx,[rip+0xf686d0]        # 0x14167ff14 ; SOURCE 'short'
0x140717844: jmp    0x140717aaf
0x140717849: test   edx,edx
0x14071784b: jle    0x140717859
0x14071784d: lea    rdx,[rip+0xf2d98c]        # 0x1416451e0 ; SOURCE 'high'
0x140717854: jmp    0x140717aaf
0x140717859: jns    0x140717b08
0x14071785f: lea    rdx,[rip+0xf2d982]        # 0x1416451e8 ; SOURCE 'low'
0x140717866: jmp    0x140717aaf
0x14071786b: test   edx,edx
0x14071786d: jle    0x14071787b
0x14071786f: lea    rdx,[rip+0xf6867a]        # 0x14167fef0 ; SOURCE 'close-set'
0x140717876: jmp    0x140717aaf
0x14071787b: jns    0x140717b08
0x140717881: lea    rdx,[rip+0xf68658]        # 0x14167fee0 ; SOURCE 'wide-set'
0x140717888: jmp    0x140717aaf
0x14071788d: test   edx,edx
0x14071788f: jle    0x14071789d
0x140717891: lea    rdx,[rip+0xf6861c]        # 0x14167feb4 ; SOURCE 'sunken'
0x140717898: jmp    0x140717aaf
0x14071789d: cmp    edx,0xfffffffd
0x1407178a0: jne    0x1407178ae
0x1407178a2: lea    rdx,[rip+0xf68c5f]        # 0x141680508 ; SOURCE 'bulging'
0x1407178a9: jmp    0x140717aaf
0x1407178ae: test   edx,edx
0x1407178b0: jns    0x140717b08
0x1407178b6: lea    rdx,[rip+0xf685eb]        # 0x14167fea8 ; SOURCE 'protruding'
0x1407178bd: jmp    0x140717aaf
0x1407178c2: test   edx,edx
0x1407178c4: jle    0x1407178d2
0x1407178c6: lea    rdx,[rip+0xf685cb]        # 0x14167fe98 ; SOURCE 'wrinkled'
0x1407178cd: jmp    0x140717aaf
0x1407178d2: jns    0x140717b08
0x1407178d8: lea    rdx,[rip+0xf685b1]        # 0x14167fe90 ; SOURCE 'smooth'
0x1407178df: jmp    0x140717aaf
0x1407178e4: cmp    edx,0x3
0x1407178e7: jne    0x1407178f5
0x1407178e9: lea    rdx,[rip+0xf6914c]        # 0x141680a3c ; SOURCE 'coiled'
0x1407178f0: jmp    0x140717aaf
0x1407178f5: cmp    edx,0x2
0x1407178f8: jne    0x140717906
0x1407178fa: lea    rdx,[rip+0xf68573]        # 0x14167fe74 ; SOURCE 'curly'
0x140717901: jmp    0x140717aaf
0x140717906: cmp    edx,0x1
0x140717909: jne    0x140717917
0x14071790b: lea    rdx,[rip+0xf69122]        # 0x141680a34 ; SOURCE 'wavy'
0x140717912: jmp    0x140717aaf
0x140717917: test   edx,edx
0x140717919: jns    0x140717b08
0x14071791f: lea    rdx,[rip+0xf68542]        # 0x14167fe68 ; SOURCE 'straight'
0x140717926: jmp    0x140717aaf
0x14071792b: test   edx,edx
0x14071792d: jle    0x14071793b
0x14071792f: lea    rdx,[rip+0xf68552]        # 0x14167fe88 ; SOURCE 'convex'
0x140717936: jmp    0x140717aaf
0x14071793b: jns    0x140717b08
0x140717941: lea    rdx,[rip+0xf68538]        # 0x14167fe80 ; SOURCE 'concave'
0x140717948: jmp    0x140717aaf
0x14071794d: test   edx,edx
0x14071794f: jle    0x14071795d
0x140717951: lea    rdx,[rip+0xf68cac]        # 0x141680604 ; SOURCE 'dense'
0x140717958: jmp    0x140717aaf
0x14071795d: jns    0x140717b08
0x140717963: lea    rdx,[rip+0xf68c92]        # 0x1416805fc ; SOURCE 'sparse'
0x14071796a: jmp    0x140717aaf
0x14071796f: test   edx,edx
0x140717971: jle    0x14071797f
0x140717973: lea    rdx,[rip+0xf68c7a]        # 0x1416805f4 ; SOURCE 'thick'
0x14071797a: jmp    0x140717aaf
0x14071797f: jns    0x140717b08
0x140717985: lea    rdx,[rip+0xf68c60]        # 0x1416805ec ; SOURCE 'thin'
0x14071798c: jmp    0x140717aaf
0x140717991: test   edx,edx
0x140717993: jle    0x1407179a1
0x140717995: lea    rdx,[rip+0xf68c44]        # 0x1416805e0 ; SOURCE 'upturned'
0x14071799c: jmp    0x140717aaf
0x1407179a1: jns    0x140717b08
0x1407179a7: lea    rdx,[rip+0xf68c26]        # 0x1416805d4 ; SOURCE 'hooked'
0x1407179ae: jmp    0x140717aaf
0x1407179b3: test   edx,edx
0x1407179b5: jle    0x1407179c3
0x1407179b7: lea    rdx,[rip+0xf69732]        # 0x1416810f0 ; SOURCE 'splayed'
0x1407179be: jmp    0x140717aaf
0x1407179c3: jns    0x140717b08
0x1407179c9: lea    rdx,[rip+0xf68be8]        # 0x1416805b8 ; SOURCE 'flattened'
0x1407179d0: jmp    0x140717aaf
0x1407179d5: cmp    edx,0x3
0x1407179d8: jne    0x1407179e6
0x1407179da: lea    rdx,[rip+0xf68bc7]        # 0x1416805a8 ; SOURCE 'great-lobed'
0x1407179e1: jmp    0x140717aaf
0x1407179e6: test   edx,edx
0x1407179e8: jle    0x1407179f6
0x1407179ea: lea    rdx,[rip+0xf68da7]        # 0x141680798 ; SOURCE 'free-lobed'
0x1407179f1: jmp    0x140717aaf
0x1407179f6: cmp    edx,0xfffffffe
0x1407179f9: jg     0x140717a07
0x1407179fb: lea    rdx,[rip+0xf68b96]        # 0x141680598 ; SOURCE 'fuse-lobed'
0x140717a02: jmp    0x140717aaf
0x140717a07: cmp    edx,0xffffffff
0x140717a0a: jne    0x140717b08
0x140717a10: lea    rdx,[rip+0xf68d59]        # 0x141680770 ; SOURCE 'small-lobed'
0x140717a17: jmp    0x140717aaf
0x140717a1c: cmp    edx,0x3
0x140717a1f: jne    0x140717a2d
0x140717a21: lea    rdx,[rip+0xf68d38]        # 0x141680760 ; SOURCE 'widely-spaced'
0x140717a28: jmp    0x140717aaf
0x140717a2d: cmp    edx,0x2
0x140717a30: jne    0x140717a3b
0x140717a32: lea    rdx,[rip+0xf68b57]        # 0x141680590 ; SOURCE 'gapped'
0x140717a39: jmp    0x140717aaf
0x140717a3b: cmp    edx,0xfffffffd
0x140717a3e: jne    0x140717a49
0x140717a40: lea    rdx,[rip+0xf68d11]        # 0x141680758 ; SOURCE 'tangled'
0x140717a47: jmp    0x140717aaf
0x140717a49: cmp    edx,0xfffffffe
0x140717a4c: jne    0x140717b08
0x140717a52: lea    rdx,[rip+0xf68b2f]        # 0x141680588 ; SOURCE 'crowded'
0x140717a59: jmp    0x140717aaf
0x140717a5b: test   edx,edx
0x140717a5d: jle    0x140717a68
0x140717a5f: lea    rdx,[rip+0xf68c42]        # 0x1416806a8 ; SOURCE 'round'
0x140717a66: jmp    0x140717aaf
0x140717a68: cmp    edx,0xfffffffd
0x140717a6b: jne    0x140717a76
0x140717a6d: lea    rdx,[rip+0xf68cb4]        # 0x141680728 ; SOURCE 'slit'
0x140717a74: jmp    0x140717aaf
0x140717a76: test   edx,edx
0x140717a78: jns    0x140717b08
0x140717a7e: lea    rdx,[rip+0xf6847f]        # 0x14167ff04 ; SOURCE 'narrow'
0x140717a85: jmp    0x140717aaf
0x140717a87: cmp    edx,0x2
0x140717a8a: jl     0x140717a95
0x140717a8c: lea    rdx,[rip+0xf68c0d]        # 0x1416806a0 ; SOURCE 'greasy'
0x140717a93: jmp    0x140717aaf
0x140717a95: cmp    edx,0xfffffffd
0x140717a98: jne    0x140717aa3
0x140717a9a: lea    rdx,[rip+0xf68c6f]        # 0x141680710 ; SOURCE 'crinkly'
0x140717aa1: jmp    0x140717aaf
0x140717aa3: cmp    edx,0xfffffffe
0x140717aa6: jne    0x140717b08
0x140717aa8: lea    rdx,[rip+0xf68bed]        # 0x14168069c ; SOURCE 'dry'
0x140717aaf: lea    rcx,[rbx+0x13e8]
0x140717ab6: call   0x14006f510
0x140717abb: mov    r8,rsi
0x140717abe: lea    rdx,[rip+0xf2ebb7]        # 0x14164667c ; SOURCE '-'
0x140717ac5: lea    rcx,[rbx+0x13e8]
0x140717acc: call   0x14006f9a0
0x140717ad1: lea    rdx,[rbp+0x150]
0x140717ad8: cmp    QWORD PTR [rbp+0x168],0xf
0x140717ae0: cmova  rdx,QWORD PTR [rbp+0x150]
0x140717ae8: mov    r8,QWORD PTR [rbp+0x160]
0x140717aef: lea    rcx,[rbx+0x13e8]
0x140717af6: call   0x14006f9a0
0x140717afb: mov    DWORD PTR [rsp+0x4c],r12d
0x140717b00: mov    r10d,DWORD PTR [rsp+0x70]
0x140717b05: xor    r9d,r9d
0x140717b08: inc    r10d
0x140717b0b: mov    DWORD PTR [rsp+0x70],r10d
0x140717b10: inc    r13
0x140717b13: mov    rdx,QWORD PTR [rdi+0x8]
0x140717b17: mov    rcx,QWORD PTR [rdi+0x10]
0x140717b1b: sub    rcx,rdx
0x140717b1e: sar    rcx,0x2
0x140717b22: movsxd rax,r10d
0x140717b25: cmp    rax,rcx
0x140717b28: jb     0x1407176c0
0x140717b2e: mov    rbx,QWORD PTR [rbp-0x40]
0x140717b32: mov    rdi,QWORD PTR [rbp-0x38]
0x140717b36: mov    rsi,QWORD PTR [rsp+0x40]
0x140717b3b: jmp    0x140716c1d
0x140717b40: mov    rsi,QWORD PTR [rsp+0x40]
0x140717b45: mov    r13,r15
0x140717b48: jmp    0x140716c27
0x140717b4d: mov    rsi,r10
0x140717b50: jmp    0x140716c1d
0x140717b55: mov    rsi,r9
0x140717b58: mov    r13,r15
0x140717b5b: jmp    0x140716c27
0x140717b60: mov    r14,rcx
0x140717b63: add    rbx,0x8
0x140717b67: jmp    0x140715e4c
0x140717b6c: call   QWORD PTR [rip+0xec8f2e]        # 0x1415e0aa0
0x140717b72: nop
0x140717b73: cmp    QWORD PTR [rsi+0x13f8],0x0
0x140717b7b: jne    0x140717b97
0x140717b7d: lea    rcx,[rsi+0x13e8]
0x140717b84: mov    r8d,0x7
0x140717b8a: lea    rdx,[rip+0xf69567]        # 0x1416810f8 ; SOURCE 'average'
0x140717b91: call   0x14006f860
0x140717b96: nop
0x140717b97: lea    rcx,[rbp-0x30]
0x140717b9b: call   0x1405be540
0x140717ba0: lea    rcx,[rbp+0x130]
0x140717ba7: call   0x14013bbc0
0x140717bac: lea    rcx,[rbp+0x118]
0x140717bb3: call   0x140066b00
0x140717bb8: lea    rcx,[rbp+0x100]
0x140717bbf: call   0x140066b00
0x140717bc4: lea    rcx,[rbp+0xc8]
0x140717bcb: call   0x14006f6e0
0x140717bd0: lea    rcx,[rbp+0xb0]
0x140717bd7: call   0x14006f6e0
0x140717bdc: lea    rcx,[rbp+0x98]
0x140717be3: call   0x14006f6e0
0x140717be8: lea    rcx,[rbp+0x80]
0x140717bef: call   0x14006f6e0
0x140717bf4: lea    rcx,[rbp+0x68]
0x140717bf8: call   0x14006f6e0
0x140717bfd: lea    rcx,[rbp+0x50]
0x140717c01: call   0x14006f740
0x140717c06: lea    rcx,[rbp+0x38]
0x140717c0a: call   0x14006f6e0
0x140717c0f: lea    rcx,[rbp+0x20]
0x140717c13: call   0x14006f6e0
0x140717c18: lea    rcx,[rbp+0x0]
0x140717c1c: call   0x14006f6e0
0x140717c21: lea    rcx,[rbp-0x18]
0x140717c25: call   0x14006f6e0
0x140717c2a: jmp    0x140717c45
0x140717c2c: mov    r8d,0x7
0x140717c32: lea    rdx,[rip+0xf694bf]        # 0x1416810f8 ; SOURCE 'average'
0x140717c39: lea    rcx,[rsi+0x13e8]
0x140717c40: call   0x14006f860
0x140717c45: mov    rcx,QWORD PTR [rbp+0x1b0]
0x140717c4c: xor    rcx,rsp
0x140717c4f: call   0x1415345d0
0x140717c54: lea    r11,[rsp+0x2c0]
0x140717c5c: mov    rbx,QWORD PTR [r11+0x38]
0x140717c60: mov    rsi,QWORD PTR [r11+0x40]
0x140717c64: mov    rdi,QWORD PTR [r11+0x48]
0x140717c68: mov    rsp,r11
0x140717c6b: pop    r15
0x140717c6d: pop    r14
0x140717c6f: pop    r13
0x140717c71: pop    r12
0x140717c73: pop    rbp
0x140717c74: ret
0x140717c75: call   0x140065820
0x140717c7a: nop
0x140717c7b: nop
