; RESOLVE_CONFLICT and flee action dispatcher [0x141511654, 0x141511682)
   141511654:	8b 81 18 01 00 00                               	mov    eax,DWORD PTR [rcx+0x118]
   14151165a:	0f ba e0 16                                     	bt     eax,0x16
   14151165e:	73 0f                                           	jae    0x14151166f
   141511660:	0f ba f0 16                                     	btr    eax,0x16
   141511664:	89 81 18 01 00 00                               	mov    DWORD PTR [rcx+0x118],eax
   14151166a:	e8 a1 bb 14 ff                                  	call   0x14065d210
   14151166f:	4c 8b c3                                        	mov    r8,rbx
   141511672:	49 8b d4                                        	mov    rdx,r12
   141511675:	49 8b cf                                        	mov    rcx,r15
   141511678:	e8 73 a3 00 00                                  	call   0x14151b9f0
   14151167d:	e9 4a 7c 00 00                                  	jmp    0x1415192cc

; current target visibility and incapacitation gates [0x14151b9f0, 0x14151bb01)
   14151b9f0:	48 89 5c 24 10                                  	mov    QWORD PTR [rsp+0x10],rbx
   14151b9f5:	55                                              	push   rbp
   14151b9f6:	56                                              	push   rsi
   14151b9f7:	57                                              	push   rdi
   14151b9f8:	41 54                                           	push   r12
   14151b9fa:	41 55                                           	push   r13
   14151b9fc:	41 56                                           	push   r14
   14151b9fe:	41 57                                           	push   r15
   14151ba00:	48 8d ac 24 e0 fb ff ff                         	lea    rbp,[rsp-0x420]
   14151ba08:	48 81 ec 20 05 00 00                            	sub    rsp,0x520
   14151ba0f:	48 8b 05 2a 26 3a 00                            	mov    rax,QWORD PTR [rip+0x3a262a]        # 0x1418be040
   14151ba16:	48 33 c4                                        	xor    rax,rsp
   14151ba19:	48 89 85 10 04 00 00                            	mov    QWORD PTR [rbp+0x410],rax
   14151ba20:	4d 8b e0                                        	mov    r12,r8
   14151ba23:	4c 89 45 88                                     	mov    QWORD PTR [rbp-0x78],r8
   14151ba27:	48 89 55 00                                     	mov    QWORD PTR [rbp+0x0],rdx
   14151ba2b:	4c 8b e9                                        	mov    r13,rcx
   14151ba2e:	48 89 4d 28                                     	mov    QWORD PTR [rbp+0x28],rcx
   14151ba32:	48 8b 89 90 04 00 00                            	mov    rcx,QWORD PTR [rcx+0x490]
   14151ba39:	49 8b 00                                        	mov    rax,QWORD PTR [r8]
   14151ba3c:	45 33 ff                                        	xor    r15d,r15d
   14151ba3f:	4c 89 7d 10                                     	mov    QWORD PTR [rbp+0x10],r15
   14151ba43:	48 3b c8                                        	cmp    rcx,rax
   14151ba46:	74 11                                           	je     0x14151ba59
   14151ba48:	49 89 85 90 04 00 00                            	mov    QWORD PTR [r13+0x490],rax
   14151ba4f:	45 89 bd 98 04 00 00                            	mov    DWORD PTR [r13+0x498],r15d
   14151ba56:	48 8b c8                                        	mov    rcx,rax
   14151ba59:	bf 03 00 00 00                                  	mov    edi,0x3
   14151ba5e:	48 8d 1d 0b 7f ed 00                            	lea    rbx,[rip+0xed7f0b]        # 0x1423f3970
   14151ba65:	41 f6 40 0c 04                                  	test   BYTE PTR [r8+0xc],0x4
   14151ba6a:	75 09                                           	jne    0x14151ba75
   14151ba6c:	4d 89 bd 90 04 00 00                            	mov    QWORD PTR [r13+0x490],r15
   14151ba73:	eb 05                                           	jmp    0x14151ba7a
   14151ba75:	48 85 c9                                        	test   rcx,rcx
   14151ba78:	75 5c                                           	jne    0x14151bad6
   14151ba7a:	e8 11 2d 9b ff                                  	call   0x140ece790
   14151ba7f:	44 8b c0                                        	mov    r8d,eax
   14151ba82:	8b c7                                           	mov    eax,edi
   14151ba84:	41 f7 e0                                        	mul    r8d
   14151ba87:	41 8b c8                                        	mov    ecx,r8d
   14151ba8a:	2b ca                                           	sub    ecx,edx
   14151ba8c:	d1 e9                                           	shr    ecx,1
   14151ba8e:	03 ca                                           	add    ecx,edx
   14151ba90:	c1 e9 1e                                        	shr    ecx,0x1e
   14151ba93:	69 c9 ff ff ff 7f                               	imul   ecx,ecx,0x7fffffff
   14151ba99:	44 2b c1                                        	sub    r8d,ecx
   14151ba9c:	41 81 f8 67 66 66 06                            	cmp    r8d,0x6666667
   14151baa3:	73 31                                           	jae    0x14151bad6
   14151baa5:	b9 28 00 00 00                                  	mov    ecx,0x28
   14151baaa:	e8 b1 7a b5 fe                                  	call   0x140073560
   14151baaf:	69 c8 9d 00 00 00                               	imul   ecx,eax,0x9d
   14151bab5:	41 89 8d c0 04 00 00                            	mov    DWORD PTR [r13+0x4c0],ecx
   14151babc:	48 63 d0                                        	movsxd rdx,eax
   14151babf:	44 8b 84 d3 4c 9b 11 00                         	mov    r8d,DWORD PTR [rbx+rdx*8+0x119b4c]
   14151bac7:	8b 94 d3 48 9b 11 00                            	mov    edx,DWORD PTR [rbx+rdx*8+0x119b48]
   14151bace:	49 8b cd                                        	mov    rcx,r13
   14151bad1:	e8 3a 7b ee ff                                  	call   0x141403610
   14151bad6:	66 45 39 bd 00 08 00 00                         	cmp    WORD PTR [r13+0x800],r15w
   14151bade:	0f 8f d6 2c 00 00                               	jg     0x14151e7ba
   14151bae4:	66 41 83 bd 04 08 00 00 0a                      	cmp    WORD PTR [r13+0x804],0xa
   14151baed:	0f 8d c7 2c 00 00                               	jge    0x14151e7ba
   14151baf3:	41 83 bd 78 09 00 00 64                         	cmp    DWORD PTR [r13+0x978],0x64
   14151bafb:	0f 8d b9 2c 00 00                               	jge    0x14151e7ba

; ranged weapon, ammunition, reposition, trajectory, aim and queued action [0x14151c903, 0x14151d813)
   14151c903:	49 83 3c 24 00                                  	cmp    QWORD PTR [r12],0x0
   14151c908:	0f 84 ac 1e 00 00                               	je     0x14151e7ba
   14151c90e:	41 83 bd d8 03 00 00 ff                         	cmp    DWORD PTR [r13+0x3d8],0xffffffff
   14151c916:	0f 85 9e 1e 00 00                               	jne    0x14151e7ba
   14151c91c:	49 8b b5 90 04 00 00                            	mov    rsi,QWORD PTR [r13+0x490]
   14151c923:	48 89 74 24 78                                  	mov    QWORD PTR [rsp+0x78],rsi
   14151c928:	45 0f b7 8d 54 03 00 00                         	movzx  r9d,WORD PTR [r13+0x354]
   14151c930:	66 44 89 4c 24 54                               	mov    WORD PTR [rsp+0x54],r9w
   14151c936:	45 0f b7 95 56 03 00 00                         	movzx  r10d,WORD PTR [r13+0x356]
   14151c93e:	66 44 89 54 24 5c                               	mov    WORD PTR [rsp+0x5c],r10w
   14151c944:	41 0f b7 8d 58 03 00 00                         	movzx  ecx,WORD PTR [r13+0x358]
   14151c94c:	66 89 4c 24 58                                  	mov    WORD PTR [rsp+0x58],cx
   14151c951:	48 85 f6                                        	test   rsi,rsi
   14151c954:	0f 84 9a 00 00 00                               	je     0x14151c9f4
   14151c95a:	8b 86 30 01 00 00                               	mov    eax,DWORD PTR [rsi+0x130]
   14151c960:	41 89 85 50 03 00 00                            	mov    DWORD PTR [r13+0x350],eax
   14151c967:	0f b7 86 a8 00 00 00                            	movzx  eax,WORD PTR [rsi+0xa8]
   14151c96e:	66 41 89 85 54 03 00 00                         	mov    WORD PTR [r13+0x354],ax
   14151c976:	0f b7 86 aa 00 00 00                            	movzx  eax,WORD PTR [rsi+0xaa]
   14151c97d:	66 41 89 85 56 03 00 00                         	mov    WORD PTR [r13+0x356],ax
   14151c985:	0f b7 86 ac 00 00 00                            	movzx  eax,WORD PTR [rsi+0xac]
   14151c98c:	66 41 89 85 58 03 00 00                         	mov    WORD PTR [r13+0x358],ax
   14151c994:	41 c7 85 5c 03 00 00 2c 01 00 00                	mov    DWORD PTR [r13+0x35c],0x12c
   14151c99f:	44 0f b7 8e a8 00 00 00                         	movzx  r9d,WORD PTR [rsi+0xa8]
   14151c9a7:	66 44 89 4c 24 54                               	mov    WORD PTR [rsp+0x54],r9w
   14151c9ad:	44 0f b7 96 aa 00 00 00                         	movzx  r10d,WORD PTR [rsi+0xaa]
   14151c9b5:	66 44 89 54 24 5c                               	mov    WORD PTR [rsp+0x5c],r10w
   14151c9bb:	0f b7 8e ac 00 00 00                            	movzx  ecx,WORD PTR [rsi+0xac]
   14151c9c2:	66 89 4c 24 58                                  	mov    WORD PTR [rsp+0x58],cx
   14151c9c7:	8b 86 30 01 00 00                               	mov    eax,DWORD PTR [rsi+0x130]
   14151c9cd:	41 39 85 d4 03 00 00                            	cmp    DWORD PTR [r13+0x3d4],eax
   14151c9d4:	74 05                                           	je     0x14151c9db
   14151c9d6:	83 f8 ff                                        	cmp    eax,0xffffffff
   14151c9d9:	75 19                                           	jne    0x14151c9f4
   14151c9db:	49 8b cd                                        	mov    rcx,r13
   14151c9de:	e8 5d aa e4 ff                                  	call   0x141367440
   14151c9e3:	44 0f b7 4c 24 54                               	movzx  r9d,WORD PTR [rsp+0x54]
   14151c9e9:	0f b7 4c 24 58                                  	movzx  ecx,WORD PTR [rsp+0x58]
   14151c9ee:	44 0f b7 54 24 5c                               	movzx  r10d,WORD PTR [rsp+0x5c]
   14151c9f4:	b8 d0 8a ff ff                                  	mov    eax,0xffff8ad0
   14151c9f9:	66 44 3b c8                                     	cmp    r9w,ax
   14151c9fd:	0f 84 b7 1d 00 00                               	je     0x14151e7ba
   14151ca03:	45 0f b7 85 ac 00 00 00                         	movzx  r8d,WORD PTR [r13+0xac]
   14151ca0b:	66 44 2b c1                                     	sub    r8w,cx
   14151ca0f:	41 0f b7 95 aa 00 00 00                         	movzx  edx,WORD PTR [r13+0xaa]
   14151ca17:	66 41 2b d2                                     	sub    dx,r10w
   14151ca1b:	41 0f b7 8d a8 00 00 00                         	movzx  ecx,WORD PTR [r13+0xa8]
   14151ca23:	66 41 2b c9                                     	sub    cx,r9w
   14151ca27:	e8 e4 6d b5 fe                                  	call   0x140073810
   14151ca2c:	0f b7 f8                                        	movzx  edi,ax
   14151ca2f:	66 89 44 24 52                                  	mov    WORD PTR [rsp+0x52],ax
   14151ca34:	b2 01                                           	mov    dl,0x1
   14151ca36:	49 8b cd                                        	mov    rcx,r13
   14151ca39:	e8 02 a2 e3 ff                                  	call   0x141356c40
   14151ca3e:	4c 8b e0                                        	mov    r12,rax
   14151ca41:	48 89 45 a0                                     	mov    QWORD PTR [rbp-0x60],rax
   14151ca45:	4c 8d 4c 24 51                                  	lea    r9,[rsp+0x51]
   14151ca4a:	45 33 c0                                        	xor    r8d,r8d
   14151ca4d:	48 8b d0                                        	mov    rdx,rax
   14151ca50:	49 8b cd                                        	mov    rcx,r13
   14151ca53:	e8 c8 b3 e3 ff                                  	call   0x141357e20
   14151ca58:	4c 8b f0                                        	mov    r14,rax
   14151ca5b:	48 89 45 98                                     	mov    QWORD PTR [rbp-0x68],rax
   14151ca5f:	32 db                                           	xor    bl,bl
   14151ca61:	4d 85 e4                                        	test   r12,r12
   14151ca64:	74 2a                                           	je     0x14151ca90
   14151ca66:	49 8b 14 24                                     	mov    rdx,QWORD PTR [r12]
   14151ca6a:	49 8b cc                                        	mov    rcx,r12
   14151ca6d:	ff 12                                           	call   QWORD PTR [rdx]
   14151ca6f:	66 83 f8 18                                     	cmp    ax,0x18
   14151ca73:	75 1b                                           	jne    0x14151ca90
   14151ca75:	49 8b 8c 24 e8 00 00 00                         	mov    rcx,QWORD PTR [r12+0xe8]
   14151ca7d:	0f b6 db                                        	movzx  ebx,bl
   14151ca80:	48 83 b9 e8 00 00 00 00                         	cmp    QWORD PTR [rcx+0xe8],0x0
   14151ca88:	b8 01 00 00 00                                  	mov    eax,0x1
   14151ca8d:	0f 45 d8                                        	cmovne ebx,eax
   14151ca90:	49 8b 85 d8 04 00 00                            	mov    rax,QWORD PTR [r13+0x4d8]
   14151ca97:	48 85 c0                                        	test   rax,rax
   14151ca9a:	74 22                                           	je     0x14151cabe
   14151ca9c:	66 83 78 14 1a                                  	cmp    WORD PTR [rax+0x14],0x1a
   14151caa1:	75 1b                                           	jne    0x14151cabe
   14151caa3:	66 83 ff 0c                                     	cmp    di,0xc
   14151caa7:	7c 15                                           	jl     0x14151cabe
   14151caa9:	41 f7 85 10 01 00 00 00 00 04 00                	test   DWORD PTR [r13+0x110],0x40000
   14151cab4:	75 06                                           	jne    0x14151cabc
   14151cab6:	66 83 ff 0f                                     	cmp    di,0xf
   14151caba:	7c 02                                           	jl     0x14151cabe
   14151cabc:	32 db                                           	xor    bl,bl
   14151cabe:	48 8b 4d 88                                     	mov    rcx,QWORD PTR [rbp-0x78]
   14151cac2:	8b 79 08                                        	mov    edi,DWORD PTR [rcx+0x8]
   14151cac5:	8d 47 fb                                        	lea    eax,[rdi-0x5]
   14151cac8:	44 0f b6 fb                                     	movzx  r15d,bl
   14151cacc:	83 f8 01                                        	cmp    eax,0x1
   14151cacf:	b8 00 00 00 00                                  	mov    eax,0x0
   14151cad4:	44 0f 47 f8                                     	cmova  r15d,eax
   14151cad8:	ba ff ff ff ff                                  	mov    edx,0xffffffff
   14151cadd:	48 8b 81 68 06 00 00                            	mov    rax,QWORD PTR [rcx+0x668]
   14151cae4:	48 85 c0                                        	test   rax,rax
   14151cae7:	74 03                                           	je     0x14151caec
   14151cae9:	8b 50 0c                                        	mov    edx,DWORD PTR [rax+0xc]
   14151caec:	49 8b cd                                        	mov    rcx,r13
   14151caef:	e8 ec be e3 ff                                  	call   0x1413589e0
   14151caf4:	0f b6 d8                                        	movzx  ebx,al
   14151caf7:	84 c0                                           	test   al,al
   14151caf9:	75 11                                           	jne    0x14151cb0c
   14151cafb:	83 ef 01                                        	sub    edi,0x1
   14151cafe:	74 0a                                           	je     0x14151cb0a
   14151cb00:	83 ef 01                                        	sub    edi,0x1
   14151cb03:	74 05                                           	je     0x14151cb0a
   14151cb05:	83 ff 01                                        	cmp    edi,0x1
   14151cb08:	75 02                                           	jne    0x14151cb0c
   14151cb0a:	b3 01                                           	mov    bl,0x1
   14151cb0c:	8b 05 22 17 3a 00                               	mov    eax,DWORD PTR [rip+0x3a1722]        # 0x1418be234
   14151cb12:	83 c0 fc                                        	add    eax,0xfffffffc
   14151cb15:	83 f8 01                                        	cmp    eax,0x1
   14151cb18:	40 0f 96 c7                                     	setbe  dil
   14151cb1c:	49 8b 85 d8 04 00 00                            	mov    rax,QWORD PTR [r13+0x4d8]
   14151cb23:	48 85 c0                                        	test   rax,rax
   14151cb26:	0f 84 a5 00 00 00                               	je     0x14151cbd1
   14151cb2c:	66 83 78 14 1a                                  	cmp    WORD PTR [rax+0x14],0x1a
   14151cb31:	0f 85 9a 00 00 00                               	jne    0x14151cbd1
   14151cb37:	48 85 f6                                        	test   rsi,rsi
   14151cb3a:	0f 84 8f 00 00 00                               	je     0x14151cbcf
   14151cb40:	48 8b ce                                        	mov    rcx,rsi
   14151cb43:	e8 b8 a8 e8 ff                                  	call   0x1413a7400
   14151cb48:	84 c0                                           	test   al,al
   14151cb4a:	0f 84 81 00 00 00                               	je     0x14151cbd1
   14151cb50:	48 83 be 80 0d 00 00 00                         	cmp    QWORD PTR [rsi+0xd80],0x0
   14151cb58:	0f 85 73 00 00 00                               	jne    0x14151cbd1
   14151cb5e:	f7 86 18 01 00 00 00 10 00 00                   	test   DWORD PTR [rsi+0x118],0x1000
   14151cb68:	75 67                                           	jne    0x14151cbd1
   14151cb6a:	41 b9 2e 00 00 00                               	mov    r9d,0x2e
   14151cb70:	44 0f b7 86 2c 01 00 00                         	movzx  r8d,WORD PTR [rsi+0x12c]
   14151cb78:	0f b7 96 a4 00 00 00                            	movzx  edx,WORD PTR [rsi+0xa4]
   14151cb7f:	48 8d 0d 42 23 ff 00                            	lea    rcx,[rip+0xff2342]        # 0x14250eec8
   14151cb86:	e8 f5 72 b5 fe                                  	call   0x140073e80
   14151cb8b:	84 c0                                           	test   al,al
   14151cb8d:	75 42                                           	jne    0x14151cbd1
   14151cb8f:	ba 3a 00 00 00                                  	mov    edx,0x3a
   14151cb94:	48 8b ce                                        	mov    rcx,rsi
   14151cb97:	e8 c4 7c b5 fe                                  	call   0x140074860
   14151cb9c:	84 c0                                           	test   al,al
   14151cb9e:	74 2f                                           	je     0x14151cbcf
   14151cba0:	48 8b 05 c1 fa e9 00                            	mov    rax,QWORD PTR [rip+0xe9fac1]        # 0x1423bc668
   14151cba7:	48 85 c0                                        	test   rax,rax
   14151cbaa:	74 25                                           	je     0x14151cbd1
   14151cbac:	0f b7 88 0e 0d 00 00                            	movzx  ecx,WORD PTR [rax+0xd0e]
   14151cbb3:	8d 41 ff                                        	lea    eax,[rcx-0x1]
   14151cbb6:	66 83 f8 01                                     	cmp    ax,0x1
   14151cbba:	76 0a                                           	jbe    0x14151cbc6
   14151cbbc:	66 83 f9 10                                     	cmp    cx,0x10
   14151cbc0:	74 04                                           	je     0x14151cbc6
   14151cbc2:	33 c0                                           	xor    eax,eax
   14151cbc4:	eb 05                                           	jmp    0x14151cbcb
   14151cbc6:	b8 01 00 00 00                                  	mov    eax,0x1
   14151cbcb:	85 c0                                           	test   eax,eax
   14151cbcd:	74 02                                           	je     0x14151cbd1
   14151cbcf:	b3 01                                           	mov    bl,0x1
   14151cbd1:	40 84 ff                                        	test   dil,dil
   14151cbd4:	0f 85 64 01 00 00                               	jne    0x14151cd3e
   14151cbda:	49 8b cd                                        	mov    rcx,r13
   14151cbdd:	e8 1e a8 e8 ff                                  	call   0x1413a7400
   14151cbe2:	84 c0                                           	test   al,al
   14151cbe4:	0f 84 27 01 00 00                               	je     0x14151cd11
   14151cbea:	e8 21 28 be fe                                  	call   0x1400ff410
   14151cbef:	84 c0                                           	test   al,al
   14151cbf1:	0f 85 f7 00 00 00                               	jne    0x14151ccee
   14151cbf7:	41 0f b7 bd a4 00 00 00                         	movzx  edi,WORD PTR [r13+0xa4]
   14151cbff:	41 b8 40 00 00 00                               	mov    r8d,0x40
   14151cc05:	0f b7 d7                                        	movzx  edx,di
   14151cc08:	48 8d 0d b9 22 ff 00                            	lea    rcx,[rip+0xff22b9]        # 0x14250eec8
   14151cc0f:	e8 dc 7f bc fe                                  	call   0x1400e4bf0
   14151cc14:	84 c0                                           	test   al,al
   14151cc16:	0f 85 d2 00 00 00                               	jne    0x14151ccee
   14151cc1c:	41 f7 85 1c 01 00 00 00 10 00 00                	test   DWORD PTR [r13+0x11c],0x1000
   14151cc27:	0f 85 c1 00 00 00                               	jne    0x14151ccee
   14151cc2d:	66 41 83 bd 60 03 00 00 07                      	cmp    WORD PTR [r13+0x360],0x7
   14151cc36:	0f 84 b2 00 00 00                               	je     0x14151ccee
   14151cc3c:	66 41 83 bd 14 08 00 00 02                      	cmp    WORD PTR [r13+0x814],0x2
   14151cc45:	0f 86 a3 00 00 00                               	jbe    0x14151ccee
   14151cc4b:	8b 35 e7 15 3a 00                               	mov    esi,DWORD PTR [rip+0x3a15e7]        # 0x1418be238
   14151cc51:	85 f6                                           	test   esi,esi
   14151cc53:	74 25                                           	je     0x14151cc7a
   14151cc55:	41 b9 22 00 00 00                               	mov    r9d,0x22
   14151cc5b:	45 0f b7 85 2c 01 00 00                         	movzx  r8d,WORD PTR [r13+0x12c]
   14151cc63:	0f b7 d7                                        	movzx  edx,di
   14151cc66:	48 8d 0d 5b 22 ff 00                            	lea    rcx,[rip+0xff225b]        # 0x14250eec8
   14151cc6d:	e8 0e 72 b5 fe                                  	call   0x140073e80
   14151cc72:	84 c0                                           	test   al,al
   14151cc74:	0f 84 6f 00 00 00                               	je     0x14151cce9
   14151cc7a:	41 be 03 00 00 00                               	mov    r14d,0x3
   14151cc80:	85 f6                                           	test   esi,esi
   14151cc82:	75 46                                           	jne    0x14151ccca
   14151cc84:	41 b9 14 00 00 00                               	mov    r9d,0x14
   14151cc8a:	45 0f b7 85 2c 01 00 00                         	movzx  r8d,WORD PTR [r13+0x12c]
   14151cc92:	0f b7 d7                                        	movzx  edx,di
   14151cc95:	48 8d 0d 2c 22 ff 00                            	lea    rcx,[rip+0xff222c]        # 0x14250eec8
   14151cc9c:	e8 df 71 b5 fe                                  	call   0x140073e80
   14151cca1:	84 c0                                           	test   al,al
   14151cca3:	74 25                                           	je     0x14151ccca
   14151cca5:	66 41 83 bd 34 03 00 00 ff                      	cmp    WORD PTR [r13+0x334],0xffff
   14151ccae:	75 14                                           	jne    0x14151ccc4
   14151ccb0:	41 83 bd 38 03 00 00 ff                         	cmp    DWORD PTR [r13+0x338],0xffffffff
   14151ccb8:	75 0a                                           	jne    0x14151ccc4
   14151ccba:	41 83 bd 3c 03 00 00 ff                         	cmp    DWORD PTR [r13+0x33c],0xffffffff
   14151ccc2:	74 06                                           	je     0x14151ccca
   14151ccc4:	41 be 0a 00 00 00                               	mov    r14d,0xa
   14151ccca:	0f b6 db                                        	movzx  ebx,bl
   14151cccd:	0f b7 54 24 52                                  	movzx  edx,WORD PTR [rsp+0x52]
   14151ccd2:	66 41 3b d6                                     	cmp    dx,r14w
   14151ccd6:	b8 00 00 00 00                                  	mov    eax,0x0
   14151ccdb:	0f 4f d8                                        	cmovg  ebx,eax
   14151ccde:	48 8b 74 24 78                                  	mov    rsi,QWORD PTR [rsp+0x78]
   14151cce3:	4c 8b 75 98                                     	mov    r14,QWORD PTR [rbp-0x68]
   14151cce7:	eb 0a                                           	jmp    0x14151ccf3
   14151cce9:	48 8b 74 24 78                                  	mov    rsi,QWORD PTR [rsp+0x78]
   14151ccee:	0f b7 54 24 52                                  	movzx  edx,WORD PTR [rsp+0x52]
   14151ccf3:	41 8b 85 10 01 00 00                            	mov    eax,DWORD PTR [r13+0x110]
   14151ccfa:	0f ba e0 13                                     	bt     eax,0x13
   14151ccfe:	72 16                                           	jb     0x14151cd16
   14151cd00:	0f ba e0 15                                     	bt     eax,0x15
   14151cd04:	0f b6 db                                        	movzx  ebx,bl
   14151cd07:	b9 01 00 00 00                                  	mov    ecx,0x1
   14151cd0c:	0f 42 d9                                        	cmovb  ebx,ecx
   14151cd0f:	eb 05                                           	jmp    0x14151cd16
   14151cd11:	0f b7 54 24 52                                  	movzx  edx,WORD PTR [rsp+0x52]
   14151cd16:	41 f7 85 18 01 00 00 00 00 01 00                	test   DWORD PTR [r13+0x118],0x10000
   14151cd21:	74 20                                           	je     0x14151cd43
   14151cd23:	0f b6 db                                        	movzx  ebx,bl
   14151cd26:	41 8b 85 a4 00 00 00                            	mov    eax,DWORD PTR [r13+0xa4]
   14151cd2d:	41 39 85 90 0d 00 00                            	cmp    DWORD PTR [r13+0xd90],eax
   14151cd34:	b8 00 00 00 00                                  	mov    eax,0x0
   14151cd39:	0f 44 d8                                        	cmove  ebx,eax
   14151cd3c:	eb 05                                           	jmp    0x14151cd43
   14151cd3e:	0f b7 54 24 52                                  	movzx  edx,WORD PTR [rsp+0x52]
   14151cd43:	40 32 ff                                        	xor    dil,dil
   14151cd46:	49 8b 85 08 12 00 00                            	mov    rax,QWORD PTR [r13+0x1208]
   14151cd4d:	b9 01 00 00 00                                  	mov    ecx,0x1
   14151cd52:	48 85 c0                                        	test   rax,rax
   14151cd55:	74 14                                           	je     0x14151cd6b
   14151cd57:	83 b8 38 01 00 00 0a                            	cmp    DWORD PTR [rax+0x138],0xa
   14151cd5e:	75 0b                                           	jne    0x14151cd6b
   14151cd60:	40 0f b6 ff                                     	movzx  edi,dil
   14151cd64:	66 83 fa 02                                     	cmp    dx,0x2
   14151cd68:	0f 4d f9                                        	cmovge edi,ecx
   14151cd6b:	41 f7 85 10 01 00 00 00 00 02 00                	test   DWORD PTR [r13+0x110],0x20000
   14151cd76:	74 19                                           	je     0x14151cd91
   14151cd78:	41 83 bd 50 01 00 00 ff                         	cmp    DWORD PTR [r13+0x150],0xffffffff
   14151cd80:	74 0f                                           	je     0x14151cd91
   14151cd82:	40 0f b6 ff                                     	movzx  edi,dil
   14151cd86:	41 83 bd 58 01 00 00 0a                         	cmp    DWORD PTR [r13+0x158],0xa
   14151cd8e:	0f 44 f9                                        	cmove  edi,ecx
   14151cd91:	ba 19 00 00 00                                  	mov    edx,0x19
   14151cd96:	45 84 ff                                        	test   r15b,r15b
   14151cd99:	0f 84 f5 00 00 00                               	je     0x14151ce94
   14151cd9f:	4d 85 f6                                        	test   r14,r14
   14151cda2:	0f 85 ec 00 00 00                               	jne    0x14151ce94
   14151cda8:	32 db                                           	xor    bl,bl
   14151cdaa:	49 8b 85 d8 04 00 00                            	mov    rax,QWORD PTR [r13+0x4d8]
   14151cdb1:	48 85 c0                                        	test   rax,rax
   14151cdb4:	74 44                                           	je     0x14151cdfa
   14151cdb6:	66 83 78 14 1a                                  	cmp    WORD PTR [rax+0x14],0x1a
   14151cdbb:	75 3d                                           	jne    0x14151cdfa
   14151cdbd:	48 8d 8d f0 00 00 00                            	lea    rcx,[rbp+0xf0]
   14151cdc4:	e8 07 a9 d0 fe                                  	call   0x1402276d0
   14151cdc9:	90                                              	nop
   14151cdca:	66 89 95 f0 00 00 00                            	mov    WORD PTR [rbp+0xf0],dx
   14151cdd1:	48 8d 85 f0 00 00 00                            	lea    rax,[rbp+0xf0]
   14151cdd8:	48 89 44 24 20                                  	mov    QWORD PTR [rsp+0x20],rax
   14151cddd:	45 33 c9                                        	xor    r9d,r9d
   14151cde0:	45 33 c0                                        	xor    r8d,r8d
   14151cde3:	33 d2                                           	xor    edx,edx
   14151cde5:	49 8b cd                                        	mov    rcx,r13
   14151cde8:	e8 a3 0b e2 ff                                  	call   0x14133d990
   14151cded:	90                                              	nop
   14151cdee:	48 8d 8d f0 00 00 00                            	lea    rcx,[rbp+0xf0]
   14151cdf5:	e8 d6 26 d1 fe                                  	call   0x14022f4d0
   14151cdfa:	49 83 bd d8 04 00 00 00                         	cmp    QWORD PTR [r13+0x4d8],0x0
   14151ce02:	0f 85 8c 00 00 00                               	jne    0x14151ce94
   14151ce08:	ba 53 00 00 00                                  	mov    edx,0x53
   14151ce0d:	49 8b cd                                        	mov    rcx,r13
   14151ce10:	e8 cb 7f b5 fe                                  	call   0x140074de0
   14151ce15:	48 85 c0                                        	test   rax,rax
   14151ce18:	0f 85 76 00 00 00                               	jne    0x14151ce94
   14151ce1e:	ba 53 00 00 00                                  	mov    edx,0x53
   14151ce23:	41 b8 f4 01 00 00                               	mov    r8d,0x1f4
   14151ce29:	49 8b cd                                        	mov    rcx,r13
   14151ce2c:	e8 df 7f b5 fe                                  	call   0x140074e10
   14151ce31:	49 8b cd                                        	mov    rcx,r13
   14151ce34:	e8 77 83 ec ff                                  	call   0x1413e51b0
   14151ce39:	48 8b d0                                        	mov    rdx,rax
   14151ce3c:	41 83 8d 80 02 00 00 01                         	or     DWORD PTR [r13+0x280],0x1
   14151ce44:	48 8d 8d f0 00 00 00                            	lea    rcx,[rbp+0xf0]
   14151ce4b:	e8 30 4c 15 ff                                  	call   0x140671a80
   14151ce50:	c7 44 24 28 64 00 00 00                         	mov    DWORD PTR [rsp+0x28],0x64
   14151ce58:	48 89 54 24 20                                  	mov    QWORD PTR [rsp+0x20],rdx
   14151ce5d:	41 b1 01                                        	mov    r9b,0x1
   14151ce60:	4c 8b 45 88                                     	mov    r8,QWORD PTR [rbp-0x78]
   14151ce64:	48 8d 95 f0 00 00 00                            	lea    rdx,[rbp+0xf0]
   14151ce6b:	49 8b cd                                        	mov    rcx,r13
   14151ce6e:	e8 1d 6e 50 ff                                  	call   0x140a23c90
   14151ce73:	83 bd f0 00 00 00 24                            	cmp    DWORD PTR [rbp+0xf0],0x24
   14151ce7a:	75 18                                           	jne    0x14151ce94
   14151ce7c:	4c 8b 45 88                                     	mov    r8,QWORD PTR [rbp-0x78]
   14151ce80:	48 8d 95 f0 00 00 00                            	lea    rdx,[rbp+0xf0]
   14151ce87:	49 8b cd                                        	mov    rcx,r13
   14151ce8a:	e8 e1 ff fe ff                                  	call   0x14150ce70
   14151ce8f:	e9 26 19 00 00                                  	jmp    0x14151e7ba
   14151ce94:	48 8b 45 00                                     	mov    rax,QWORD PTR [rbp+0x0]
   14151ce98:	8b 00                                           	mov    eax,DWORD PTR [rax]
   14151ce9a:	ff c8                                           	dec    eax
   14151ce9c:	0f b6 cb                                        	movzx  ecx,bl
   14151ce9f:	83 f8 01                                        	cmp    eax,0x1
   14151cea2:	b8 00 00 00 00                                  	mov    eax,0x0
   14151cea7:	0f 46 c8                                        	cmovbe ecx,eax
   14151ceaa:	49 8b 85 20 0b 00 00                            	mov    rax,QWORD PTR [r13+0xb20]
   14151ceb1:	49 2b 85 18 0b 00 00                            	sub    rax,QWORD PTR [r13+0xb18]
   14151ceb8:	48 c1 f8 04                                     	sar    rax,0x4
   14151cebc:	0f b6 d9                                        	movzx  ebx,cl
   14151cebf:	48 85 c0                                        	test   rax,rax
   14151cec2:	b8 01 00 00 00                                  	mov    eax,0x1
   14151cec7:	0f 45 d8                                        	cmovne ebx,eax
   14151ceca:	ba 16 00 00 00                                  	mov    edx,0x16
   14151cecf:	49 8b cd                                        	mov    rcx,r13
   14151ced2:	e8 09 7f b5 fe                                  	call   0x140074de0
   14151ced7:	48 85 c0                                        	test   rax,rax
   14151ceda:	75 0d                                           	jne    0x14151cee9
   14151cedc:	41 f7 85 10 01 00 00 00 02 00 00                	test   DWORD PTR [r13+0x110],0x200
   14151cee7:	74 02                                           	je     0x14151ceeb
   14151cee9:	b3 01                                           	mov    bl,0x1
   14151ceeb:	c6 44 24 50 00                                  	mov    BYTE PTR [rsp+0x50],0x0
   14151cef0:	4d 8b 85 d8 04 00 00                            	mov    r8,QWORD PTR [r13+0x4d8]
   14151cef7:	48 8d 15 02 31 ae fe                            	lea    rdx,[rip+0xfffffffffeae3102]        # 0x140000000
   14151cefe:	4d 85 c0                                        	test   r8,r8
   14151cf01:	74 57                                           	je     0x14151cf5a
   14151cf03:	45 0f bf 48 14                                  	movsx  r9d,WORD PTR [r8+0x14]
   14151cf08:	41 8d 41 e6                                     	lea    eax,[r9-0x1a]
   14151cf0c:	3d dd 00 00 00                                  	cmp    eax,0xdd
   14151cf11:	77 1b                                           	ja     0x14151cf2e
   14151cf13:	48 98                                           	cdqe
   14151cf15:	0f b6 84 02 04 e8 51 01                         	movzx  eax,BYTE PTR [rdx+rax*1+0x151e804]
   14151cf1d:	8b 8c 82 f8 e7 51 01                            	mov    ecx,DWORD PTR [rdx+rax*4+0x151e7f8]
   14151cf24:	48 03 ca                                        	add    rcx,rdx
   14151cf27:	ff e1                                           	jmp    rcx
   14151cf29:	c6 44 24 50 01                                  	mov    BYTE PTR [rsp+0x50],0x1
   14151cf2e:	41 83 f9 33                                     	cmp    r9d,0x33
   14151cf32:	75 26                                           	jne    0x14151cf5a
   14151cf34:	4d 85 f6                                        	test   r14,r14
   14151cf37:	75 21                                           	jne    0x14151cf5a
   14151cf39:	33 d2                                           	xor    edx,edx
   14151cf3b:	49 8b c8                                        	mov    rcx,r8
   14151cf3e:	e8 6d 42 80 ff                                  	call   0x140d211b0
   14151cf43:	48 85 c0                                        	test   rax,rax
   14151cf46:	74 12                                           	je     0x14151cf5a
   14151cf48:	48 8b 08                                        	mov    rcx,QWORD PTR [rax]
   14151cf4b:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   14151cf4e:	ff 10                                           	call   QWORD PTR [rax]
   14151cf50:	66 83 f8 27                                     	cmp    ax,0x27
   14151cf54:	0f 84 60 18 00 00                               	je     0x14151e7ba
   14151cf5a:	45 84 ff                                        	test   r15b,r15b
   14151cf5d:	0f 84 b0 08 00 00                               	je     0x14151d813
   14151cf63:	48 85 f6                                        	test   rsi,rsi
   14151cf66:	0f 84 85 08 00 00                               	je     0x14151d7f1
   14151cf6c:	4d 85 f6                                        	test   r14,r14
   14151cf6f:	0f 84 7c 08 00 00                               	je     0x14151d7f1
   14151cf75:	4d 85 e4                                        	test   r12,r12
   14151cf78:	0f 84 73 08 00 00                               	je     0x14151d7f1
   14151cf7e:	84 db                                           	test   bl,bl
   14151cf80:	75 12                                           	jne    0x14151cf94
   14151cf82:	b9 05 00 00 00                                  	mov    ecx,0x5
   14151cf87:	e8 d4 65 b5 fe                                  	call   0x140073560
   14151cf8c:	85 c0                                           	test   eax,eax
   14151cf8e:	0f 85 7f 08 00 00                               	jne    0x14151d813
   14151cf94:	49 8b cd                                        	mov    rcx,r13
   14151cf97:	e8 14 82 ec ff                                  	call   0x1413e51b0
   14151cf9c:	49 8b 85 d0 00 00 00                            	mov    rax,QWORD PTR [r13+0xd0]
   14151cfa3:	49 2b 85 c8 00 00 00                            	sub    rax,QWORD PTR [r13+0xc8]
   14151cfaa:	48 a9 fe ff ff ff                               	test   rax,0xfffffffffffffffe
   14151cfb0:	0f 85 6f 04 00 00                               	jne    0x14151d425
   14151cfb6:	41 f7 85 10 01 00 00 00 82 00 00                	test   DWORD PTR [r13+0x110],0x8200
   14151cfc1:	0f 85 5e 04 00 00                               	jne    0x14151d425
   14151cfc7:	c6 44 24 70 00                                  	mov    BYTE PTR [rsp+0x70],0x0
   14151cfcc:	0f bf 9e ac 00 00 00                            	movsx  ebx,WORD PTR [rsi+0xac]
   14151cfd3:	41 0f bf bd ac 00 00 00                         	movsx  edi,WORD PTR [r13+0xac]
   14151cfdb:	0f b7 b6 aa 00 00 00                            	movzx  esi,WORD PTR [rsi+0xaa]
   14151cfe2:	45 0f b7 b5 aa 00 00 00                         	movzx  r14d,WORD PTR [r13+0xaa]
   14151cfea:	48 8b 4c 24 78                                  	mov    rcx,QWORD PTR [rsp+0x78]
   14151cfef:	44 0f b7 b9 a8 00 00 00                         	movzx  r15d,WORD PTR [rcx+0xa8]
   14151cff7:	45 0f b7 a5 a8 00 00 00                         	movzx  r12d,WORD PTR [r13+0xa8]
   14151cfff:	44 0f b7 c3                                     	movzx  r8d,bx
   14151d003:	66 44 2b c7                                     	sub    r8w,di
   14151d007:	0f b7 d6                                        	movzx  edx,si
   14151d00a:	66 41 2b d6                                     	sub    dx,r14w
   14151d00e:	41 0f b7 cf                                     	movzx  ecx,r15w
   14151d012:	66 41 2b cc                                     	sub    cx,r12w
   14151d016:	e8 f5 67 b5 fe                                  	call   0x140073810
   14151d01b:	66 89 44 24 58                                  	mov    WORD PTR [rsp+0x58],ax
   14151d020:	66 83 f8 05                                     	cmp    ax,0x5
   14151d024:	7f 61                                           	jg     0x14151d087
   14151d026:	44 8b d3                                        	mov    r10d,ebx
   14151d029:	44 2b d7                                        	sub    r10d,edi
   14151d02c:	45 8b ca                                        	mov    r9d,r10d
   14151d02f:	41 f7 d9                                        	neg    r9d
   14151d032:	45 0f 48 ca                                     	cmovs  r9d,r10d
   14151d036:	41 83 f9 01                                     	cmp    r9d,0x1
   14151d03a:	7f 4b                                           	jg     0x14151d087
   14151d03c:	c6 44 24 48 01                                  	mov    BYTE PTR [rsp+0x48],0x1
   14151d041:	c7 44 24 40 ff ff ff ff                         	mov    DWORD PTR [rsp+0x40],0xffffffff
   14151d049:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   14151d04e:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   14151d053:	66 89 5c 24 28                                  	mov    WORD PTR [rsp+0x28],bx
   14151d058:	66 89 74 24 20                                  	mov    WORD PTR [rsp+0x20],si
   14151d05d:	45 0f b7 cf                                     	movzx  r9d,r15w
   14151d061:	44 0f b7 c7                                     	movzx  r8d,di
   14151d065:	41 0f b7 d6                                     	movzx  edx,r14w
   14151d069:	41 0f b7 cc                                     	movzx  ecx,r12w
   14151d06d:	e8 de bd 58 ff                                  	call   0x140aa8e50
   14151d072:	8b 4c 24 70                                     	mov    ecx,DWORD PTR [rsp+0x70]
   14151d076:	0f b6 c9                                        	movzx  ecx,cl
   14151d079:	84 c0                                           	test   al,al
   14151d07b:	b8 01 00 00 00                                  	mov    eax,0x1
   14151d080:	0f 45 c8                                        	cmovne ecx,eax
   14151d083:	89 4c 24 70                                     	mov    DWORD PTR [rsp+0x70],ecx
   14151d087:	0f 57 c0                                        	xorps  xmm0,xmm0
   14151d08a:	f3 0f 7f 85 90 00 00 00                         	movdqu XMMWORD PTR [rbp+0x90],xmm0
   14151d092:	45 33 f6                                        	xor    r14d,r14d
   14151d095:	4c 89 b5 a0 00 00 00                            	mov    QWORD PTR [rbp+0xa0],r14
   14151d09c:	f3 0f 7f 45 30                                  	movdqu XMMWORD PTR [rbp+0x30],xmm0
   14151d0a1:	4c 89 75 40                                     	mov    QWORD PTR [rbp+0x40],r14
   14151d0a5:	41 0f bf 85 a8 00 00 00                         	movsx  eax,WORD PTR [r13+0xa8]
   14151d0ad:	8d 78 ff                                        	lea    edi,[rax-0x1]
   14151d0b0:	66 89 7c 24 5c                                  	mov    WORD PTR [rsp+0x5c],di
   14151d0b5:	8d 48 01                                        	lea    ecx,[rax+0x1]
   14151d0b8:	0f bf c7                                        	movsx  eax,di
   14151d0bb:	3b c1                                           	cmp    eax,ecx
   14151d0bd:	0f 8f 01 02 00 00                               	jg     0x14151d2c4
   14151d0c3:	0f 1f 40 00                                     	nop    DWORD PTR [rax+0x0]
   14151d0c7:	66 0f 1f 84 00 00 00 00 00                      	nop    WORD PTR [rax+rax*1+0x0]
   14151d0d0:	41 0f bf 95 aa 00 00 00                         	movsx  edx,WORD PTR [r13+0xaa]
   14151d0d8:	8d 5a ff                                        	lea    ebx,[rdx-0x1]
   14151d0db:	66 89 5c 24 54                                  	mov    WORD PTR [rsp+0x54],bx
   14151d0e0:	8d 4a 01                                        	lea    ecx,[rdx+0x1]
   14151d0e3:	0f bf c3                                        	movsx  eax,bx
   14151d0e6:	3b c1                                           	cmp    eax,ecx
   14151d0e8:	0f 8f b6 01 00 00                               	jg     0x14151d2a4
   14151d0ee:	44 0f b7 c3                                     	movzx  r8d,bx
   14151d0f2:	66 41 3b bd a8 00 00 00                         	cmp    di,WORD PTR [r13+0xa8]
   14151d0fa:	75 0a                                           	jne    0x14151d106
   14151d0fc:	66 44 3b c2                                     	cmp    r8w,dx
   14151d100:	0f 84 7e 01 00 00                               	je     0x14151d284
   14151d106:	45 0f b7 8d ac 00 00 00                         	movzx  r9d,WORD PTR [r13+0xac]
   14151d10e:	44 0f b7 c3                                     	movzx  r8d,bx
   14151d112:	0f b7 d7                                        	movzx  edx,di
   14151d115:	48 8d 0d 54 68 ed 00                            	lea    rcx,[rip+0xed6854]        # 0x1423f3970
   14151d11c:	e8 1f c5 b4 fe                                  	call   0x140069640
   14151d121:	a8 08                                           	test   al,0x8
   14151d123:	0f 85 5b 01 00 00                               	jne    0x14151d284
   14151d129:	c6 44 24 20 00                                  	mov    BYTE PTR [rsp+0x20],0x0
   14151d12e:	44 0f b7 c3                                     	movzx  r8d,bx
   14151d132:	0f b7 d7                                        	movzx  edx,di
   14151d135:	49 8b cd                                        	mov    rcx,r13
   14151d138:	e8 33 20 e6 ff                                  	call   0x14137f170
   14151d13d:	84 c0                                           	test   al,al
   14151d13f:	0f 84 3f 01 00 00                               	je     0x14151d284
   14151d145:	48 8b 44 24 78                                  	mov    rax,QWORD PTR [rsp+0x78]
   14151d14a:	44 0f b7 b8 ac 00 00 00                         	movzx  r15d,WORD PTR [rax+0xac]
   14151d152:	45 0f b7 a5 ac 00 00 00                         	movzx  r12d,WORD PTR [r13+0xac]
   14151d15a:	0f b7 b0 aa 00 00 00                            	movzx  esi,WORD PTR [rax+0xaa]
   14151d161:	44 0f b7 b0 a8 00 00 00                         	movzx  r14d,WORD PTR [rax+0xa8]
   14151d169:	45 0f b7 c7                                     	movzx  r8d,r15w
   14151d16d:	66 45 2b c4                                     	sub    r8w,r12w
   14151d171:	80 7c 24 70 00                                  	cmp    BYTE PTR [rsp+0x70],0x0
   14151d176:	74 5f                                           	je     0x14151d1d7
   14151d178:	66 2b f3                                        	sub    si,bx
   14151d17b:	66 44 2b f7                                     	sub    r14w,di
   14151d17f:	0f b7 d6                                        	movzx  edx,si
   14151d182:	41 0f b7 ce                                     	movzx  ecx,r14w
   14151d186:	e8 85 66 b5 fe                                  	call   0x140073810
   14151d18b:	66 3b 44 24 58                                  	cmp    ax,WORD PTR [rsp+0x58]
   14151d190:	0f 8e ee 00 00 00                               	jle    0x14151d284
   14151d196:	e9 ca 00 00 00                                  	jmp    0x14151d265
   14151d19b:	ba 0f 00 00 00                                  	mov    edx,0xf
   14151d1a0:	49 8b cd                                        	mov    rcx,r13
   14151d1a3:	e8 48 76 b5 fe                                  	call   0x1400747f0
   14151d1a8:	84 c0                                           	test   al,al
   14151d1aa:	0f 85 0a 16 00 00                               	jne    0x14151e7ba
   14151d1b0:	41 83 f9 33                                     	cmp    r9d,0x33
   14151d1b4:	74 10                                           	je     0x14151d1c6
   14151d1b6:	49 8b cd                                        	mov    rcx,r13
   14151d1b9:	e8 42 7b ec ff                                  	call   0x1413e4d00
   14151d1be:	49 8b cd                                        	mov    rcx,r13
   14151d1c1:	e8 5a 7a ec ff                                  	call   0x1413e4c20
   14151d1c6:	48 8b 55 88                                     	mov    rdx,QWORD PTR [rbp-0x78]
   14151d1ca:	49 8b cd                                        	mov    rcx,r13
   14151d1cd:	e8 7e 81 4e ff                                  	call   0x140a05350
   14151d1d2:	e9 e3 15 00 00                                  	jmp    0x14151e7ba
   14151d1d7:	0f b7 d6                                        	movzx  edx,si
   14151d1da:	66 2b d3                                        	sub    dx,bx
   14151d1dd:	41 0f b7 ce                                     	movzx  ecx,r14w
   14151d1e1:	66 2b cf                                        	sub    cx,di
   14151d1e4:	e8 27 66 b5 fe                                  	call   0x140073810
   14151d1e9:	66 3b 44 24 58                                  	cmp    ax,WORD PTR [rsp+0x58]
   14151d1ee:	0f 8d 90 00 00 00                               	jge    0x14151d284
   14151d1f4:	c6 44 24 48 02                                  	mov    BYTE PTR [rsp+0x48],0x2
   14151d1f9:	c7 44 24 40 ff ff ff ff                         	mov    DWORD PTR [rsp+0x40],0xffffffff
   14151d201:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   14151d206:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   14151d20b:	66 44 89 7c 24 28                               	mov    WORD PTR [rsp+0x28],r15w
   14151d211:	66 89 74 24 20                                  	mov    WORD PTR [rsp+0x20],si
   14151d216:	45 0f b7 ce                                     	movzx  r9d,r14w
   14151d21a:	45 0f b7 c4                                     	movzx  r8d,r12w
   14151d21e:	0f b7 d3                                        	movzx  edx,bx
   14151d221:	0f b7 cf                                        	movzx  ecx,di
   14151d224:	e8 27 bc 58 ff                                  	call   0x140aa8e50
   14151d229:	84 c0                                           	test   al,al
   14151d22b:	74 57                                           	je     0x14151d284
   14151d22d:	83 3d 4c 6c c3 00 02                            	cmp    DWORD PTR [rip+0xc36c4c],0x2        # 0x142153e80
   14151d234:	7c 4e                                           	jl     0x14151d284
   14151d236:	44 0f b7 0d 52 88 6b 00                         	movzx  r9d,WORD PTR [rip+0x6b8852]        # 0x141bd5a90
   14151d23e:	44 0f b7 05 48 88 6b 00                         	movzx  r8d,WORD PTR [rip+0x6b8848]        # 0x141bd5a8e
   14151d246:	0f b7 15 3f 88 6b 00                            	movzx  edx,WORD PTR [rip+0x6b883f]        # 0x141bd5a8c
   14151d24d:	48 8d 0d 1c 67 ed 00                            	lea    rcx,[rip+0xed671c]        # 0x1423f3970
   14151d254:	e8 57 c3 b4 fe                                  	call   0x1400695b0
   14151d259:	0f b7 c8                                        	movzx  ecx,ax
   14151d25c:	e8 4f 9a da fe                                  	call   0x1402c6cb0
   14151d261:	84 c0                                           	test   al,al
   14151d263:	74 1f                                           	je     0x14151d284
   14151d265:	48 8d 54 24 5c                                  	lea    rdx,[rsp+0x5c]
   14151d26a:	48 8d 8d 90 00 00 00                            	lea    rcx,[rbp+0x90]
   14151d271:	e8 aa 38 b5 fe                                  	call   0x140070b20
   14151d276:	48 8d 54 24 54                                  	lea    rdx,[rsp+0x54]
   14151d27b:	48 8d 4d 30                                     	lea    rcx,[rbp+0x30]
   14151d27f:	e8 9c 38 b5 fe                                  	call   0x140070b20
   14151d284:	66 ff c3                                        	inc    bx
   14151d287:	44 0f bf c3                                     	movsx  r8d,bx
   14151d28b:	66 89 5c 24 54                                  	mov    WORD PTR [rsp+0x54],bx
   14151d290:	41 0f bf 95 aa 00 00 00                         	movsx  edx,WORD PTR [r13+0xaa]
   14151d298:	8d 4a 01                                        	lea    ecx,[rdx+0x1]
   14151d29b:	44 3b c1                                        	cmp    r8d,ecx
   14151d29e:	0f 8e 4e fe ff ff                               	jle    0x14151d0f2
   14151d2a4:	66 ff c7                                        	inc    di
   14151d2a7:	66 89 7c 24 5c                                  	mov    WORD PTR [rsp+0x5c],di
   14151d2ac:	41 0f bf 8d a8 00 00 00                         	movsx  ecx,WORD PTR [r13+0xa8]
   14151d2b4:	ff c1                                           	inc    ecx
   14151d2b6:	0f bf c7                                        	movsx  eax,di
   14151d2b9:	3b c1                                           	cmp    eax,ecx
   14151d2bb:	0f 8e 0f fe ff ff                               	jle    0x14151d0d0
   14151d2c1:	45 33 f6                                        	xor    r14d,r14d
   14151d2c4:	48 8b 8d 98 00 00 00                            	mov    rcx,QWORD PTR [rbp+0x98]
   14151d2cb:	48 8b 9d 90 00 00 00                            	mov    rbx,QWORD PTR [rbp+0x90]
   14151d2d2:	48 2b cb                                        	sub    rcx,rbx
   14151d2d5:	48 d1 f9                                        	sar    rcx,1
   14151d2d8:	0f 84 28 01 00 00                               	je     0x14151d406
   14151d2de:	e8 7d 62 b5 fe                                  	call   0x140073560
   14151d2e3:	48 63 c8                                        	movsxd rcx,eax
   14151d2e6:	0f b7 1c 4b                                     	movzx  ebx,WORD PTR [rbx+rcx*2]
   14151d2ea:	48 8b 45 30                                     	mov    rax,QWORD PTR [rbp+0x30]
   14151d2ee:	0f b7 3c 48                                     	movzx  edi,WORD PTR [rax+rcx*2]
   14151d2f2:	c7 44 24 20 d8 00 00 00                         	mov    DWORD PTR [rsp+0x20],0xd8
   14151d2fa:	45 0f b7 8d ac 00 00 00                         	movzx  r9d,WORD PTR [r13+0xac]
   14151d302:	44 0f b7 c7                                     	movzx  r8d,di
   14151d306:	0f b7 d3                                        	movzx  edx,bx
   14151d309:	49 8b cd                                        	mov    rcx,r13
   14151d30c:	e8 8f 7b b5 fe                                  	call   0x140074ea0
   14151d311:	41 b0 01                                        	mov    r8b,0x1
   14151d314:	33 d2                                           	xor    edx,edx
   14151d316:	49 8b cd                                        	mov    rcx,r13
   14151d319:	e8 52 36 e4 ff                                  	call   0x141360970
   14151d31e:	41 89 85 60 0c 00 00                            	mov    DWORD PTR [r13+0xc60],eax
   14151d325:	49 8b cd                                        	mov    rcx,r13
   14151d328:	e8 83 46 eb ff                                  	call   0x1413d19b0
   14151d32d:	45 89 b5 60 0c 00 00                            	mov    DWORD PTR [r13+0xc60],r14d
   14151d334:	4c 8d 4d 00                                     	lea    r9,[rbp+0x0]
   14151d338:	41 b0 01                                        	mov    r8b,0x1
   14151d33b:	41 0f b6 d0                                     	movzx  edx,r8b
   14151d33f:	49 8b cd                                        	mov    rcx,r13
   14151d342:	e8 d9 01 e3 ff                                  	call   0x14134d520
   14151d347:	8b f0                                           	mov    esi,eax
   14151d349:	66 41 3b 9d a8 00 00 00                         	cmp    bx,WORD PTR [r13+0xa8]
   14151d351:	74 19                                           	je     0x14151d36c
   14151d353:	66 41 3b bd aa 00 00 00                         	cmp    di,WORD PTR [r13+0xaa]
   14151d35b:	74 0f                                           	je     0x14151d36c
   14151d35d:	69 c6 6a 01 00 00                               	imul   eax,esi,0x16a
   14151d363:	99                                              	cdq
   14151d364:	0f b6 f2                                        	movzx  esi,dl
   14151d367:	03 f0                                           	add    esi,eax
   14151d369:	c1 fe 08                                        	sar    esi,0x8
   14151d36c:	b8 1f 85 eb 51                                  	mov    eax,0x51eb851f
   14151d371:	f7 ee                                           	imul   esi
   14151d373:	8b da                                           	mov    ebx,edx
   14151d375:	c1 fb 05                                        	sar    ebx,0x5
   14151d378:	8b c3                                           	mov    eax,ebx
   14151d37a:	c1 e8 1f                                        	shr    eax,0x1f
   14151d37d:	03 d8                                           	add    ebx,eax
   14151d37f:	b9 64 00 00 00                                  	mov    ecx,0x64
   14151d384:	e8 d7 61 b5 fe                                  	call   0x140073560
   14151d389:	6b cb 64                                        	imul   ecx,ebx,0x64
   14151d38c:	2b f1                                           	sub    esi,ecx
   14151d38e:	8d 7b 01                                        	lea    edi,[rbx+0x1]
   14151d391:	3b c6                                           	cmp    eax,esi
   14151d393:	0f 4d fb                                        	cmovge edi,ebx
   14151d396:	49 8b cd                                        	mov    rcx,r13
   14151d399:	e8 82 30 14 ff                                  	call   0x140660420
   14151d39e:	4c 8b c0                                        	mov    r8,rax
   14151d3a1:	44 89 30                                        	mov    DWORD PTR [rax],r14d
   14151d3a4:	41 0f b7 8d a8 00 00 00                         	movzx  ecx,WORD PTR [r13+0xa8]
   14151d3ac:	66 89 48 08                                     	mov    WORD PTR [rax+0x8],cx
   14151d3b0:	41 0f b7 8d aa 00 00 00                         	movzx  ecx,WORD PTR [r13+0xaa]
   14151d3b8:	66 89 48 0a                                     	mov    WORD PTR [rax+0xa],cx
   14151d3bc:	41 0f b7 8d ac 00 00 00                         	movzx  ecx,WORD PTR [r13+0xac]
   14151d3c4:	66 89 48 0c                                     	mov    WORD PTR [rax+0xc],cx
   14151d3c8:	89 78 10                                        	mov    DWORD PTR [rax+0x10],edi
   14151d3cb:	89 78 14                                        	mov    DWORD PTR [rax+0x14],edi
   14151d3ce:	48 8b 45 00                                     	mov    rax,QWORD PTR [rbp+0x0]
   14151d3d2:	48 85 c0                                        	test   rax,rax
   14151d3d5:	74 27                                           	je     0x14151d3fe
   14151d3d7:	8b 40 14                                        	mov    eax,DWORD PTR [rax+0x14]
   14151d3da:	41 89 40 18                                     	mov    DWORD PTR [r8+0x18],eax
   14151d3de:	83 f8 05                                        	cmp    eax,0x5
   14151d3e1:	7e 1f                                           	jle    0x14151d402
   14151d3e3:	83 ff 01                                        	cmp    edi,0x1
   14151d3e6:	7e 1a                                           	jle    0x14151d402
   14151d3e8:	99                                              	cdq
   14151d3e9:	f7 ff                                           	idiv   edi
   14151d3eb:	41 89 40 18                                     	mov    DWORD PTR [r8+0x18],eax
   14151d3ef:	83 f8 05                                        	cmp    eax,0x5
   14151d3f2:	7d 0e                                           	jge    0x14151d402
   14151d3f4:	41 c7 40 18 05 00 00 00                         	mov    DWORD PTR [r8+0x18],0x5
   14151d3fc:	eb 04                                           	jmp    0x14151d402
   14151d3fe:	45 89 70 18                                     	mov    DWORD PTR [r8+0x18],r14d
   14151d402:	45 89 70 1c                                     	mov    DWORD PTR [r8+0x1c],r14d
   14151d406:	48 8d 4d 30                                     	lea    rcx,[rbp+0x30]
   14151d40a:	e8 d1 39 b5 fe                                  	call   0x140070de0
   14151d40f:	90                                              	nop
   14151d410:	48 8d 8d 90 00 00 00                            	lea    rcx,[rbp+0x90]
   14151d417:	e8 c4 39 b5 fe                                  	call   0x140070de0
   14151d41c:	4c 8b 65 a0                                     	mov    r12,QWORD PTR [rbp-0x60]
   14151d420:	48 8b 74 24 78                                  	mov    rsi,QWORD PTR [rsp+0x78]
   14151d425:	45 33 c0                                        	xor    r8d,r8d
   14151d428:	49 8b d4                                        	mov    rdx,r12
   14151d42b:	49 8b cd                                        	mov    rcx,r13
   14151d42e:	e8 dd 9b e3 ff                                  	call   0x141357010
   14151d433:	48 8b ce                                        	mov    rcx,rsi
   14151d436:	48 8b d6                                        	mov    rdx,rsi
   14151d439:	4c 8b ce                                        	mov    r9,rsi
   14151d43c:	83 f8 0a                                        	cmp    eax,0xa
   14151d43f:	0f 9d c0                                        	setge  al
   14151d442:	fe c0                                           	inc    al
   14151d444:	88 44 24 48                                     	mov    BYTE PTR [rsp+0x48],al
   14151d448:	bf ff ff ff ff                                  	mov    edi,0xffffffff
   14151d44d:	89 7c 24 40                                     	mov    DWORD PTR [rsp+0x40],edi
   14151d451:	c6 44 24 38 00                                  	mov    BYTE PTR [rsp+0x38],0x0
   14151d456:	c6 44 24 30 01                                  	mov    BYTE PTR [rsp+0x30],0x1
   14151d45b:	0f b7 81 ac 00 00 00                            	movzx  eax,WORD PTR [rcx+0xac]
   14151d462:	66 89 44 24 28                                  	mov    WORD PTR [rsp+0x28],ax
   14151d467:	0f b7 82 aa 00 00 00                            	movzx  eax,WORD PTR [rdx+0xaa]
   14151d46e:	66 89 44 24 20                                  	mov    WORD PTR [rsp+0x20],ax
   14151d473:	44 0f b7 8e a8 00 00 00                         	movzx  r9d,WORD PTR [rsi+0xa8]
   14151d47b:	45 0f b7 85 ac 00 00 00                         	movzx  r8d,WORD PTR [r13+0xac]
   14151d483:	41 0f b7 95 aa 00 00 00                         	movzx  edx,WORD PTR [r13+0xaa]
   14151d48b:	41 0f b7 8d a8 00 00 00                         	movzx  ecx,WORD PTR [r13+0xa8]
   14151d493:	e8 b8 b9 58 ff                                  	call   0x140aa8e50
   14151d498:	84 c0                                           	test   al,al
   14151d49a:	0f 84 1a 13 00 00                               	je     0x14151e7ba
   14151d4a0:	80 7c 24 50 00                                  	cmp    BYTE PTR [rsp+0x50],0x0
   14151d4a5:	75 08                                           	jne    0x14151d4af
   14151d4a7:	49 8b cd                                        	mov    rcx,r13
   14151d4aa:	e8 41 e8 ea ff                                  	call   0x1413cbcf0
   14151d4af:	48 8b 45 88                                     	mov    rax,QWORD PTR [rbp-0x78]
   14151d4b3:	48 8b 80 68 06 00 00                            	mov    rax,QWORD PTR [rax+0x668]
   14151d4ba:	48 85 c0                                        	test   rax,rax
   14151d4bd:	74 07                                           	je     0x14151d4c6
   14151d4bf:	c7 40 6c 00 00 00 00                            	mov    DWORD PTR [rax+0x6c],0x0
   14151d4c6:	c6 44 24 20 01                                  	mov    BYTE PTR [rsp+0x20],0x1
   14151d4cb:	4d 8b cc                                        	mov    r9,r12
   14151d4ce:	4c 8b c6                                        	mov    r8,rsi
   14151d4d1:	49 8b d5                                        	mov    rdx,r13
   14151d4d4:	48 8d 0d 8d 5a 14 01                            	lea    rcx,[rip+0x1145a8d]        # 0x142662f68
   14151d4db:	e8 70 f8 14 ff                                  	call   0x14066cd50
   14151d4e0:	45 33 ff                                        	xor    r15d,r15d
   14151d4e3:	44 39 3d c6 5a 14 01                            	cmp    DWORD PTR [rip+0x1145ac6],r15d        # 0x142662fb0
   14151d4ea:	0f 8e 0d 02 00 00                               	jle    0x14151d6fd
   14151d4f0:	4c 8b c6                                        	mov    r8,rsi
   14151d4f3:	49 8b d5                                        	mov    rdx,r13
   14151d4f6:	e8 85 ed fd ff                                  	call   0x1414fc280
   14151d4fb:	8b f8                                           	mov    edi,eax
   14151d4fd:	ba 02 00 00 00                                  	mov    edx,0x2
   14151d502:	83 f8 ff                                        	cmp    eax,0xffffffff
   14151d505:	75 0a                                           	jne    0x14151d511
   14151d507:	41 84 95 14 01 00 00                            	test   BYTE PTR [r13+0x114],dl
   14151d50e:	0f 45 fa                                        	cmovne edi,edx
   14151d511:	33 db                                           	xor    ebx,ebx
   14151d513:	be 60 79 fe ff                                  	mov    esi,0xfffe7960
   14151d518:	48 8b 0d 49 5a 14 01                            	mov    rcx,QWORD PTR [rip+0x1145a49]        # 0x142662f68
   14151d51f:	45 33 db                                        	xor    r11d,r11d
   14151d522:	44 8b 35 87 5a 14 01                            	mov    r14d,DWORD PTR [rip+0x1145a87]        # 0x142662fb0
   14151d529:	45 85 f6                                        	test   r14d,r14d
   14151d52c:	0f 8e c1 01 00 00                               	jle    0x14151d6f3
   14151d532:	4d 8b d7                                        	mov    r10,r15
   14151d535:	41 b9 df 00 00 00                               	mov    r9d,0xdf
   14151d53b:	0f 1f 44 00 00                                  	nop    DWORD PTR [rax+rax*1+0x0]
   14151d540:	4c 8b 01                                        	mov    r8,QWORD PTR [rcx]
   14151d543:	83 ff 02                                        	cmp    edi,0x2
   14151d546:	74 16                                           	je     0x14151d55e
   14151d548:	8d 47 fb                                        	lea    eax,[rdi-0x5]
   14151d54b:	83 f8 01                                        	cmp    eax,0x1
   14151d54e:	76 0e                                           	jbe    0x14151d55e
   14151d550:	41 f7 40 18 00 00 01 00                         	test   DWORD PTR [r8+0x18],0x10000
   14151d558:	0f 85 55 01 00 00                               	jne    0x14151d6b3
   14151d55e:	41 8b 40 18                                     	mov    eax,DWORD PTR [r8+0x18]
   14151d562:	a8 01                                           	test   al,0x1
   14151d564:	74 0f                                           	je     0x14151d575
   14151d566:	41 8b 50 10                                     	mov    edx,DWORD PTR [r8+0x10]
   14151d56a:	c1 fa 1f                                        	sar    edx,0x1f
   14151d56d:	83 e2 f8                                        	and    edx,0xfffffff8
   14151d570:	83 c2 0c                                        	add    edx,0xc
   14151d573:	eb 21                                           	jmp    0x14151d596
   14151d575:	a8 02                                           	test   al,0x2
   14151d577:	74 07                                           	je     0x14151d580
   14151d579:	ba 03 00 00 00                                  	mov    edx,0x3
   14151d57e:	eb 16                                           	jmp    0x14151d596
   14151d580:	a8 04                                           	test   al,0x4
   14151d582:	75 12                                           	jne    0x14151d596
   14151d584:	0f ba e0 0a                                     	bt     eax,0xa
   14151d588:	72 0c                                           	jb     0x14151d596
   14151d58a:	0f ba e0 0b                                     	bt     eax,0xb
   14151d58e:	41 8b d7                                        	mov    edx,r15d
   14151d591:	0f 92 c2                                        	setb   dl
   14151d594:	ff c2                                           	inc    edx
   14151d596:	49 8b 85 d8 04 00 00                            	mov    rax,QWORD PTR [r13+0x4d8]
   14151d59d:	48 85 c0                                        	test   rax,rax
   14151d5a0:	74 12                                           	je     0x14151d5b4
   14151d5a2:	66 44 39 48 14                                  	cmp    WORD PTR [rax+0x14],r9w
   14151d5a7:	75 0b                                           	jne    0x14151d5b4
   14151d5a9:	4d 39 20                                        	cmp    QWORD PTR [r8],r12
   14151d5ac:	75 06                                           	jne    0x14151d5b4
   14151d5ae:	81 c2 a0 86 01 00                               	add    edx,0x186a0
   14151d5b4:	41 8b 40 10                                     	mov    eax,DWORD PTR [r8+0x10]
   14151d5b8:	83 f8 fd                                        	cmp    eax,0xfffffffd
   14151d5bb:	7f 08                                           	jg     0x14151d5c5
   14151d5bd:	81 ea e8 03 00 00                               	sub    edx,0x3e8
   14151d5c3:	eb 39                                           	jmp    0x14151d5fe
   14151d5c5:	83 f8 fe                                        	cmp    eax,0xfffffffe
   14151d5c8:	75 08                                           	jne    0x14151d5d2
   14151d5ca:	81 ea 20 03 00 00                               	sub    edx,0x320
   14151d5d0:	eb 2c                                           	jmp    0x14151d5fe
   14151d5d2:	83 f8 ff                                        	cmp    eax,0xffffffff
   14151d5d5:	75 08                                           	jne    0x14151d5df
   14151d5d7:	81 ea 90 01 00 00                               	sub    edx,0x190
   14151d5dd:	eb 1f                                           	jmp    0x14151d5fe
   14151d5df:	83 f8 01                                        	cmp    eax,0x1
   14151d5e2:	75 04                                           	jne    0x14151d5e8
   14151d5e4:	03 d2                                           	add    edx,edx
   14151d5e6:	eb 16                                           	jmp    0x14151d5fe
   14151d5e8:	83 f8 02                                        	cmp    eax,0x2
   14151d5eb:	75 05                                           	jne    0x14151d5f2
   14151d5ed:	8d 14 52                                        	lea    edx,[rdx+rdx*2]
   14151d5f0:	eb 0c                                           	jmp    0x14151d5fe
   14151d5f2:	83 f8 03                                        	cmp    eax,0x3
   14151d5f5:	7c 07                                           	jl     0x14151d5fe
   14151d5f7:	8d 14 95 00 00 00 00                            	lea    edx,[rdx*4+0x0]
   14151d5fe:	45 8b 48 18                                     	mov    r9d,DWORD PTR [r8+0x18]
   14151d602:	41 0f ba e1 0c                                  	bt     r9d,0xc
   14151d607:	73 05                                           	jae    0x14151d60e
   14151d609:	83 ea 09                                        	sub    edx,0x9
   14151d60c:	eb 15                                           	jmp    0x14151d623
   14151d60e:	41 0f ba e1 0d                                  	bt     r9d,0xd
   14151d613:	73 05                                           	jae    0x14151d61a
   14151d615:	83 ea 05                                        	sub    edx,0x5
   14151d618:	eb 09                                           	jmp    0x14151d623
   14151d61a:	41 0f ba e1 0e                                  	bt     r9d,0xe
   14151d61f:	73 02                                           	jae    0x14151d623
   14151d621:	ff ca                                           	dec    edx
   14151d623:	41 8b 40 14                                     	mov    eax,DWORD PTR [r8+0x14]
   14151d627:	41 0f ba e1 0f                                  	bt     r9d,0xf
   14151d62c:	44 8d 40 fe                                     	lea    r8d,[rax-0x2]
   14151d630:	44 0f 43 c0                                     	cmovae r8d,eax
   14151d634:	41 f6 c1 10                                     	test   r9b,0x10
   14151d638:	8d 42 02                                        	lea    eax,[rdx+0x2]
   14151d63b:	0f 44 c2                                        	cmove  eax,edx
   14151d63e:	41 f6 c1 08                                     	test   r9b,0x8
   14151d642:	8d 50 02                                        	lea    edx,[rax+0x2]
   14151d645:	0f 44 d0                                        	cmove  edx,eax
   14151d648:	41 83 f8 fd                                     	cmp    r8d,0xfffffffd
   14151d64c:	7f 05                                           	jg     0x14151d653
   14151d64e:	83 c2 9c                                        	add    edx,0xffffff9c
   14151d651:	eb 34                                           	jmp    0x14151d687
   14151d653:	41 83 f8 fe                                     	cmp    r8d,0xfffffffe
   14151d657:	75 05                                           	jne    0x14151d65e
   14151d659:	83 c2 ce                                        	add    edx,0xffffffce
   14151d65c:	eb 29                                           	jmp    0x14151d687
   14151d65e:	41 83 f8 ff                                     	cmp    r8d,0xffffffff
   14151d662:	75 05                                           	jne    0x14151d669
   14151d664:	83 c2 e7                                        	add    edx,0xffffffe7
   14151d667:	eb 1e                                           	jmp    0x14151d687
   14151d669:	41 83 f8 01                                     	cmp    r8d,0x1
   14151d66d:	75 04                                           	jne    0x14151d673
   14151d66f:	ff c2                                           	inc    edx
   14151d671:	eb 14                                           	jmp    0x14151d687
   14151d673:	41 83 f8 02                                     	cmp    r8d,0x2
   14151d677:	75 05                                           	jne    0x14151d67e
   14151d679:	41 03 d0                                        	add    edx,r8d
   14151d67c:	eb 09                                           	jmp    0x14151d687
   14151d67e:	41 83 f8 03                                     	cmp    r8d,0x3
   14151d682:	7c 03                                           	jl     0x14151d687
   14151d684:	83 c2 03                                        	add    edx,0x3
   14151d687:	3b d6                                           	cmp    edx,esi
   14151d689:	7e 0a                                           	jle    0x14151d695
   14151d68b:	8b f2                                           	mov    esi,edx
   14151d68d:	41 8b df                                        	mov    ebx,r15d
   14151d690:	4d 8b d7                                        	mov    r10,r15
   14151d693:	eb 0b                                           	jmp    0x14151d6a0
   14151d695:	75 16                                           	jne    0x14151d6ad
   14151d697:	49 81 fa c8 00 00 00                            	cmp    r10,0xc8
   14151d69e:	7d 0d                                           	jge    0x14151d6ad
   14151d6a0:	46 89 9c 95 f0 00 00 00                         	mov    DWORD PTR [rbp+r10*4+0xf0],r11d
   14151d6a8:	ff c3                                           	inc    ebx
   14151d6aa:	49 ff c2                                        	inc    r10
   14151d6ad:	41 b9 df 00 00 00                               	mov    r9d,0xdf
   14151d6b3:	48 83 c1 08                                     	add    rcx,0x8
   14151d6b7:	41 ff c3                                        	inc    r11d
   14151d6ba:	45 3b de                                        	cmp    r11d,r14d
   14151d6bd:	ba 02 00 00 00                                  	mov    edx,0x2
   14151d6c2:	0f 8c 78 fe ff ff                               	jl     0x14151d540
   14151d6c8:	85 db                                           	test   ebx,ebx
   14151d6ca:	7e 27                                           	jle    0x14151d6f3
   14151d6cc:	8b cb                                           	mov    ecx,ebx
   14151d6ce:	e8 8d 5e b5 fe                                  	call   0x140073560
   14151d6d3:	48 63 c8                                        	movsxd rcx,eax
   14151d6d6:	48 63 94 8d f0 00 00 00                         	movsxd rdx,DWORD PTR [rbp+rcx*4+0xf0]
   14151d6de:	48 8b 05 83 58 14 01                            	mov    rax,QWORD PTR [rip+0x1145883]        # 0x142662f68
   14151d6e5:	48 8b 0c d0                                     	mov    rcx,QWORD PTR [rax+rdx*8]
   14151d6e9:	0f bf 79 0c                                     	movsx  edi,WORD PTR [rcx+0xc]
   14151d6ed:	44 8b 79 10                                     	mov    r15d,DWORD PTR [rcx+0x10]
   14151d6f1:	eb 05                                           	jmp    0x14151d6f8
   14151d6f3:	bf ff ff ff ff                                  	mov    edi,0xffffffff
   14151d6f8:	48 8b 74 24 78                                  	mov    rsi,QWORD PTR [rsp+0x78]
   14151d6fd:	49 8b cd                                        	mov    rcx,r13
   14151d700:	80 7c 24 51 00                                  	cmp    BYTE PTR [rsp+0x51],0x0
   14151d705:	74 69                                           	je     0x14151d770
   14151d707:	e8 14 2d 14 ff                                  	call   0x140660420
   14151d70c:	48 8b d8                                        	mov    rbx,rax
   14151d70f:	c7 00 19 00 00 00                               	mov    DWORD PTR [rax],0x19
   14151d715:	49 8b d4                                        	mov    rdx,r12
   14151d718:	e8 93 3b 15 ff                                  	call   0x1406712b0
   14151d71d:	89 43 08                                        	mov    DWORD PTR [rbx+0x8],eax
   14151d720:	41 8b 4c 24 1c                                  	mov    ecx,DWORD PTR [r12+0x1c]
   14151d725:	89 4b 0c                                        	mov    DWORD PTR [rbx+0xc],ecx
   14151d728:	48 8b 4d 98                                     	mov    rcx,QWORD PTR [rbp-0x68]
   14151d72c:	8b 49 1c                                        	mov    ecx,DWORD PTR [rcx+0x1c]
   14151d72f:	89 4b 10                                        	mov    DWORD PTR [rbx+0x10],ecx
   14151d732:	c7 43 14 00 00 00 00                            	mov    DWORD PTR [rbx+0x14],0x0
   14151d739:	8b 8e 30 01 00 00                               	mov    ecx,DWORD PTR [rsi+0x130]
   14151d73f:	89 4b 18                                        	mov    DWORD PTR [rbx+0x18],ecx
   14151d742:	0f b7 8e a8 00 00 00                            	movzx  ecx,WORD PTR [rsi+0xa8]
   14151d749:	66 89 4b 1c                                     	mov    WORD PTR [rbx+0x1c],cx
   14151d74d:	0f b7 86 aa 00 00 00                            	movzx  eax,WORD PTR [rsi+0xaa]
   14151d754:	66 89 43 1e                                     	mov    WORD PTR [rbx+0x1e],ax
   14151d758:	0f b7 86 ac 00 00 00                            	movzx  eax,WORD PTR [rsi+0xac]
   14151d75f:	66 89 43 20                                     	mov    WORD PTR [rbx+0x20],ax
   14151d763:	66 89 7b 22                                     	mov    WORD PTR [rbx+0x22],di
   14151d767:	44 89 7b 24                                     	mov    DWORD PTR [rbx+0x24],r15d
   14151d76b:	e9 4a 10 00 00                                  	jmp    0x14151e7ba
   14151d770:	ba 18 00 00 00                                  	mov    edx,0x18
   14151d775:	e8 76 70 b5 fe                                  	call   0x1400747f0
   14151d77a:	84 c0                                           	test   al,al
   14151d77c:	0f 85 38 10 00 00                               	jne    0x14151e7ba
   14151d782:	49 8b cd                                        	mov    rcx,r13
   14151d785:	e8 96 2c 14 ff                                  	call   0x140660420
   14151d78a:	48 8b d8                                        	mov    rbx,rax
   14151d78d:	c7 00 18 00 00 00                               	mov    DWORD PTR [rax],0x18
   14151d793:	49 8b d4                                        	mov    rdx,r12
   14151d796:	49 8b cd                                        	mov    rcx,r13
   14151d799:	e8 52 3b 15 ff                                  	call   0x1406712f0
   14151d79e:	89 43 08                                        	mov    DWORD PTR [rbx+0x8],eax
   14151d7a1:	41 8b 4c 24 1c                                  	mov    ecx,DWORD PTR [r12+0x1c]
   14151d7a6:	89 4b 0c                                        	mov    DWORD PTR [rbx+0xc],ecx
   14151d7a9:	48 8b 4d 98                                     	mov    rcx,QWORD PTR [rbp-0x68]
   14151d7ad:	8b 49 1c                                        	mov    ecx,DWORD PTR [rcx+0x1c]
   14151d7b0:	89 4b 10                                        	mov    DWORD PTR [rbx+0x10],ecx
   14151d7b3:	c7 43 14 01 00 00 00                            	mov    DWORD PTR [rbx+0x14],0x1
   14151d7ba:	8b 8e 30 01 00 00                               	mov    ecx,DWORD PTR [rsi+0x130]
   14151d7c0:	89 4b 18                                        	mov    DWORD PTR [rbx+0x18],ecx
   14151d7c3:	0f b7 8e a8 00 00 00                            	movzx  ecx,WORD PTR [rsi+0xa8]
   14151d7ca:	66 89 4b 1c                                     	mov    WORD PTR [rbx+0x1c],cx
   14151d7ce:	0f b7 86 aa 00 00 00                            	movzx  eax,WORD PTR [rsi+0xaa]
   14151d7d5:	66 89 43 1e                                     	mov    WORD PTR [rbx+0x1e],ax
   14151d7d9:	0f b7 86 ac 00 00 00                            	movzx  eax,WORD PTR [rsi+0xac]
   14151d7e0:	66 89 43 20                                     	mov    WORD PTR [rbx+0x20],ax
   14151d7e4:	66 89 7b 22                                     	mov    WORD PTR [rbx+0x22],di
   14151d7e8:	44 89 7b 24                                     	mov    DWORD PTR [rbx+0x24],r15d
   14151d7ec:	e9 c9 0f 00 00                                  	jmp    0x14151e7ba
   14151d7f1:	84 db                                           	test   bl,bl
   14151d7f3:	74 1e                                           	je     0x14151d813
   14151d7f5:	49 8b cd                                        	mov    rcx,r13
   14151d7f8:	e8 b3 79 ec ff                                  	call   0x1413e51b0
   14151d7fd:	48 85 c0                                        	test   rax,rax
   14151d800:	74 11                                           	je     0x14151d813
   14151d802:	48 8b 10                                        	mov    rdx,QWORD PTR [rax]
   14151d805:	48 8b c8                                        	mov    rcx,rax
   14151d808:	ff 52 18                                        	call   QWORD PTR [rdx+0x18]
   14151d80b:	85 c0                                           	test   eax,eax
   14151d80d:	0f 84 a7 0f 00 00                               	je     0x14151e7ba

; chase and loss of a path to the target [0x14151dfa9, 0x14151e31d)
   14151dfa9:	40 84 ff                                        	test   dil,dil
   14151dfac:	0f 85 eb 07 00 00                               	jne    0x14151e79d
   14151dfb2:	41 f7 85 10 01 00 00 00 02 00 00                	test   DWORD PTR [r13+0x110],0x200
   14151dfbd:	0f 85 da 07 00 00                               	jne    0x14151e79d
   14151dfc3:	41 b0 01                                        	mov    r8b,0x1
   14151dfc6:	49 8b cd                                        	mov    rcx,r13
   14151dfc9:	e8 12 6d b5 fe                                  	call   0x140074ce0
   14151dfce:	84 c0                                           	test   al,al
   14151dfd0:	74 11                                           	je     0x14151dfe3
   14151dfd2:	41 81 bd 84 09 00 00 d8 0e 00 00                	cmp    DWORD PTR [r13+0x984],0xed8
   14151dfdd:	0f 8d 6b 00 00 00                               	jge    0x14151e04e
   14151dfe3:	45 33 ff                                        	xor    r15d,r15d
   14151dfe6:	41 8b cf                                        	mov    ecx,r15d
   14151dfe9:	41 0f b6 c0                                     	movzx  eax,r8b
   14151dfed:	49 39 8d 80 0d 00 00                            	cmp    QWORD PTR [r13+0xd80],rcx
   14151dff4:	0f 44 c8                                        	cmove  ecx,eax
   14151dff7:	84 c9                                           	test   cl,cl
   14151dff9:	74 56                                           	je     0x14151e051
   14151dffb:	45 84 85 dc 0b 00 00                            	test   BYTE PTR [r13+0xbdc],r8b
   14151e002:	75 4d                                           	jne    0x14151e051
   14151e004:	49 8b 8d f8 05 00 00                            	mov    rcx,QWORD PTR [r13+0x5f8]
   14151e00b:	8b 81 b4 01 00 00                               	mov    eax,DWORD PTR [rcx+0x1b4]
   14151e011:	41 89 85 e8 0d 00 00                            	mov    DWORD PTR [r13+0xde8],eax
   14151e018:	8b 81 b8 01 00 00                               	mov    eax,DWORD PTR [rcx+0x1b8]
   14151e01e:	41 89 85 ec 0d 00 00                            	mov    DWORD PTR [r13+0xdec],eax
   14151e025:	8b 81 bc 01 00 00                               	mov    eax,DWORD PTR [rcx+0x1bc]
   14151e02b:	41 89 85 f0 0d 00 00                            	mov    DWORD PTR [r13+0xdf0],eax
   14151e032:	8b 81 c0 01 00 00                               	mov    eax,DWORD PTR [rcx+0x1c0]
   14151e038:	41 89 85 f4 0d 00 00                            	mov    DWORD PTR [r13+0xdf4],eax
   14151e03f:	8b 81 c4 01 00 00                               	mov    eax,DWORD PTR [rcx+0x1c4]
   14151e045:	41 89 85 f8 0d 00 00                            	mov    DWORD PTR [r13+0xdf8],eax
   14151e04c:	eb 03                                           	jmp    0x14151e051
   14151e04e:	45 33 ff                                        	xor    r15d,r15d
   14151e051:	32 c9                                           	xor    cl,cl
   14151e053:	0f b7 5c 24 54                                  	movzx  ebx,WORD PTR [rsp+0x54]
   14151e058:	44 0f b7 74 24 5c                               	movzx  r14d,WORD PTR [rsp+0x5c]
   14151e05e:	0f b7 7c 24 58                                  	movzx  edi,WORD PTR [rsp+0x58]
   14151e063:	66 41 39 9d c0 00 00 00                         	cmp    WORD PTR [r13+0xc0],bx
   14151e06b:	75 18                                           	jne    0x14151e085
   14151e06d:	66 45 39 b5 c2 00 00 00                         	cmp    WORD PTR [r13+0xc2],r14w
   14151e075:	75 0e                                           	jne    0x14151e085
   14151e077:	66 41 39 bd c4 00 00 00                         	cmp    WORD PTR [r13+0xc4],di
   14151e07f:	0f 84 18 07 00 00                               	je     0x14151e79d
   14151e085:	49 8b 95 c8 00 00 00                            	mov    rdx,QWORD PTR [r13+0xc8]
   14151e08c:	49 8b 85 d0 00 00 00                            	mov    rax,QWORD PTR [r13+0xd0]
   14151e093:	48 2b c2                                        	sub    rax,rdx
   14151e096:	48 d1 f8                                        	sar    rax,1
   14151e099:	0f 84 b5 00 00 00                               	je     0x14151e154
   14151e09f:	44 0f b7 02                                     	movzx  r8d,WORD PTR [rdx]
   14151e0a3:	49 8b 85 e0 00 00 00                            	mov    rax,QWORD PTR [r13+0xe0]
   14151e0aa:	44 0f b7 08                                     	movzx  r9d,WORD PTR [rax]
   14151e0ae:	49 8b 85 f8 00 00 00                            	mov    rax,QWORD PTR [r13+0xf8]
   14151e0b5:	44 0f b7 10                                     	movzx  r10d,WORD PTR [rax]
   14151e0b9:	41 0f b7 85 a8 00 00 00                         	movzx  eax,WORD PTR [r13+0xa8]
   14151e0c1:	66 3b c3                                        	cmp    ax,bx
   14151e0c4:	7d 12                                           	jge    0x14151e0d8
   14151e0c6:	66 44 3b c0                                     	cmp    r8w,ax
   14151e0ca:	41 b8 01 00 00 00                               	mov    r8d,0x1
   14151e0d0:	7d 21                                           	jge    0x14151e0f3
   14151e0d2:	41 0f b6 c8                                     	movzx  ecx,r8b
   14151e0d6:	eb 1b                                           	jmp    0x14151e0f3
   14151e0d8:	7e 13                                           	jle    0x14151e0ed
   14151e0da:	0f b6 c9                                        	movzx  ecx,cl
   14151e0dd:	66 44 3b c0                                     	cmp    r8w,ax
   14151e0e1:	41 b8 01 00 00 00                               	mov    r8d,0x1
   14151e0e7:	41 0f 4f c8                                     	cmovg  ecx,r8d
   14151e0eb:	eb 06                                           	jmp    0x14151e0f3
   14151e0ed:	41 b8 01 00 00 00                               	mov    r8d,0x1
   14151e0f3:	0f b6 c1                                        	movzx  eax,cl
   14151e0f6:	41 0f b7 95 aa 00 00 00                         	movzx  edx,WORD PTR [r13+0xaa]
   14151e0fe:	66 41 3b d6                                     	cmp    dx,r14w
   14151e102:	7d 0a                                           	jge    0x14151e10e
   14151e104:	66 44 3b ca                                     	cmp    r9w,dx
   14151e108:	7d 13                                           	jge    0x14151e11d
   14151e10a:	b1 01                                           	mov    cl,0x1
   14151e10c:	eb 0f                                           	jmp    0x14151e11d
   14151e10e:	0f b6 c8                                        	movzx  ecx,al
   14151e111:	7e 0a                                           	jle    0x14151e11d
   14151e113:	8b c8                                           	mov    ecx,eax
   14151e115:	66 44 3b ca                                     	cmp    r9w,dx
   14151e119:	41 0f 4f c8                                     	cmovg  ecx,r8d
   14151e11d:	41 0f b7 85 ac 00 00 00                         	movzx  eax,WORD PTR [r13+0xac]
   14151e125:	66 3b c7                                        	cmp    ax,di
   14151e128:	7d 08                                           	jge    0x14151e132
   14151e12a:	66 44 3b d0                                     	cmp    r10w,ax
   14151e12e:	7d 0a                                           	jge    0x14151e13a
   14151e130:	eb 10                                           	jmp    0x14151e142
   14151e132:	7e 06                                           	jle    0x14151e13a
   14151e134:	66 44 3b d0                                     	cmp    r10w,ax
   14151e138:	7f 08                                           	jg     0x14151e142
   14151e13a:	84 c9                                           	test   cl,cl
   14151e13c:	0f 84 5b 06 00 00                               	je     0x14151e79d
   14151e142:	b9 03 00 00 00                                  	mov    ecx,0x3
   14151e147:	e8 14 54 b5 fe                                  	call   0x140073560
   14151e14c:	85 c0                                           	test   eax,eax
   14151e14e:	0f 84 49 06 00 00                               	je     0x14151e79d
   14151e154:	0f b7 4c 24 52                                  	movzx  ecx,WORD PTR [rsp+0x52]
   14151e159:	66 83 f9 15                                     	cmp    cx,0x15
   14151e15d:	0f 8d 3a 06 00 00                               	jge    0x14151e79d
   14151e163:	66 41 39 9d a8 00 00 00                         	cmp    WORD PTR [r13+0xa8],bx
   14151e16b:	75 47                                           	jne    0x14151e1b4
   14151e16d:	66 45 39 b5 aa 00 00 00                         	cmp    WORD PTR [r13+0xaa],r14w
   14151e175:	75 3d                                           	jne    0x14151e1b4
   14151e177:	66 41 39 bd ac 00 00 00                         	cmp    WORD PTR [r13+0xac],di
   14151e17f:	75 33                                           	jne    0x14151e1b4
   14151e181:	44 0f b6 7c 24 50                               	movzx  r15d,BYTE PTR [rsp+0x50]
   14151e187:	45 84 ff                                        	test   r15b,r15b
   14151e18a:	75 08                                           	jne    0x14151e194
   14151e18c:	49 8b cd                                        	mov    rcx,r13
   14151e18f:	e8 5c db ea ff                                  	call   0x1413cbcf0
   14151e194:	c7 44 24 20 96 00 00 00                         	mov    DWORD PTR [rsp+0x20],0x96
   14151e19c:	44 0f b7 cf                                     	movzx  r9d,di
   14151e1a0:	45 0f b7 c6                                     	movzx  r8d,r14w
   14151e1a4:	0f b7 d3                                        	movzx  edx,bx
   14151e1a7:	49 8b cd                                        	mov    rcx,r13
   14151e1aa:	e8 f1 6c b5 fe                                  	call   0x140074ea0
   14151e1af:	e9 ef 05 00 00                                  	jmp    0x14151e7a3
   14151e1b4:	49 8b 85 d8 04 00 00                            	mov    rax,QWORD PTR [r13+0x4d8]
   14151e1bb:	48 85 c0                                        	test   rax,rax
   14151e1be:	74 43                                           	je     0x14151e203
   14151e1c0:	66 83 78 14 1a                                  	cmp    WORD PTR [rax+0x14],0x1a
   14151e1c5:	75 3c                                           	jne    0x14151e203
   14151e1c7:	c6 44 24 20 00                                  	mov    BYTE PTR [rsp+0x20],0x0
   14151e1cc:	44 0f b7 cf                                     	movzx  r9d,di
   14151e1d0:	45 0f b7 c6                                     	movzx  r8d,r14w
   14151e1d4:	0f b7 d3                                        	movzx  edx,bx
   14151e1d7:	49 8b cd                                        	mov    rcx,r13
   14151e1da:	e8 31 f0 e9 ff                                  	call   0x1413bd210
   14151e1df:	84 c0                                           	test   al,al
   14151e1e1:	0f 84 ed 00 00 00                               	je     0x14151e2d4
   14151e1e7:	80 7c 24 50 00                                  	cmp    BYTE PTR [rsp+0x50],0x0
   14151e1ec:	75 08                                           	jne    0x14151e1f6
   14151e1ee:	49 8b cd                                        	mov    rcx,r13
   14151e1f1:	e8 fa da ea ff                                  	call   0x1413cbcf0
   14151e1f6:	c7 44 24 20 81 00 00 00                         	mov    DWORD PTR [rsp+0x20],0x81
   14151e1fe:	e9 b1 00 00 00                                  	jmp    0x14151e2b4
   14151e203:	45 33 c0                                        	xor    r8d,r8d
   14151e206:	66 83 f9 07                                     	cmp    cx,0x7
   14151e20a:	7f 53                                           	jg     0x14151e25f
   14151e20c:	41 bc d0 8a ff ff                               	mov    r12d,0xffff8ad0
   14151e212:	45 8b cc                                        	mov    r9d,r12d
   14151e215:	8d 14 09                                        	lea    edx,[rcx+rcx*1]
   14151e218:	66 44 89 64 24 28                               	mov    WORD PTR [rsp+0x28],r12w
   14151e21e:	66 44 89 64 24 20                               	mov    WORD PTR [rsp+0x20],r12w
   14151e224:	49 8b cd                                        	mov    rcx,r13
   14151e227:	e8 64 f4 52 ff                                  	call   0x140a4d690
   14151e22c:	44 0f b7 cf                                     	movzx  r9d,di
   14151e230:	45 0f b7 c6                                     	movzx  r8d,r14w
   14151e234:	0f b7 d3                                        	movzx  edx,bx
   14151e237:	48 8d 0d 32 57 ed 00                            	lea    rcx,[rip+0xed5732]        # 0x1423f3970
   14151e23e:	e8 ad c7 d3 fe                                  	call   0x14025a9f0
   14151e243:	3b 05 73 2b 14 01                               	cmp    eax,DWORD PTR [rip+0x1142b73]        # 0x142660dbc
   14151e249:	7d 33                                           	jge    0x14151e27e
   14151e24b:	45 8b cc                                        	mov    r9d,r12d
   14151e24e:	66 44 89 64 24 28                               	mov    WORD PTR [rsp+0x28],r12w
   14151e254:	66 44 89 64 24 20                               	mov    WORD PTR [rsp+0x20],r12w
   14151e25a:	45 33 c0                                        	xor    r8d,r8d
   14151e25d:	eb 12                                           	jmp    0x14151e271
   14151e25f:	b8 d0 8a ff ff                                  	mov    eax,0xffff8ad0
   14151e264:	44 8b c8                                        	mov    r9d,eax
   14151e267:	66 89 44 24 28                                  	mov    WORD PTR [rsp+0x28],ax
   14151e26c:	66 89 44 24 20                                  	mov    WORD PTR [rsp+0x20],ax
   14151e271:	ba 15 00 00 00                                  	mov    edx,0x15
   14151e276:	49 8b cd                                        	mov    rcx,r13
   14151e279:	e8 12 f4 52 ff                                  	call   0x140a4d690
   14151e27e:	44 0f b7 cf                                     	movzx  r9d,di
   14151e282:	45 0f b7 c6                                     	movzx  r8d,r14w
   14151e286:	0f b7 d3                                        	movzx  edx,bx
   14151e289:	48 8d 0d e0 56 ed 00                            	lea    rcx,[rip+0xed56e0]        # 0x1423f3970
   14151e290:	e8 5b c7 d3 fe                                  	call   0x14025a9f0
   14151e295:	3b 05 21 2b 14 01                               	cmp    eax,DWORD PTR [rip+0x1142b21]        # 0x142660dbc
   14151e29b:	7c 37                                           	jl     0x14151e2d4
   14151e29d:	80 7c 24 50 00                                  	cmp    BYTE PTR [rsp+0x50],0x0
   14151e2a2:	75 08                                           	jne    0x14151e2ac
   14151e2a4:	49 8b cd                                        	mov    rcx,r13
   14151e2a7:	e8 44 da ea ff                                  	call   0x1413cbcf0
   14151e2ac:	c7 44 24 20 b3 00 00 00                         	mov    DWORD PTR [rsp+0x20],0xb3
   14151e2b4:	44 0f b7 cf                                     	movzx  r9d,di
   14151e2b8:	45 0f b7 c6                                     	movzx  r8d,r14w
   14151e2bc:	0f b7 d3                                        	movzx  edx,bx
   14151e2bf:	49 8b cd                                        	mov    rcx,r13
   14151e2c2:	e8 d9 6b b5 fe                                  	call   0x140074ea0
   14151e2c7:	49 8b cd                                        	mov    rcx,r13
   14151e2ca:	e8 e1 36 eb ff                                  	call   0x1413d19b0
   14151e2cf:	e9 e6 04 00 00                                  	jmp    0x14151e7ba
   14151e2d4:	48 85 f6                                        	test   rsi,rsi
   14151e2d7:	74 0e                                           	je     0x14151e2e7
   14151e2d9:	8b 96 30 01 00 00                               	mov    edx,DWORD PTR [rsi+0x130]
   14151e2df:	49 8b cd                                        	mov    rcx,r13
   14151e2e2:	e8 79 db ea ff                                  	call   0x1413cbe60
   14151e2e7:	41 c7 85 50 03 00 00 ff ff ff ff                	mov    DWORD PTR [r13+0x350],0xffffffff
   14151e2f2:	b8 d0 8a ff ff                                  	mov    eax,0xffff8ad0
   14151e2f7:	41 c7 85 54 03 00 00 d0 8a d0 8a                	mov    DWORD PTR [r13+0x354],0x8ad08ad0
   14151e302:	66 41 89 85 58 03 00 00                         	mov    WORD PTR [r13+0x358],ax
   14151e30a:	45 89 bd 5c 03 00 00                            	mov    DWORD PTR [r13+0x35c],r15d
   14151e311:	4d 89 bd 90 04 00 00                            	mov    QWORD PTR [r13+0x490],r15
   14151e318:	e9 80 04 00 00                                  	jmp    0x14151e79d

; truncated three-dimensional Euclidean distance [0x140073810, 0x14007385e)
   140073810:	48 83 ec 28                                     	sub    rsp,0x28
   140073814:	44 0f bf c9                                     	movsx  r9d,cx
   140073818:	0f 57 c0                                        	xorps  xmm0,xmm0
   14007381b:	45 0f af c9                                     	imul   r9d,r9d
   14007381f:	41 0f bf c8                                     	movsx  ecx,r8w
   140073823:	0f af c9                                        	imul   ecx,ecx
   140073826:	0f bf c2                                        	movsx  eax,dx
   140073829:	0f af c0                                        	imul   eax,eax
   14007382c:	03 c8                                           	add    ecx,eax
   14007382e:	41 03 c9                                        	add    ecx,r9d
   140073831:	66 0f 6e c9                                     	movd   xmm1,ecx
   140073835:	0f 5b c9                                        	cvtdq2ps xmm1,xmm1
   140073838:	0f 2e c1                                        	ucomiss xmm0,xmm1
   14007383b:	77 10                                           	ja     0x14007384d
   14007383d:	0f 57 c0                                        	xorps  xmm0,xmm0
   140073840:	f3 0f 51 c1                                     	sqrtss xmm0,xmm1
   140073844:	f3 0f 2c c0                                     	cvttss2si eax,xmm0
   140073848:	48 83 c4 28                                     	add    rsp,0x28
   14007384c:	c3                                              	ret
   14007384d:	0f 28 c1                                        	movaps xmm0,xmm1
   140073850:	e8 81 10 4e 01                                  	call   0x1415548d6
   140073855:	f3 0f 2c c0                                     	cvttss2si eax,xmm0
   140073859:	48 83 c4 28                                     	add    rsp,0x28
   14007385d:	c3                                              	ret
