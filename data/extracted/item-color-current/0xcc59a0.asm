
D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe:     file format pei-x86-64


Disassembly of section .text:

0000000140cc59a0 <.text+0xcc49a0>:
   140cc59a0:	mov    QWORD PTR [rsp+0x8],rbx
   140cc59a5:	push   rbp
   140cc59a6:	push   rsi
   140cc59a7:	push   rdi
   140cc59a8:	push   r12
   140cc59aa:	push   r13
   140cc59ac:	push   r14
   140cc59ae:	push   r15
   140cc59b0:	lea    rbp,[rsp-0x7]
   140cc59b5:	sub    rsp,0xf0
   140cc59bc:	mov    rax,QWORD PTR [rip+0xbf867d]        # 0x1418be040
   140cc59c3:	xor    rax,rsp
   140cc59c6:	mov    QWORD PTR [rbp-0x1],rax
   140cc59ca:	movzx  r14d,r9w
   140cc59ce:	movsx  ebx,r8b
   140cc59d2:	mov    BYTE PTR [rsp+0x20],bl
   140cc59d6:	mov    r13,rdx
   140cc59d9:	mov    QWORD PTR [rsp+0x58],rdx
   140cc59de:	mov    r15,QWORD PTR [rbp+0x6f]
   140cc59e2:	xorps  xmm0,xmm0
   140cc59e5:	movups XMMWORD PTR [rbp-0x61],xmm0
   140cc59e9:	xor    r12d,r12d
   140cc59ec:	mov    QWORD PTR [rbp-0x51],r12
   140cc59f0:	mov    esi,0xf
   140cc59f5:	mov    QWORD PTR [rbp-0x49],rsi
   140cc59f9:	mov    BYTE PTR [rbp-0x61],r12b
   140cc59fd:	mov    QWORD PTR [rdx+0x10],r12
   140cc5a01:	mov    rax,rdx
   140cc5a04:	cmp    QWORD PTR [rdx+0x18],rsi
   140cc5a08:	jbe    0x140cc5a0d
   140cc5a0a:	mov    rax,QWORD PTR [rdx]
   140cc5a0d:	mov    BYTE PTR [rax],0x0
   140cc5a10:	cmp    r14w,0xffff
   140cc5a15:	jne    0x140cc5a21
   140cc5a17:	cmp    DWORD PTR [r15],0xffffffff
   140cc5a1b:	je     0x140cc63ac
   140cc5a21:	mov    r8d,0xe
   140cc5a27:	lea    rdx,[rip+0xa5d242]        # 0x141722c70
   140cc5a2e:	mov    rcx,r13
   140cc5a31:	call   0x140071040
   140cc5a36:	mov    edi,DWORD PTR [rbp+0x67]
   140cc5a39:	mov    r8d,edi
   140cc5a3c:	movzx  edx,r14w
   140cc5a40:	lea    rcx,[rip+0x172df29]        # 0x1423f3970
   140cc5a47:	call   0x141475520
   140cc5a4c:	mov    ecx,DWORD PTR [r15]
   140cc5a4f:	cmp    ecx,0xffffffff
   140cc5a52:	cmove  cx,ax
   140cc5a56:	cmp    cx,0xffff
   140cc5a5a:	je     0x140cc5a7f
   140cc5a5c:	movsx  rcx,cx
   140cc5a60:	mov    rax,QWORD PTR [rip+0x1853ad1]        # 0x142519538
   140cc5a67:	mov    rdx,QWORD PTR [rax+rcx*8]
   140cc5a6b:	add    rdx,0x50
   140cc5a6f:	mov    r8,QWORD PTR [rdx+0x10]
   140cc5a73:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5a78:	jbe    0x140cc5a8c
   140cc5a7a:	mov    rdx,QWORD PTR [rdx]
   140cc5a7d:	jmp    0x140cc5a8c
   140cc5a7f:	lea    rdx,[rip+0xa5c08a]        # 0x141721b10
   140cc5a86:	mov    r8d,0x4
   140cc5a8c:	mov    rcx,r13
   140cc5a8f:	call   0x140071040
   140cc5a94:	test   bl,bl
   140cc5a96:	jle    0x140cc5b32
   140cc5a9c:	mov    r8d,0x2
   140cc5aa2:	lea    rdx,[rip+0x93e8eb]        # 0x141604394
   140cc5aa9:	mov    rcx,r13
   140cc5aac:	call   0x140071040
   140cc5ab1:	mov    ecx,ebx
   140cc5ab3:	sub    ecx,0x1
   140cc5ab6:	je     0x140cc5b08
   140cc5ab8:	sub    ecx,0x1
   140cc5abb:	je     0x140cc5af9
   140cc5abd:	sub    ecx,0x1
   140cc5ac0:	je     0x140cc5aea
   140cc5ac2:	sub    ecx,0x1
   140cc5ac5:	je     0x140cc5adb
   140cc5ac7:	cmp    ecx,0x1
   140cc5aca:	jne    0x140cc5b1d
   140cc5acc:	mov    r8d,0xc
   140cc5ad2:	lea    rdx,[rip+0xa5c6f7]        # 0x1417221d0
   140cc5ad9:	jmp    0x140cc5b15
   140cc5adb:	mov    r8d,0xe
   140cc5ae1:	lea    rdx,[rip+0xa5c6d8]        # 0x1417221c0
   140cc5ae8:	jmp    0x140cc5b15
   140cc5aea:	mov    r8d,0x9
   140cc5af0:	lea    rdx,[rip+0xa5c021]        # 0x141721b18
   140cc5af7:	jmp    0x140cc5b15
   140cc5af9:	mov    r8d,0x7
   140cc5aff:	lea    rdx,[rip+0xa5c6a2]        # 0x1417221a8
   140cc5b06:	jmp    0x140cc5b15
   140cc5b08:	mov    r8d,0x5
   140cc5b0e:	lea    rdx,[rip+0xa5c68b]        # 0x1417221a0
   140cc5b15:	mov    rcx,r13
   140cc5b18:	call   0x140071040
   140cc5b1d:	mov    r8d,0x7
   140cc5b23:	lea    rdx,[rip+0xa5bffe]        # 0x141721b28
   140cc5b2a:	mov    rcx,r13
   140cc5b2d:	call   0x140071040
   140cc5b32:	mov    rax,QWORD PTR [r15+0x10]
   140cc5b36:	sub    rax,QWORD PTR [r15+0x8]
   140cc5b3a:	sar    rax,0x2
   140cc5b3e:	test   rax,rax
   140cc5b41:	je     0x140cc5fe9
   140cc5b47:	xorps  xmm0,xmm0
   140cc5b4a:	movdqu XMMWORD PTR [rsp+0x38],xmm0
   140cc5b50:	mov    QWORD PTR [rsp+0x48],r12
   140cc5b55:	movdqu XMMWORD PTR [rsp+0x68],xmm0
   140cc5b5b:	mov    r13,r12
   140cc5b5e:	mov    QWORD PTR [rbp-0x71],r12
   140cc5b62:	cdqe
   140cc5b64:	mov    QWORD PTR [rsp+0x60],rax
   140cc5b69:	mov    rbx,QWORD PTR [rsp+0x40]
   140cc5b6e:	test   rax,rax
   140cc5b71:	jle    0x140cc5c60
   140cc5b77:	mov    r14,r12
   140cc5b7a:	mov    r9d,0xff
   140cc5b80:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5b85:	mov    QWORD PTR [rsp+0x50],rcx
   140cc5b8a:	mov    rdi,QWORD PTR [rbp-0x79]
   140cc5b8e:	xchg   ax,ax
   140cc5b90:	mov    rax,QWORD PTR [r15+0x20]
   140cc5b94:	mov    esi,DWORD PTR [rax+r14*4]
   140cc5b98:	mov    DWORD PTR [rsp+0x30],esi
   140cc5b9c:	mov    rax,QWORD PTR [r15+0x8]
   140cc5ba0:	mov    edx,DWORD PTR [rax+r14*4]
   140cc5ba4:	mov    DWORD PTR [rsp+0x28],edx
   140cc5ba8:	mov    rax,rcx
   140cc5bab:	mov    r8,QWORD PTR [rsp+0x68]
   140cc5bb0:	sub    r8,rcx
   140cc5bb3:	cmp    rax,rbx
   140cc5bb6:	je     0x140cc5bd5
   140cc5bb8:	mov    ecx,0x1
   140cc5bbd:	cmovb  ecx,r9d
   140cc5bc1:	test   cl,cl
   140cc5bc3:	jns    0x140cc5bd5
   140cc5bc5:	cmp    DWORD PTR [rax],edx
   140cc5bc7:	jne    0x140cc5bcf
   140cc5bc9:	cmp    DWORD PTR [rax+r8*1],esi
   140cc5bcd:	je     0x140cc5c3d
   140cc5bcf:	add    rax,0x4
   140cc5bd3:	jmp    0x140cc5bb3
   140cc5bd5:	cmp    rbx,r12
   140cc5bd8:	je     0x140cc5bec
   140cc5bda:	mov    DWORD PTR [rbx],edx
   140cc5bdc:	add    rbx,0x4
   140cc5be0:	mov    QWORD PTR [rsp+0x40],rbx
   140cc5be5:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5bea:	jmp    0x140cc5c12
   140cc5bec:	lea    r8,[rsp+0x28]
   140cc5bf1:	mov    rdx,rbx
   140cc5bf4:	lea    rcx,[rsp+0x38]
   140cc5bf9:	call   0x140072450
   140cc5bfe:	mov    rbx,QWORD PTR [rsp+0x40]
   140cc5c03:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5c08:	mov    QWORD PTR [rsp+0x50],rcx
   140cc5c0d:	mov    r12,QWORD PTR [rsp+0x48]
   140cc5c12:	cmp    rdi,r13
   140cc5c15:	je     0x140cc5c23
   140cc5c17:	mov    DWORD PTR [rdi],esi
   140cc5c19:	add    rdi,0x4
   140cc5c1d:	mov    QWORD PTR [rbp-0x79],rdi
   140cc5c21:	jmp    0x140cc5c42
   140cc5c23:	lea    r8,[rsp+0x30]
   140cc5c28:	mov    rdx,rdi
   140cc5c2b:	lea    rcx,[rsp+0x68]
   140cc5c30:	call   0x140072450
   140cc5c35:	mov    r13,QWORD PTR [rbp-0x71]
   140cc5c39:	mov    rdi,QWORD PTR [rbp-0x79]
   140cc5c3d:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5c42:	inc    r14
   140cc5c45:	cmp    r14,QWORD PTR [rsp+0x60]
   140cc5c4a:	mov    r9d,0xff
   140cc5c50:	jl     0x140cc5b90
   140cc5c56:	xor    r12d,r12d
   140cc5c59:	mov    esi,0xf
   140cc5c5e:	jmp    0x140cc5c6a
   140cc5c60:	mov    rax,QWORD PTR [rsp+0x38]
   140cc5c65:	mov    QWORD PTR [rsp+0x50],rax
   140cc5c6a:	mov    r8d,0x6
   140cc5c70:	lea    rdx,[rip+0x943bd1]        # 0x141609848
   140cc5c77:	mov    r13,QWORD PTR [rsp+0x58]
   140cc5c7c:	mov    rcx,r13
   140cc5c7f:	call   0x140071040
   140cc5c84:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5c89:	sub    rbx,rcx
   140cc5c8c:	sar    rbx,0x2
   140cc5c90:	cmp    rbx,0x2
   140cc5c94:	jb     0x140cc5cb0
   140cc5c96:	mov    r8d,0xd
   140cc5c9c:	lea    rdx,[rip+0xa5be8d]        # 0x141721b30
   140cc5ca3:	mov    rcx,r13
   140cc5ca6:	call   0x140071040
   140cc5cab:	mov    rcx,QWORD PTR [rsp+0x38]
   140cc5cb0:	mov    r14d,r12d
   140cc5cb3:	mov    DWORD PTR [rsp+0x28],r12d
   140cc5cb8:	test   ebx,ebx
   140cc5cba:	jle    0x140cc5fcf
   140cc5cc0:	movsxd rax,ebx
   140cc5cc3:	mov    QWORD PTR [rsp+0x58],rax
   140cc5cc8:	mov    QWORD PTR [rsp+0x60],r12
   140cc5ccd:	mov    rax,QWORD PTR [rsp+0x68]
   140cc5cd2:	sub    rax,rcx
   140cc5cd5:	mov    QWORD PTR [rbp-0x69],rax
   140cc5cd9:	lea    r15,[rip+0xae3ba8]        # 0x1417a9888
   140cc5ce0:	mov    r8d,0xc7
   140cc5ce6:	mov    edx,0xdb
   140cc5ceb:	xorps  xmm0,xmm0
   140cc5cee:	movups XMMWORD PTR [rbp-0x21],xmm0
   140cc5cf2:	mov    QWORD PTR [rbp-0x11],r12
   140cc5cf6:	mov    QWORD PTR [rbp-0x9],rsi
   140cc5cfa:	mov    BYTE PTR [rbp-0x21],0x0
   140cc5cfe:	mov    esi,DWORD PTR [rcx+rax*1]
   140cc5d01:	movzx  eax,WORD PTR [rcx]
   140cc5d04:	mov    WORD PTR [rsp+0x30],ax
   140cc5d09:	mov    QWORD PTR [rbp-0x11],r12
   140cc5d0d:	mov    BYTE PTR [rbp-0x21],0x0
   140cc5d11:	sub    ax,dx
   140cc5d14:	cmp    ax,r8w
   140cc5d18:	ja     0x140cc5e8b
   140cc5d1e:	mov    r9,QWORD PTR [rip+0x185647b]        # 0x14251c1a0
   140cc5d25:	mov    r10,QWORD PTR [rip+0x185646c]        # 0x14251c198
   140cc5d2c:	sub    r9,r10
   140cc5d2f:	sar    r9,0x3
   140cc5d33:	test   r9,r9
   140cc5d36:	je     0x140cc5e8b
   140cc5d3c:	cmp    esi,0xffffffff
   140cc5d3f:	je     0x140cc5e8b
   140cc5d45:	mov    edx,r12d
   140cc5d48:	sub    r9d,0x1
   140cc5d4c:	js     0x140cc5e8b
   140cc5d52:	lea    ecx,[r9+rdx*1]
   140cc5d56:	sar    ecx,1
   140cc5d58:	movsxd rax,ecx
   140cc5d5b:	mov    rdi,QWORD PTR [r10+rax*8]
   140cc5d5f:	cmp    DWORD PTR [rdi+0xe0],esi
   140cc5d65:	je     0x140cc5d81
   140cc5d67:	lea    eax,[rcx-0x1]
   140cc5d6a:	cmovle eax,r9d
   140cc5d6e:	mov    r9d,eax
   140cc5d71:	lea    eax,[rcx+0x1]
   140cc5d74:	cmovle edx,eax
   140cc5d77:	cmp    edx,r9d
   140cc5d7a:	jle    0x140cc5d52
   140cc5d7c:	jmp    0x140cc5e8b
   140cc5d81:	test   rdi,rdi
   140cc5d84:	je     0x140cc5e8b
   140cc5d8a:	cmp    BYTE PTR [rdi+0xaa],0x0
   140cc5d91:	je     0x140cc5e8b
   140cc5d97:	xorps  xmm0,xmm0
   140cc5d9a:	movups XMMWORD PTR [rbp-0x41],xmm0
   140cc5d9e:	mov    r14,r12
   140cc5da1:	mov    QWORD PTR [rbp-0x31],r12
   140cc5da5:	mov    r15d,0xf
   140cc5dab:	mov    QWORD PTR [rbp-0x29],r15
   140cc5daf:	mov    BYTE PTR [rbp-0x41],0x0
   140cc5db3:	mov    rax,QWORD PTR [rdi+0x130]
   140cc5dba:	test   rax,rax
   140cc5dbd:	je     0x140cc5deb
   140cc5dbf:	mov    rcx,QWORD PTR [rax+0x58]
   140cc5dc3:	test   rcx,rcx
   140cc5dc6:	je     0x140cc5deb
   140cc5dc8:	mov    edx,DWORD PTR [rcx+0x30]
   140cc5dcb:	cmp    edx,0xffffffff
   140cc5dce:	je     0x140cc5deb
   140cc5dd0:	lea    rcx,[rip+0x1844391]        # 0x14250a168
   140cc5dd7:	call   0x140073ba0
   140cc5ddc:	test   rax,rax
   140cc5ddf:	je     0x140cc5deb
   140cc5de1:	mov    rcx,rax
   140cc5de4:	call   0x140c521e0
   140cc5de9:	jmp    0x140cc5def
   140cc5deb:	lea    rax,[rdi+0x38]
   140cc5def:	test   rax,rax
   140cc5df2:	je     0x140cc5e14
   140cc5df4:	cmp    BYTE PTR [rax+0x72],0x0
   140cc5df8:	je     0x140cc5e14
   140cc5dfa:	xor    r9d,r9d
   140cc5dfd:	mov    r8b,0x1
   140cc5e00:	lea    rdx,[rbp-0x41]
   140cc5e04:	mov    rcx,rax
   140cc5e07:	call   0x140aae180
   140cc5e0c:	mov    r15,QWORD PTR [rbp-0x29]
   140cc5e10:	mov    r14,QWORD PTR [rbp-0x31]
   140cc5e14:	lea    rdx,[rbp-0x41]
   140cc5e18:	cmp    r15,0xf
   140cc5e1c:	cmova  rdx,QWORD PTR [rbp-0x41]
   140cc5e21:	mov    r8,r14
   140cc5e24:	lea    rcx,[rbp-0x21]
   140cc5e28:	call   0x140071040
   140cc5e2d:	mov    r8d,0x3
   140cc5e33:	lea    rdx,[rip+0x942f6a]        # 0x141608da4
   140cc5e3a:	lea    rcx,[rbp-0x21]
   140cc5e3e:	call   0x140071040
   140cc5e43:	nop
   140cc5e44:	mov    rdx,QWORD PTR [rbp-0x29]
   140cc5e48:	cmp    rdx,0xf
   140cc5e4c:	jbe    0x140cc5e7f
   140cc5e4e:	inc    rdx
   140cc5e51:	mov    rcx,QWORD PTR [rbp-0x41]
   140cc5e55:	mov    rax,rcx
   140cc5e58:	cmp    rdx,0x1000
   140cc5e5f:	jb     0x140cc5e7a
   140cc5e61:	add    rdx,0x27
   140cc5e65:	mov    rcx,QWORD PTR [rcx-0x8]
   140cc5e69:	sub    rax,rcx
   140cc5e6c:	add    rax,0xfffffffffffffff8
   140cc5e70:	cmp    rax,0x1f
   140cc5e74:	ja     0x140cc5fc8
   140cc5e7a:	call   0x1415530d0
   140cc5e7f:	lea    r15,[rip+0xae3a02]        # 0x1417a9888
   140cc5e86:	mov    r14d,DWORD PTR [rsp+0x28]
   140cc5e8b:	mov    r8d,esi
   140cc5e8e:	movzx  edx,WORD PTR [rsp+0x30]
   140cc5e93:	lea    rcx,[rip+0x172dad6]        # 0x1423f3970
   140cc5e9a:	call   0x1414c6fe0
   140cc5e9f:	mov    rdi,rax
   140cc5ea2:	test   rax,rax
   140cc5ea5:	je     0x140cc5efc
   140cc5ea7:	cmp    QWORD PTR [rax+0x530],0x0
   140cc5eaf:	je     0x140cc5ee5
   140cc5eb1:	lea    rdx,[rax+0x520]
   140cc5eb8:	mov    r8,QWORD PTR [rdx+0x10]
   140cc5ebc:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5ec1:	jbe    0x140cc5ec6
   140cc5ec3:	mov    rdx,QWORD PTR [rdx]
   140cc5ec6:	lea    rcx,[rbp-0x21]
   140cc5eca:	call   0x140071040
   140cc5ecf:	mov    r8d,0x1
   140cc5ed5:	lea    rdx,[rip+0x93db14]        # 0x1416039f0
   140cc5edc:	lea    rcx,[rbp-0x21]
   140cc5ee0:	call   0x140071040
   140cc5ee5:	lea    rdx,[rdi+0x118]
   140cc5eec:	mov    r8,QWORD PTR [rdx+0x10]
   140cc5ef0:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc5ef5:	jbe    0x140cc5f05
   140cc5ef7:	mov    rdx,QWORD PTR [rdx]
   140cc5efa:	jmp    0x140cc5f05
   140cc5efc:	mov    rdx,r15
   140cc5eff:	mov    r8d,0x10
   140cc5f05:	lea    rcx,[rbp-0x21]
   140cc5f09:	call   0x140071040
   140cc5f0e:	lea    rdx,[rbp-0x21]
   140cc5f12:	cmp    QWORD PTR [rbp-0x9],0xf
   140cc5f17:	cmova  rdx,QWORD PTR [rbp-0x21]
   140cc5f1c:	mov    r8,QWORD PTR [rbp-0x11]
   140cc5f20:	mov    rcx,r13
   140cc5f23:	call   0x140071040
   140cc5f28:	lea    eax,[rbx-0x1]
   140cc5f2b:	mov    rdi,QWORD PTR [rsp+0x58]
   140cc5f30:	cmp    r14d,eax
   140cc5f33:	jge    0x140cc5f89
   140cc5f35:	cmp    rdi,0x3
   140cc5f39:	jl     0x140cc5f50
   140cc5f3b:	mov    r8d,0x2
   140cc5f41:	lea    rdx,[rip+0x93e44c]        # 0x141604394
   140cc5f48:	mov    rcx,r13
   140cc5f4b:	call   0x140071040
   140cc5f50:	lea    eax,[rbx-0x2]
   140cc5f53:	cmp    r14d,eax
   140cc5f56:	jne    0x140cc5f89
   140cc5f58:	cmp    rdi,0x2
   140cc5f5c:	jne    0x140cc5f73
   140cc5f5e:	mov    r8d,0x1
   140cc5f64:	lea    rdx,[rip+0x93da85]        # 0x1416039f0
   140cc5f6b:	mov    rcx,r13
   140cc5f6e:	call   0x140071040
   140cc5f73:	mov    r8d,0x4
   140cc5f79:	lea    rdx,[rip+0xa5bbc0]        # 0x141721b40
   140cc5f80:	mov    rcx,r13
   140cc5f83:	call   0x140071040
   140cc5f88:	nop
   140cc5f89:	lea    rcx,[rbp-0x21]
   140cc5f8d:	call   0x140070e80
   140cc5f92:	inc    r14d
   140cc5f95:	mov    DWORD PTR [rsp+0x28],r14d
   140cc5f9a:	mov    rdx,QWORD PTR [rsp+0x60]
   140cc5f9f:	inc    rdx
   140cc5fa2:	mov    QWORD PTR [rsp+0x60],rdx
   140cc5fa7:	mov    rcx,QWORD PTR [rsp+0x50]
   140cc5fac:	add    rcx,0x4
   140cc5fb0:	mov    QWORD PTR [rsp+0x50],rcx
   140cc5fb5:	cmp    rdx,rdi
   140cc5fb8:	jge    0x140cc5fcf
   140cc5fba:	mov    rax,QWORD PTR [rbp-0x69]
   140cc5fbe:	mov    esi,0xf
   140cc5fc3:	jmp    0x140cc5ce0
   140cc5fc8:	call   QWORD PTR [rip+0x93ab72]        # 0x141600b40
   140cc5fce:	nop
   140cc5fcf:	lea    rcx,[rsp+0x68]
   140cc5fd4:	call   0x140070d80
   140cc5fd9:	nop
   140cc5fda:	lea    rcx,[rsp+0x38]
   140cc5fdf:	call   0x140070d80
   140cc5fe4:	jmp    0x140cc6236
   140cc5fe9:	mov    r8d,0x6
   140cc5fef:	lea    rdx,[rip+0x943852]        # 0x141609848
   140cc5ff6:	mov    rcx,r13
   140cc5ff9:	call   0x140071040
   140cc5ffe:	mov    QWORD PTR [rbp-0x51],r12
   140cc6002:	lea    rax,[rbp-0x61]
   140cc6006:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc600b:	cmova  rax,QWORD PTR [rbp-0x61]
   140cc6010:	mov    BYTE PTR [rax],0x0
   140cc6013:	mov    ecx,0xdb
   140cc6018:	movzx  eax,r14w
   140cc601c:	sub    ax,cx
   140cc601f:	mov    ecx,0xc7
   140cc6024:	cmp    ax,cx
   140cc6027:	ja     0x140cc6191
   140cc602d:	mov    r8,QWORD PTR [rip+0x185616c]        # 0x14251c1a0
   140cc6034:	mov    r10,QWORD PTR [rip+0x185615d]        # 0x14251c198
   140cc603b:	sub    r8,r10
   140cc603e:	sar    r8,0x3
   140cc6042:	test   r8,r8
   140cc6045:	je     0x140cc6191
   140cc604b:	cmp    edi,0xffffffff
   140cc604e:	je     0x140cc6191
   140cc6054:	mov    edx,r12d
   140cc6057:	sub    r8d,0x1
   140cc605b:	js     0x140cc6191
   140cc6061:	lea    ecx,[r8+rdx*1]
   140cc6065:	sar    ecx,1
   140cc6067:	movsxd rax,ecx
   140cc606a:	mov    rbx,QWORD PTR [r10+rax*8]
   140cc606e:	cmp    DWORD PTR [rbx+0xe0],edi
   140cc6074:	je     0x140cc6090
   140cc6076:	lea    eax,[rcx-0x1]
   140cc6079:	cmovle eax,r8d
   140cc607d:	mov    r8d,eax
   140cc6080:	lea    eax,[rcx+0x1]
   140cc6083:	cmovle edx,eax
   140cc6086:	cmp    edx,r8d
   140cc6089:	jle    0x140cc6061
   140cc608b:	jmp    0x140cc6191
   140cc6090:	test   rbx,rbx
   140cc6093:	je     0x140cc6191
   140cc6099:	cmp    BYTE PTR [rbx+0xaa],0x0
   140cc60a0:	je     0x140cc6191
   140cc60a6:	xorps  xmm0,xmm0
   140cc60a9:	movups XMMWORD PTR [rbp-0x41],xmm0
   140cc60ad:	mov    rsi,r12
   140cc60b0:	mov    QWORD PTR [rbp-0x31],r12
   140cc60b4:	mov    r15d,0xf
   140cc60ba:	mov    QWORD PTR [rbp-0x29],r15
   140cc60be:	mov    BYTE PTR [rbp-0x41],sil
   140cc60c2:	mov    rax,QWORD PTR [rbx+0x130]
   140cc60c9:	test   rax,rax
   140cc60cc:	je     0x140cc60fa
   140cc60ce:	mov    rax,QWORD PTR [rax+0x58]
   140cc60d2:	test   rax,rax
   140cc60d5:	je     0x140cc60fa
   140cc60d7:	mov    edx,DWORD PTR [rax+0x30]
   140cc60da:	cmp    edx,0xffffffff
   140cc60dd:	je     0x140cc60fa
   140cc60df:	lea    rcx,[rip+0x1844082]        # 0x14250a168
   140cc60e6:	call   0x140073ba0
   140cc60eb:	test   rax,rax
   140cc60ee:	je     0x140cc60fa
   140cc60f0:	mov    rcx,rax
   140cc60f3:	call   0x140c521e0
   140cc60f8:	jmp    0x140cc60fe
   140cc60fa:	lea    rax,[rbx+0x38]
   140cc60fe:	test   rax,rax
   140cc6101:	je     0x140cc6123
   140cc6103:	cmp    BYTE PTR [rax+0x72],0x0
   140cc6107:	je     0x140cc6123
   140cc6109:	xor    r9d,r9d
   140cc610c:	mov    r8b,0x1
   140cc610f:	lea    rdx,[rbp-0x41]
   140cc6113:	mov    rcx,rax
   140cc6116:	call   0x140aae180
   140cc611b:	mov    r15,QWORD PTR [rbp-0x29]
   140cc611f:	mov    rsi,QWORD PTR [rbp-0x31]
   140cc6123:	lea    rdx,[rbp-0x41]
   140cc6127:	cmp    r15,0xf
   140cc612b:	cmova  rdx,QWORD PTR [rbp-0x41]
   140cc6130:	mov    r8,rsi
   140cc6133:	lea    rcx,[rbp-0x61]
   140cc6137:	call   0x140071040
   140cc613c:	mov    r8d,0x3
   140cc6142:	lea    rdx,[rip+0x942c5b]        # 0x141608da4
   140cc6149:	lea    rcx,[rbp-0x61]
   140cc614d:	call   0x140071040
   140cc6152:	nop
   140cc6153:	mov    rdx,QWORD PTR [rbp-0x29]
   140cc6157:	cmp    rdx,0xf
   140cc615b:	jbe    0x140cc6191
   140cc615d:	inc    rdx
   140cc6160:	mov    rcx,QWORD PTR [rbp-0x41]
   140cc6164:	mov    rax,rcx
   140cc6167:	cmp    rdx,0x1000
   140cc616e:	jb     0x140cc618c
   140cc6170:	add    rdx,0x27
   140cc6174:	mov    rcx,QWORD PTR [rcx-0x8]
   140cc6178:	sub    rax,rcx
   140cc617b:	add    rax,0xfffffffffffffff8
   140cc617f:	cmp    rax,0x1f
   140cc6183:	jbe    0x140cc618c
   140cc6185:	call   QWORD PTR [rip+0x93a9b5]        # 0x141600b40
   140cc618b:	int3
   140cc618c:	call   0x1415530d0
   140cc6191:	mov    r8d,edi
   140cc6194:	movzx  edx,r14w
   140cc6198:	lea    rcx,[rip+0x172d7d1]        # 0x1423f3970
   140cc619f:	call   0x1414c6fe0
   140cc61a4:	mov    rbx,rax
   140cc61a7:	test   rax,rax
   140cc61aa:	je     0x140cc6201
   140cc61ac:	cmp    QWORD PTR [rax+0x530],0x0
   140cc61b4:	je     0x140cc61ea
   140cc61b6:	lea    rdx,[rax+0x520]
   140cc61bd:	mov    r8,QWORD PTR [rdx+0x10]
   140cc61c1:	cmp    QWORD PTR [rdx+0x18],0xf
   140cc61c6:	jbe    0x140cc61cb
   140cc61c8:	mov    rdx,QWORD PTR [rdx]
   140cc61cb:	lea    rcx,[rbp-0x61]
   140cc61cf:	call   0x140071040
   140cc61d4:	mov    r8d,0x1
   140cc61da:	lea    rdx,[rip+0x93d80f]        # 0x1416039f0
   140cc61e1:	lea    rcx,[rbp-0x61]
   140cc61e5:	call   0x140071040
   140cc61ea:	lea    rax,[rbx+0xb8]
   140cc61f1:	mov    rcx,QWORD PTR [rax+0x10]
   140cc61f5:	cmp    QWORD PTR [rax+0x18],0xf
   140cc61fa:	jbe    0x140cc620d
   140cc61fc:	mov    rax,QWORD PTR [rax]
   140cc61ff:	jmp    0x140cc620d
   140cc6201:	lea    rax,[rip+0xae3680]        # 0x1417a9888
   140cc6208:	mov    ecx,0x10
   140cc620d:	mov    r8,rcx
   140cc6210:	mov    rdx,rax
   140cc6213:	lea    rcx,[rbp-0x61]
   140cc6217:	call   0x140071040
   140cc621c:	lea    rdx,[rbp-0x61]
   140cc6220:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc6225:	cmova  rdx,QWORD PTR [rbp-0x61]
   140cc622a:	mov    r8,QWORD PTR [rbp-0x51]
   140cc622e:	mov    rcx,r13
   140cc6231:	call   0x140071040
   140cc6236:	cmp    BYTE PTR [rsp+0x20],0x5
   140cc623b:	jne    0x140cc6396
   140cc6241:	mov    rdx,QWORD PTR [rip+0x1855f58]        # 0x14251c1a0
   140cc6248:	mov    r10,QWORD PTR [rip+0x1855f49]        # 0x14251c198
   140cc624f:	sub    rdx,r10
   140cc6252:	sar    rdx,0x3
   140cc6256:	test   rdx,rdx
   140cc6259:	je     0x140cc6396
   140cc625f:	mov    r9d,DWORD PTR [rbp+0x77]
   140cc6263:	cmp    r9d,0xffffffff
   140cc6267:	je     0x140cc6396
   140cc626d:	sub    edx,0x1
   140cc6270:	js     0x140cc6396
   140cc6276:	data16 nop WORD PTR [rax+rax*1+0x0]
   140cc6280:	lea    ecx,[rdx+r12*1]
   140cc6284:	sar    ecx,1
   140cc6286:	movsxd rax,ecx
   140cc6289:	mov    rbx,QWORD PTR [r10+rax*8]
   140cc628d:	cmp    DWORD PTR [rbx+0xe0],r9d
   140cc6294:	je     0x140cc62af
   140cc6296:	lea    eax,[rcx-0x1]
   140cc6299:	cmovle eax,edx
   140cc629c:	mov    edx,eax
   140cc629e:	lea    eax,[rcx+0x1]
   140cc62a1:	cmovle r12d,eax
   140cc62a5:	cmp    r12d,edx
   140cc62a8:	jle    0x140cc6280
   140cc62aa:	jmp    0x140cc6396
   140cc62af:	test   rbx,rbx
   140cc62b2:	je     0x140cc6396
   140cc62b8:	mov    r8d,0x4
   140cc62be:	lea    rdx,[rip+0x9429c3]        # 0x141608c88
   140cc62c5:	mov    rcx,r13
   140cc62c8:	call   0x140071040
   140cc62cd:	mov    edi,DWORD PTR [rbp+0x7f]
   140cc62d0:	test   dil,0x2
   140cc62d4:	je     0x140cc630e
   140cc62d6:	mov    r8d,0xa
   140cc62dc:	lea    rdx,[rip+0x953625]        # 0x141619908
   140cc62e3:	mov    rcx,r13
   140cc62e6:	call   0x140071040
   140cc62eb:	mov    rdx,r13
   140cc62ee:	mov    ecx,DWORD PTR [rbx+0xe0]
   140cc62f4:	call   0x140545610
   140cc62f9:	mov    r8d,0x1
   140cc62ff:	lea    rdx,[rip+0x953102]        # 0x141619408
   140cc6306:	mov    rcx,r13
   140cc6309:	call   0x140071040
   140cc630e:	mov    rax,QWORD PTR [rbx+0x130]
   140cc6315:	test   rax,rax
   140cc6318:	je     0x140cc6346
   140cc631a:	mov    rcx,QWORD PTR [rax+0x58]
   140cc631e:	test   rcx,rcx
   140cc6321:	je     0x140cc6346
   140cc6323:	mov    edx,DWORD PTR [rcx+0x30]
   140cc6326:	cmp    edx,0xffffffff
   140cc6329:	je     0x140cc6346
   140cc632b:	lea    rcx,[rip+0x1843e36]        # 0x14250a168
   140cc6332:	call   0x140073ba0
   140cc6337:	test   rax,rax
   140cc633a:	je     0x140cc6346
   140cc633c:	mov    rcx,rax
   140cc633f:	call   0x140c521e0
   140cc6344:	jmp    0x140cc634a
   140cc6346:	lea    rax,[rbx+0x38]
   140cc634a:	test   rax,rax
   140cc634d:	je     0x140cc6361
   140cc634f:	cmp    BYTE PTR [rax+0x72],0x0
   140cc6353:	je     0x140cc6361
   140cc6355:	lea    rdx,[rbp-0x61]
   140cc6359:	mov    rcx,rax
   140cc635c:	call   0x140aadad0
   140cc6361:	lea    rdx,[rbp-0x61]
   140cc6365:	cmp    QWORD PTR [rbp-0x49],0xf
   140cc636a:	cmova  rdx,QWORD PTR [rbp-0x61]
   140cc636f:	mov    r8,QWORD PTR [rbp-0x51]
   140cc6373:	mov    rcx,r13
   140cc6376:	call   0x140071040
   140cc637b:	test   dil,0x2
   140cc637f:	je     0x140cc6396
   140cc6381:	mov    r8d,0x8
   140cc6387:	lea    rdx,[rip+0x95358a]        # 0x141619918
   140cc638e:	mov    rcx,r13
   140cc6391:	call   0x140071040
   140cc6396:	mov    r8d,0x3
   140cc639c:	lea    rdx,[rip+0x9531f5]        # 0x141619598
   140cc63a3:	mov    rcx,r13
   140cc63a6:	call   0x140071040
   140cc63ab:	nop
   140cc63ac:	lea    rcx,[rbp-0x61]
   140cc63b0:	call   0x140070e80
   140cc63b5:	mov    rcx,QWORD PTR [rbp-0x1]
   140cc63b9:	xor    rcx,rsp
   140cc63bc:	call   0x1415530b0
   140cc63c1:	mov    rbx,QWORD PTR [rsp+0x130]
   140cc63c9:	add    rsp,0xf0
   140cc63d0:	pop    r15
   140cc63d2:	pop    r14
   140cc63d4:	pop    r13
   140cc63d6:	pop    r12
   140cc63d8:	pop    rdi
   140cc63d9:	pop    rsi
   140cc63da:	pop    rbp
   140cc63db:	ret
