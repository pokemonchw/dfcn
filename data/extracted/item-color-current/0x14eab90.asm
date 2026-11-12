
D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe:     file format pei-x86-64


Disassembly of section .text:

00000001414eab90 <.text+0x14e9b90>:
   1414eab90:	rex push rbx
   1414eab92:	push   rbp
   1414eab93:	push   rsi
   1414eab94:	push   rdi
   1414eab95:	push   r12
   1414eab97:	push   r13
   1414eab99:	push   r14
   1414eab9b:	push   r15
   1414eab9d:	sub    rsp,0x58
   1414eaba1:	mov    rax,QWORD PTR [rip+0x3d3498]        # 0x1418be040
   1414eaba8:	xor    rax,rsp
   1414eabab:	mov    QWORD PTR [rsp+0x40],rax
   1414eabb0:	mov    esi,r9d
   1414eabb3:	movzx  r15d,r8w
   1414eabb7:	mov    rbx,rdx
   1414eabba:	mov    r13,rcx
   1414eabbd:	movsx  r12,WORD PTR [rsp+0xd0]
   1414eabc6:	xor    r14d,r14d
   1414eabc9:	mov    QWORD PTR [rdx+0x10],r14
   1414eabcd:	mov    rax,rdx
   1414eabd0:	cmp    QWORD PTR [rdx+0x18],0xf
   1414eabd5:	jbe    0x1414eabda
   1414eabd7:	mov    rax,QWORD PTR [rdx]
   1414eabda:	mov    BYTE PTR [rax],r14b
   1414eabdd:	cmp    esi,0xffffffff
   1414eabe0:	jne    0x1414ead99
   1414eabe6:	mov    eax,DWORD PTR [rsp+0xc0]
   1414eabed:	test   al,0x1
   1414eabef:	je     0x1414eac0d
   1414eabf1:	mov    r8d,0x5
   1414eabf7:	lea    rdx,[rip+0x145f06]        # 0x141630b04
   1414eabfe:	mov    rcx,rbx
   1414eac01:	call   0x140071040
   1414eac06:	mov    al,0x1
   1414eac08:	jmp    0x1414eafcb
   1414eac0d:	bt     eax,0xc
   1414eac11:	jae    0x1414eac2f
   1414eac13:	mov    r8d,0x4
   1414eac19:	lea    rdx,[rip+0x146a44]        # 0x141631664
   1414eac20:	mov    rcx,rbx
   1414eac23:	call   0x140071040
   1414eac28:	mov    al,0x1
   1414eac2a:	jmp    0x1414eafcb
   1414eac2f:	test   al,0x82
   1414eac31:	jne    0x1414ead5f
   1414eac37:	test   al,0x4
   1414eac39:	je     0x1414eac57
   1414eac3b:	mov    r8d,0x5
   1414eac41:	lea    rdx,[rip+0x146a0c]        # 0x141631654
   1414eac48:	mov    rcx,rbx
   1414eac4b:	call   0x140071040
   1414eac50:	mov    al,0x1
   1414eac52:	jmp    0x1414eafcb
   1414eac57:	test   al,0x8
   1414eac59:	je     0x1414eac77
   1414eac5b:	mov    r8d,0x4
   1414eac61:	lea    rdx,[rip+0x1469f4]        # 0x14163165c
   1414eac68:	mov    rcx,rbx
   1414eac6b:	call   0x140071040
   1414eac70:	mov    al,0x1
   1414eac72:	jmp    0x1414eafcb
   1414eac77:	test   al,0x20
   1414eac79:	je     0x1414eac97
   1414eac7b:	mov    r8d,0x4
   1414eac81:	lea    rdx,[rip+0x1469ec]        # 0x141631674
   1414eac88:	mov    rcx,rbx
   1414eac8b:	call   0x140071040
   1414eac90:	mov    al,0x1
   1414eac92:	jmp    0x1414eafcb
   1414eac97:	test   al,0x10
   1414eac99:	je     0x1414eacb7
   1414eac9b:	mov    r8d,0x7
   1414eaca1:	lea    rdx,[rip+0x1467d8]        # 0x141631480
   1414eaca8:	mov    rcx,rbx
   1414eacab:	call   0x140071040
   1414eacb0:	mov    al,0x1
   1414eacb2:	jmp    0x1414eafcb
   1414eacb7:	test   al,0x40
   1414eacb9:	je     0x1414eacd7
   1414eacbb:	mov    r8d,0x5
   1414eacc1:	lea    rdx,[rip+0x1469a4]        # 0x14163166c
   1414eacc8:	mov    rcx,rbx
   1414eaccb:	call   0x140071040
   1414eacd0:	mov    al,0x1
   1414eacd2:	jmp    0x1414eafcb
   1414eacd7:	bt     eax,0x8
   1414eacdb:	jae    0x1414eacf9
   1414eacdd:	mov    r8d,0x4
   1414eace3:	lea    rdx,[rip+0x14699a]        # 0x141631684
   1414eacea:	mov    rcx,rbx
   1414eaced:	call   0x140071040
   1414eacf2:	mov    al,0x1
   1414eacf4:	jmp    0x1414eafcb
   1414eacf9:	bt     eax,0x9
   1414eacfd:	jae    0x1414ead1b
   1414eacff:	mov    r8d,0xb
   1414ead05:	lea    rdx,[rip+0x2beb94]        # 0x1417a98a0
   1414ead0c:	mov    rcx,rbx
   1414ead0f:	call   0x140071040
   1414ead14:	mov    al,0x1
   1414ead16:	jmp    0x1414eafcb
   1414ead1b:	bt     eax,0xa
   1414ead1f:	jae    0x1414ead3d
   1414ead21:	mov    r8d,0x4
   1414ead27:	lea    rdx,[rip+0x146966]        # 0x141631694
   1414ead2e:	mov    rcx,rbx
   1414ead31:	call   0x140071040
   1414ead36:	mov    al,0x1
   1414ead38:	jmp    0x1414eafcb
   1414ead3d:	bt     eax,0xb
   1414ead41:	jae    0x1414ead99
   1414ead43:	mov    r8d,0x5
   1414ead49:	lea    rdx,[rip+0x14693c]        # 0x14163168c
   1414ead50:	mov    rcx,rbx
   1414ead53:	call   0x140071040
   1414ead58:	mov    al,0x1
   1414ead5a:	jmp    0x1414eafcb
   1414ead5f:	mov    ecx,0x4
   1414ead64:	mov    r8d,0x6
   1414ead6a:	movzx  eax,BYTE PTR [rsp+0xc8]
   1414ead72:	test   al,al
   1414ead74:	cmove  r8d,ecx
   1414ead78:	lea    rcx,[rip+0x146709]        # 0x141631488
   1414ead7f:	lea    rdx,[rip+0x1d6e5e]        # 0x1416c1be4
   1414ead86:	cmove  rdx,rcx
   1414ead8a:	mov    rcx,rbx
   1414ead8d:	call   0x140071040
   1414ead92:	mov    al,0x1
   1414ead94:	jmp    0x1414eafcb
   1414ead99:	mov    ecx,0xdb
   1414ead9e:	movzx  eax,r15w
   1414eada2:	sub    ax,cx
   1414eada5:	mov    ecx,0xc7
   1414eadaa:	cmp    ax,cx
   1414eadad:	ja     0x1414eaf25
   1414eadb3:	mov    r9,QWORD PTR [rip+0x10313e6]        # 0x14251c1a0
   1414eadba:	mov    r10,QWORD PTR [rip+0x10313d7]        # 0x14251c198
   1414eadc1:	sub    r9,r10
   1414eadc4:	sar    r9,0x3
   1414eadc8:	test   r9,r9
   1414eadcb:	je     0x1414eaf25
   1414eadd1:	cmp    esi,0xffffffff
   1414eadd4:	je     0x1414eaf25
   1414eadda:	mov    edx,r14d
   1414eaddd:	sub    r9d,0x1
   1414eade1:	js     0x1414eaf25
   1414eade7:	nop    WORD PTR [rax+rax*1+0x0]
   1414eadf0:	lea    ecx,[r9+rdx*1]
   1414eadf4:	sar    ecx,1
   1414eadf6:	movsxd rax,ecx
   1414eadf9:	mov    rdi,QWORD PTR [r10+rax*8]
   1414eadfd:	cmp    DWORD PTR [rdi+0xe0],esi
   1414eae03:	je     0x1414eae1f
   1414eae05:	lea    eax,[rcx-0x1]
   1414eae08:	cmovle eax,r9d
   1414eae0c:	mov    r9d,eax
   1414eae0f:	lea    eax,[rcx+0x1]
   1414eae12:	cmovle edx,eax
   1414eae15:	cmp    edx,r9d
   1414eae18:	jle    0x1414eadf0
   1414eae1a:	jmp    0x1414eaf25
   1414eae1f:	test   rdi,rdi
   1414eae22:	je     0x1414eaf25
   1414eae28:	cmp    BYTE PTR [rdi+0xaa],r14b
   1414eae2f:	je     0x1414eaf25
   1414eae35:	xorps  xmm0,xmm0
   1414eae38:	movups XMMWORD PTR [rsp+0x20],xmm0
   1414eae3d:	mov    QWORD PTR [rsp+0x30],r14
   1414eae42:	mov    ebp,0xf
   1414eae47:	mov    QWORD PTR [rsp+0x38],rbp
   1414eae4c:	mov    BYTE PTR [rsp+0x20],r14b
   1414eae51:	mov    rax,QWORD PTR [rdi+0x130]
   1414eae58:	test   rax,rax
   1414eae5b:	je     0x1414eae89
   1414eae5d:	mov    rax,QWORD PTR [rax+0x58]
   1414eae61:	test   rax,rax
   1414eae64:	je     0x1414eae89
   1414eae66:	mov    edx,DWORD PTR [rax+0x30]
   1414eae69:	cmp    edx,0xffffffff
   1414eae6c:	je     0x1414eae89
   1414eae6e:	lea    rcx,[rip+0x101f2f3]        # 0x14250a168
   1414eae75:	call   0x140073ba0
   1414eae7a:	test   rax,rax
   1414eae7d:	je     0x1414eae89
   1414eae7f:	mov    rcx,rax
   1414eae82:	call   0x140c521e0
   1414eae87:	jmp    0x1414eae8d
   1414eae89:	lea    rax,[rdi+0x38]
   1414eae8d:	test   rax,rax
   1414eae90:	je     0x1414eaeb5
   1414eae92:	cmp    BYTE PTR [rax+0x72],0x0
   1414eae96:	je     0x1414eaeb5
   1414eae98:	xor    r9d,r9d
   1414eae9b:	mov    r8b,0x1
   1414eae9e:	lea    rdx,[rsp+0x20]
   1414eaea3:	mov    rcx,rax
   1414eaea6:	call   0x140aae180
   1414eaeab:	mov    rbp,QWORD PTR [rsp+0x38]
   1414eaeb0:	mov    r14,QWORD PTR [rsp+0x30]
   1414eaeb5:	lea    rdx,[rsp+0x20]
   1414eaeba:	cmp    rbp,0xf
   1414eaebe:	cmova  rdx,QWORD PTR [rsp+0x20]
   1414eaec4:	mov    r8,r14
   1414eaec7:	mov    rcx,rbx
   1414eaeca:	call   0x140071040
   1414eaecf:	mov    r8d,0x3
   1414eaed5:	lea    rdx,[rip+0x11dec8]        # 0x141608da4
   1414eaedc:	mov    rcx,rbx
   1414eaedf:	call   0x140071040
   1414eaee4:	nop
   1414eaee5:	mov    rdx,QWORD PTR [rsp+0x38]
   1414eaeea:	cmp    rdx,0xf
   1414eaeee:	jbe    0x1414eaf25
   1414eaef0:	inc    rdx
   1414eaef3:	mov    rcx,QWORD PTR [rsp+0x20]
   1414eaef8:	mov    rax,rcx
   1414eaefb:	cmp    rdx,0x1000
   1414eaf02:	jb     0x1414eaf20
   1414eaf04:	add    rdx,0x27
   1414eaf08:	mov    rcx,QWORD PTR [rcx-0x8]
   1414eaf0c:	sub    rax,rcx
   1414eaf0f:	add    rax,0xfffffffffffffff8
   1414eaf13:	cmp    rax,0x1f
   1414eaf17:	jbe    0x1414eaf20
   1414eaf19:	call   QWORD PTR [rip+0x115c21]        # 0x141600b40
   1414eaf1f:	int3
   1414eaf20:	call   0x1415530d0
   1414eaf25:	mov    r8d,esi
   1414eaf28:	movzx  edx,r15w
   1414eaf2c:	mov    rcx,r13
   1414eaf2f:	call   0x1414c6fe0
   1414eaf34:	mov    rdi,rax
   1414eaf37:	test   rax,rax
   1414eaf3a:	je     0x1414eafb4
   1414eaf3c:	cmp    QWORD PTR [rax+0x530],0x0
   1414eaf44:	je     0x1414eaf78
   1414eaf46:	lea    rdx,[rax+0x520]
   1414eaf4d:	mov    r8,QWORD PTR [rdx+0x10]
   1414eaf51:	cmp    QWORD PTR [rdx+0x18],0xf
   1414eaf56:	jbe    0x1414eaf5b
   1414eaf58:	mov    rdx,QWORD PTR [rdx]
   1414eaf5b:	mov    rcx,rbx
   1414eaf5e:	call   0x140071040
   1414eaf63:	mov    r8d,0x1
   1414eaf69:	lea    rdx,[rip+0x118a80]        # 0x1416039f0
   1414eaf70:	mov    rcx,rbx
   1414eaf73:	call   0x140071040
   1414eaf78:	mov    rax,r12
   1414eaf7b:	shl    rax,0x5
   1414eaf7f:	cmp    BYTE PTR [rsp+0xc8],0x0
   1414eaf87:	lea    rdx,[rax+0x178]
   1414eaf8e:	jne    0x1414eaf97
   1414eaf90:	lea    rdx,[rax+0xb8]
   1414eaf97:	add    rdx,rdi
   1414eaf9a:	cmp    QWORD PTR [rdx+0x18],0xf
   1414eaf9f:	mov    r8,QWORD PTR [rdx+0x10]
   1414eafa3:	jbe    0x1414eafa8
   1414eafa5:	mov    rdx,QWORD PTR [rdx]
   1414eafa8:	mov    rcx,rbx
   1414eafab:	call   0x140071040
   1414eafb0:	mov    al,0x1
   1414eafb2:	jmp    0x1414eafcb
   1414eafb4:	mov    r8d,0x10
   1414eafba:	lea    rdx,[rip+0x2be8c7]        # 0x1417a9888
   1414eafc1:	mov    rcx,rbx
   1414eafc4:	call   0x140071040
   1414eafc9:	xor    al,al
   1414eafcb:	mov    rcx,QWORD PTR [rsp+0x40]
   1414eafd0:	xor    rcx,rsp
   1414eafd3:	call   0x1415530b0
   1414eafd8:	add    rsp,0x58
   1414eafdc:	pop    r15
   1414eafde:	pop    r14
   1414eafe0:	pop    r13
   1414eafe2:	pop    r12
   1414eafe4:	pop    rdi
   1414eafe5:	pop    rsi
   1414eafe6:	pop    rbp
   1414eafe7:	pop    rbx
   1414eafe8:	ret
