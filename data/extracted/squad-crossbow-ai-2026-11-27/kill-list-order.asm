; squad_order_kill_listst::follow_order (vtable 0x14165a728 + 0x38) [0x141106c50, 0x141106ef2)
   141106c50:	4d 85 c9                                        	test   r9,r9
   141106c53:	0f 84 98 02 00 00                               	je     0x141106ef1
   141106c59:	55                                              	push   rbp
   141106c5a:	41 54                                           	push   r12
   141106c5c:	41 56                                           	push   r14
   141106c5e:	48 83 ec 50                                     	sub    rsp,0x50
   141106c62:	49 83 b9 90 04 00 00 00                         	cmp    QWORD PTR [r9+0x490],0x0
   141106c6a:	4d 8b f1                                        	mov    r14,r9
   141106c6d:	4c 8b e2                                        	mov    r12,rdx
   141106c70:	48 8b e9                                        	mov    rbp,rcx
   141106c73:	0f 85 6f 02 00 00                               	jne    0x141106ee8
   141106c79:	48 8b 41 28                                     	mov    rax,QWORD PTR [rcx+0x28]
   141106c7d:	41 bb d0 8a ff ff                               	mov    r11d,0xffff8ad0
   141106c83:	48 2b 41 20                                     	sub    rax,QWORD PTR [rcx+0x20]
   141106c87:	48 89 74 24 78                                  	mov    QWORD PTR [rsp+0x78],rsi
   141106c8c:	4c 89 6c 24 48                                  	mov    QWORD PTR [rsp+0x48],r13
   141106c91:	45 0f b7 eb                                     	movzx  r13d,r11w
   141106c95:	48 c1 f8 02                                     	sar    rax,0x2
   141106c99:	83 e8 01                                        	sub    eax,0x1
   141106c9c:	4c 89 7c 24 40                                  	mov    QWORD PTR [rsp+0x40],r15
   141106ca1:	48 63 f0                                        	movsxd rsi,eax
   141106ca4:	45 0f b7 fb                                     	movzx  r15d,r11w
   141106ca8:	0f 88 2b 02 00 00                               	js     0x141106ed9
   141106cae:	48 89 5c 24 70                                  	mov    QWORD PTR [rsp+0x70],rbx
   141106cb3:	48 89 bc 24 80 00 00 00                         	mov    QWORD PTR [rsp+0x80],rdi
   141106cbb:	0f 1f 44 00 00                                  	nop    DWORD PTR [rax+rax*1+0x0]
   141106cc0:	48 8b 05 81 08 30 01                            	mov    rax,QWORD PTR [rip+0x1300881]        # 0x142407548
   141106cc7:	48 8b 0d 82 08 30 01                            	mov    rcx,QWORD PTR [rip+0x1300882]        # 0x142407550
   141106cce:	66 90                                           	xchg   ax,ax
   141106cd0:	48 3b c1                                        	cmp    rax,rcx
   141106cd3:	0f 83 ab 01 00 00                               	jae    0x141106e84
   141106cd9:	48 8b 55 20                                     	mov    rdx,QWORD PTR [rbp+0x20]
   141106cdd:	4c 8b 10                                        	mov    r10,QWORD PTR [rax]
   141106ce0:	44 8b 04 b2                                     	mov    r8d,DWORD PTR [rdx+rsi*4]
   141106ce4:	45 39 82 30 01 00 00                            	cmp    DWORD PTR [r10+0x130],r8d
   141106ceb:	74 06                                           	je     0x141106cf3
   141106ced:	48 83 c0 08                                     	add    rax,0x8
   141106cf1:	eb dd                                           	jmp    0x141106cd0
   141106cf3:	4d 85 d2                                        	test   r10,r10
   141106cf6:	0f 84 88 01 00 00                               	je     0x141106e84
   141106cfc:	41 f6 82 10 01 00 00 02                         	test   BYTE PTR [r10+0x110],0x2
   141106d04:	0f 85 7a 01 00 00                               	jne    0x141106e84
   141106d0a:	49 8b ca                                        	mov    rcx,r10
   141106d0d:	e8 0e 09 2a 00                                  	call   0x1413a7620
   141106d12:	84 c0                                           	test   al,al
   141106d14:	0f 85 6a 01 00 00                               	jne    0x141106e84
   141106d1a:	66 44 89 5c 24 34                               	mov    WORD PTR [rsp+0x34],r11w
   141106d20:	41 f7 82 10 01 00 00 00 00 00 02                	test   DWORD PTR [r10+0x110],0x2000000
   141106d2b:	74 5e                                           	je     0x141106d8b
   141106d2d:	49 8b 9a d8 01 00 00                            	mov    rbx,QWORD PTR [r10+0x1d8]
   141106d34:	49 8b ba e0 01 00 00                            	mov    rdi,QWORD PTR [r10+0x1e0]
   141106d3b:	0f 1f 44 00 00                                  	nop    DWORD PTR [rax+rax*1+0x0]
   141106d40:	48 3b df                                        	cmp    rbx,rdi
   141106d43:	73 39                                           	jae    0x141106d7e
   141106d45:	48 8b 0b                                        	mov    rcx,QWORD PTR [rbx]
   141106d48:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   141106d4b:	ff 50 10                                        	call   QWORD PTR [rax+0x10]
   141106d4e:	83 f8 0b                                        	cmp    eax,0xb
   141106d51:	75 0e                                           	jne    0x141106d61
   141106d53:	48 8b 0b                                        	mov    rcx,QWORD PTR [rbx]
   141106d56:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   141106d59:	ff 50 18                                        	call   QWORD PTR [rax+0x18]
   141106d5c:	48 85 c0                                        	test   rax,rax
   141106d5f:	75 06                                           	jne    0x141106d67
   141106d61:	48 83 c3 08                                     	add    rbx,0x8
   141106d65:	eb d9                                           	jmp    0x141106d40
   141106d67:	4c 8d 4c 24 3c                                  	lea    r9,[rsp+0x3c]
   141106d6c:	48 8b c8                                        	mov    rcx,rax
   141106d6f:	4c 8d 44 24 38                                  	lea    r8,[rsp+0x38]
   141106d74:	48 8d 54 24 34                                  	lea    rdx,[rsp+0x34]
   141106d79:	e8 12 ca b9 ff                                  	call   0x140ca3790
   141106d7e:	0f b7 54 24 34                                  	movzx  edx,WORD PTR [rsp+0x34]
   141106d83:	41 bb d0 8a ff ff                               	mov    r11d,0xffff8ad0
   141106d89:	eb 27                                           	jmp    0x141106db2
   141106d8b:	41 0f b7 92 a8 00 00 00                         	movzx  edx,WORD PTR [r10+0xa8]
   141106d93:	66 89 54 24 34                                  	mov    WORD PTR [rsp+0x34],dx
   141106d98:	41 0f b7 82 aa 00 00 00                         	movzx  eax,WORD PTR [r10+0xaa]
   141106da0:	66 89 44 24 38                                  	mov    WORD PTR [rsp+0x38],ax
   141106da5:	41 0f b7 82 ac 00 00 00                         	movzx  eax,WORD PTR [r10+0xac]
   141106dad:	66 89 44 24 3c                                  	mov    WORD PTR [rsp+0x3c],ax
   141106db2:	66 41 3b d3                                     	cmp    dx,r11w
   141106db6:	0f 84 c8 00 00 00                               	je     0x141106e84
   141106dbc:	44 0f b7 4c 24 3c                               	movzx  r9d,WORD PTR [rsp+0x3c]
   141106dc2:	49 8b ce                                        	mov    rcx,r14
   141106dc5:	44 0f b7 44 24 38                               	movzx  r8d,WORD PTR [rsp+0x38]
   141106dcb:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   141106dd0:	e8 3b 64 2b 00                                  	call   0x1413bd210
   141106dd5:	84 c0                                           	test   al,al
   141106dd7:	0f 84 a1 00 00 00                               	je     0x141106e7e
   141106ddd:	41 0f b7 86 a8 00 00 00                         	movzx  eax,WORD PTR [r14+0xa8]
   141106de5:	0f 57 c0                                        	xorps  xmm0,xmm0
   141106de8:	0f b7 5c 24 34                                  	movzx  ebx,WORD PTR [rsp+0x34]
   141106ded:	0f b7 7c 24 38                                  	movzx  edi,WORD PTR [rsp+0x38]
   141106df2:	66 2b c3                                        	sub    ax,bx
   141106df5:	0f bf d0                                        	movsx  edx,ax
   141106df8:	41 0f b7 86 aa 00 00 00                         	movzx  eax,WORD PTR [r14+0xaa]
   141106e00:	66 2b c7                                        	sub    ax,di
   141106e03:	0f af d2                                        	imul   edx,edx
   141106e06:	0f bf c8                                        	movsx  ecx,ax
   141106e09:	0f af c9                                        	imul   ecx,ecx
   141106e0c:	03 ca                                           	add    ecx,edx
   141106e0e:	66 0f 6e c9                                     	movd   xmm1,ecx
   141106e12:	0f 5b c9                                        	cvtdq2ps xmm1,xmm1
   141106e15:	0f 2e c1                                        	ucomiss xmm0,xmm1
   141106e18:	77 09                                           	ja     0x141106e23
   141106e1a:	0f 57 c0                                        	xorps  xmm0,xmm0
   141106e1d:	f3 0f 51 c1                                     	sqrtss xmm0,xmm1
   141106e21:	eb 08                                           	jmp    0x141106e2b
   141106e23:	0f 28 c1                                        	movaps xmm0,xmm1
   141106e26:	e8 ab da 44 00                                  	call   0x1415548d6
   141106e2b:	41 0f b7 86 ac 00 00 00                         	movzx  eax,WORD PTR [r14+0xac]
   141106e33:	41 bb d0 8a ff ff                               	mov    r11d,0xffff8ad0
   141106e39:	44 0f b7 44 24 3c                               	movzx  r8d,WORD PTR [rsp+0x3c]
   141106e3f:	66 41 2b c0                                     	sub    ax,r8w
   141106e43:	0f bf c8                                        	movsx  ecx,ax
   141106e46:	f3 0f 2c d0                                     	cvttss2si edx,xmm0
   141106e4a:	8b c1                                           	mov    eax,ecx
   141106e4c:	f7 d8                                           	neg    eax
   141106e4e:	0f 48 c1                                        	cmovs  eax,ecx
   141106e51:	66 03 d0                                        	add    dx,ax
   141106e54:	66 41 3b d7                                     	cmp    dx,r15w
   141106e58:	7c 06                                           	jl     0x141106e60
   141106e5a:	66 45 3b fb                                     	cmp    r15w,r11w
   141106e5e:	75 24                                           	jne    0x141106e84
   141106e60:	0f b7 c7                                        	movzx  eax,di
   141106e63:	41 0f b7 c8                                     	movzx  ecx,r8w
   141106e67:	66 89 84 24 88 00 00 00                         	mov    WORD PTR [rsp+0x88],ax
   141106e6f:	44 0f b7 fa                                     	movzx  r15d,dx
   141106e73:	66 89 4c 24 30                                  	mov    WORD PTR [rsp+0x30],cx
   141106e78:	44 0f b7 eb                                     	movzx  r13d,bx
   141106e7c:	eb 13                                           	jmp    0x141106e91
   141106e7e:	41 bb d0 8a ff ff                               	mov    r11d,0xffff8ad0
   141106e84:	0f b7 4c 24 30                                  	movzx  ecx,WORD PTR [rsp+0x30]
   141106e89:	0f b7 84 24 88 00 00 00                         	movzx  eax,WORD PTR [rsp+0x88]
   141106e91:	48 83 ee 01                                     	sub    rsi,0x1
   141106e95:	0f 89 25 fe ff ff                               	jns    0x141106cc0
   141106e9b:	48 8b bc 24 80 00 00 00                         	mov    rdi,QWORD PTR [rsp+0x80]
   141106ea3:	48 8b 5c 24 70                                  	mov    rbx,QWORD PTR [rsp+0x70]
   141106ea8:	66 45 3b eb                                     	cmp    r13w,r11w
   141106eac:	74 2b                                           	je     0x141106ed9
   141106eae:	41 83 7c 24 04 4b                               	cmp    DWORD PTR [r12+0x4],0x4b
   141106eb4:	7d 23                                           	jge    0x141106ed9
   141106eb6:	41 c7 04 24 20 00 00 00                         	mov    DWORD PTR [r12],0x20
   141106ebe:	66 45 89 6c 24 30                               	mov    WORD PTR [r12+0x30],r13w
   141106ec4:	66 41 89 44 24 32                               	mov    WORD PTR [r12+0x32],ax
   141106eca:	66 41 89 4c 24 34                               	mov    WORD PTR [r12+0x34],cx
   141106ed0:	41 c7 44 24 04 4b 00 00 00                      	mov    DWORD PTR [r12+0x4],0x4b
   141106ed9:	4c 8b 6c 24 48                                  	mov    r13,QWORD PTR [rsp+0x48]
   141106ede:	48 8b 74 24 78                                  	mov    rsi,QWORD PTR [rsp+0x78]
   141106ee3:	4c 8b 7c 24 40                                  	mov    r15,QWORD PTR [rsp+0x40]
   141106ee8:	48 83 c4 50                                     	add    rsp,0x50
   141106eec:	41 5e                                           	pop    r14
   141106eee:	41 5c                                           	pop    r12
   141106ef0:	5d                                              	pop    rbp
   141106ef1:	c3                                              	ret

; squad_order_kill_listst::getTargetUnits (same vtable + 0x58) [0x14042a300, 0x14042a305)
   14042a300:	48 8d 41 20                                     	lea    rax,[rcx+0x20]
   14042a304:	c3                                              	ret

; set station using kill-list destination [0x1415109d3, 0x141510a02)
   1415109d3:	c7 44 24 28 1f 00 00 00                         	mov    DWORD PTR [rsp+0x28],0x1f
   1415109db:	66 c7 44 24 20 03 00                            	mov    WORD PTR [rsp+0x20],0x3
   1415109e2:	44 0f b7 4a 34                                  	movzx  r9d,WORD PTR [rdx+0x34]
   1415109e7:	44 0f b7 42 32                                  	movzx  r8d,WORD PTR [rdx+0x32]
   1415109ec:	0f b7 52 30                                     	movzx  edx,WORD PTR [rdx+0x30]
   1415109f0:	e8 7b 07 e8 ff                                  	call   0x141391170
   1415109f5:	49 8b cf                                        	mov    rcx,r15
   1415109f8:	e8 13 78 e7 ff                                  	call   0x141388210
   1415109fd:	e9 ca 88 00 00                                  	jmp    0x1415192cc
