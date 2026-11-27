; dispatch unit actions by type [0x14151ecb6, 0x14151ecec)
   14151ecb6:	bb d0 07 00 00                                  	mov    ebx,0x7d0
   14151ecbb:	4c 8d 05 3e 13 ae fe                            	lea    r8,[rip+0xfffffffffeae133e]        # 0x140000000
   14151ecc2:	49 8b 86 d0 07 00 00                            	mov    rax,QWORD PTR [r14+0x7d0]
   14151ecc9:	4c 8b 2c d0                                     	mov    r13,QWORD PTR [rax+rdx*8]
   14151eccd:	4c 89 6c 24 68                                  	mov    QWORD PTR [rsp+0x68],r13
   14151ecd2:	49 63 45 00                                     	movsxd rax,DWORD PTR [r13+0x0]
   14151ecd6:	83 f8 1b                                        	cmp    eax,0x1b
   14151ecd9:	0f 87 bc 48 00 00                               	ja     0x14152359b
   14151ecdf:	41 8b 8c 80 64 36 52 01                         	mov    ecx,DWORD PTR [r8+rax*4+0x1523664]
   14151ece7:	49 03 c8                                        	add    rcx,r8
   14151ecea:	ff e1                                           	jmp    rcx

; shared countdown for post-shot recovery [0x14151f324, 0x14151f33c)
   14151f324:	41 ff 4d 08                                     	dec    DWORD PTR [r13+0x8]
   14151f328:	41 83 7d 08 00                                  	cmp    DWORD PTR [r13+0x8],0x0
   14151f32d:	0f 8f 68 42 00 00                               	jg     0x14152359b
   14151f333:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   14151f337:	e9 5f 42 00 00                                  	jmp    0x14152359b

; load, convert to shooting, re-resolve items and target, call projectile creation [0x141522662, 0x1415233ef)
   141522662:	41 ff 4d 08                                     	dec    DWORD PTR [r13+0x8]
   141522666:	41 83 7d 08 00                                  	cmp    DWORD PTR [r13+0x8],0x0
   14152266b:	0f 8f 2a 0f 00 00                               	jg     0x14152359b
   141522671:	45 8b 4d 0c                                     	mov    r9d,DWORD PTR [r13+0xc]
   141522675:	48 8b 0d 5c 52 ee 00                            	mov    rcx,QWORD PTR [rip+0xee525c]        # 0x1424078d8
   14152267c:	4c 8b 1d 4d 52 ee 00                            	mov    r11,QWORD PTR [rip+0xee524d]        # 0x1424078d0
   141522683:	49 2b cb                                        	sub    rcx,r11
   141522686:	48 c1 f9 03                                     	sar    rcx,0x3
   14152268a:	85 c9                                           	test   ecx,ecx
   14152268c:	0f 84 89 cc ff ff                               	je     0x14151f31b
   141522692:	41 83 f9 ff                                     	cmp    r9d,0xffffffff
   141522696:	0f 84 7f cc ff ff                               	je     0x14151f31b
   14152269c:	83 e9 01                                        	sub    ecx,0x1
   14152269f:	41 8b d7                                        	mov    edx,r15d
   1415226a2:	78 39                                           	js     0x1415226dd
   1415226a4:	0f 1f 40 00                                     	nop    DWORD PTR [rax+0x0]
   1415226a8:	0f 1f 84 00 00 00 00 00                         	nop    DWORD PTR [rax+rax*1+0x0]
   1415226b0:	44 8b d1                                        	mov    r10d,ecx
   1415226b3:	03 ca                                           	add    ecx,edx
   1415226b5:	d1 f9                                           	sar    ecx,1
   1415226b7:	48 63 c1                                        	movsxd rax,ecx
   1415226ba:	4d 8b 3c c3                                     	mov    r15,QWORD PTR [r11+rax*8]
   1415226be:	45 8b 47 1c                                     	mov    r8d,DWORD PTR [r15+0x1c]
   1415226c2:	45 3b c1                                        	cmp    r8d,r9d
   1415226c5:	74 16                                           	je     0x1415226dd
   1415226c7:	8d 41 01                                        	lea    eax,[rcx+0x1]
   1415226ca:	0f 4e d0                                        	cmovle edx,eax
   1415226cd:	ff c9                                           	dec    ecx
   1415226cf:	45 3b c1                                        	cmp    r8d,r9d
   1415226d2:	41 0f 4e ca                                     	cmovle ecx,r10d
   1415226d6:	3b d1                                           	cmp    edx,ecx
   1415226d8:	7e d6                                           	jle    0x1415226b0
   1415226da:	45 33 ff                                        	xor    r15d,r15d
   1415226dd:	4d 85 ff                                        	test   r15,r15
   1415226e0:	0f 84 30 cc ff ff                               	je     0x14151f316
   1415226e6:	49 8b 07                                        	mov    rax,QWORD PTR [r15]
   1415226e9:	49 8b cf                                        	mov    rcx,r15
   1415226ec:	ff 10                                           	call   QWORD PTR [rax]
   1415226ee:	66 83 f8 18                                     	cmp    ax,0x18
   1415226f2:	0f 85 cb cc ff ff                               	jne    0x14151f3c3
   1415226f8:	49 8b 86 08 04 00 00                            	mov    rax,QWORD PTR [r14+0x408]
   1415226ff:	49 8b 8e 10 04 00 00                            	mov    rcx,QWORD PTR [r14+0x410]
   141522706:	48 3b c1                                        	cmp    rax,rcx
   141522709:	74 24                                           	je     0x14152272f
   14152270b:	0f 1f 44 00 00                                  	nop    DWORD PTR [rax+rax*1+0x0]
   141522710:	48 8b 10                                        	mov    rdx,QWORD PTR [rax]
   141522713:	4c 39 3a                                        	cmp    QWORD PTR [rdx],r15
   141522716:	75 07                                           	jne    0x14152271f
   141522718:	66 83 7a 08 01                                  	cmp    WORD PTR [rdx+0x8],0x1
   14152271d:	74 0b                                           	je     0x14152272a
   14152271f:	48 83 c0 08                                     	add    rax,0x8
   141522723:	48 3b c1                                        	cmp    rax,rcx
   141522726:	75 e8                                           	jne    0x141522710
   141522728:	eb 05                                           	jmp    0x14152272f
   14152272a:	44 0f b7 62 0a                                  	movzx  r12d,WORD PTR [rdx+0xa]
   14152272f:	49 8b 8f e8 00 00 00                            	mov    rcx,QWORD PTR [r15+0xe8]
   141522736:	8b 91 cc 01 00 00                               	mov    edx,DWORD PTR [rcx+0x1cc]
   14152273c:	85 d2                                           	test   edx,edx
   14152273e:	74 73                                           	je     0x1415227b3
   141522740:	83 fa 01                                        	cmp    edx,0x1
   141522743:	0f 85 ac 00 00 00                               	jne    0x1415227f5
   141522749:	41 f6 47 10 40                                  	test   BYTE PTR [r15+0x10],0x40
   14152274e:	0f 84 a1 00 00 00                               	je     0x1415227f5
   141522754:	49 8b 47 40                                     	mov    rax,QWORD PTR [r15+0x40]
   141522758:	49 2b 47 38                                     	sub    rax,QWORD PTR [r15+0x38]
   14152275c:	48 c1 f8 03                                     	sar    rax,0x3
   141522760:	2b c2                                           	sub    eax,edx
   141522762:	0f 88 8d 00 00 00                               	js     0x1415227f5
   141522768:	48 63 f8                                        	movsxd rdi,eax
   14152276b:	0f 1f 44 00 00                                  	nop    DWORD PTR [rax+rax*1+0x0]
   141522770:	49 8b 47 38                                     	mov    rax,QWORD PTR [r15+0x38]
   141522774:	48 8b 0c f8                                     	mov    rcx,QWORD PTR [rax+rdi*8]
   141522778:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   14152277b:	ff 50 10                                        	call   QWORD PTR [rax+0x10]
   14152277e:	83 f8 0a                                        	cmp    eax,0xa
   141522781:	75 28                                           	jne    0x1415227ab
   141522783:	49 8b 47 38                                     	mov    rax,QWORD PTR [r15+0x38]
   141522787:	48 8b 0c f8                                     	mov    rcx,QWORD PTR [rax+rdi*8]
   14152278b:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   14152278e:	ff 50 18                                        	call   QWORD PTR [rax+0x18]
   141522791:	48 8b d8                                        	mov    rbx,rax
   141522794:	48 85 c0                                        	test   rax,rax
   141522797:	74 12                                           	je     0x1415227ab
   141522799:	48 8b 00                                        	mov    rax,QWORD PTR [rax]
   14152279c:	48 8b cb                                        	mov    rcx,rbx
   14152279f:	ff 10                                           	call   QWORD PTR [rax]
   1415227a1:	66 83 f8 27                                     	cmp    ax,0x27
   1415227a5:	0f 84 9c 00 00 00                               	je     0x141522847
   1415227ab:	48 83 ef 01                                     	sub    rdi,0x1
   1415227af:	79 bf                                           	jns    0x141522770
   1415227b1:	eb 42                                           	jmp    0x1415227f5
   1415227b3:	49 8b 9e 08 04 00 00                            	mov    rbx,QWORD PTR [r14+0x408]
   1415227ba:	49 8b be 10 04 00 00                            	mov    rdi,QWORD PTR [r14+0x410]
   1415227c1:	48 3b df                                        	cmp    rbx,rdi
   1415227c4:	74 2f                                           	je     0x1415227f5
   1415227c6:	48 8b 33                                        	mov    rsi,QWORD PTR [rbx]
   1415227c9:	66 83 7e 08 0b                                  	cmp    WORD PTR [rsi+0x8],0xb
   1415227ce:	75 17                                           	jne    0x1415227e7
   1415227d0:	41 8b 47 1c                                     	mov    eax,DWORD PTR [r15+0x1c]
   1415227d4:	39 46 10                                        	cmp    DWORD PTR [rsi+0x10],eax
   1415227d7:	75 0e                                           	jne    0x1415227e7
   1415227d9:	48 8b 0e                                        	mov    rcx,QWORD PTR [rsi]
   1415227dc:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   1415227df:	ff 10                                           	call   QWORD PTR [rax]
   1415227e1:	66 83 f8 27                                     	cmp    ax,0x27
   1415227e5:	74 53                                           	je     0x14152283a
   1415227e7:	48 83 c3 08                                     	add    rbx,0x8
   1415227eb:	48 3b df                                        	cmp    rbx,rdi
   1415227ee:	75 d6                                           	jne    0x1415227c6
   1415227f0:	be 06 00 00 00                                  	mov    esi,0x6
   1415227f5:	bf ff ff ff ff                                  	mov    edi,0xffffffff
   1415227fa:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   141522801:	83 b8 cc 01 00 00 00                            	cmp    DWORD PTR [rax+0x1cc],0x0
   141522808:	0f 85 aa 03 00 00                               	jne    0x141522bb8
   14152280e:	45 0f b7 cc                                     	movzx  r9d,r12w
   141522812:	45 33 c0                                        	xor    r8d,r8d
   141522815:	b2 01                                           	mov    dl,0x1
   141522817:	49 8b ce                                        	mov    rcx,r14
   14152281a:	e8 d1 ca e7 ff                                  	call   0x14139f2f0
   14152281f:	0f bf f8                                        	movsx  edi,ax
   141522822:	83 ff ff                                        	cmp    edi,0xffffffff
   141522825:	0f 85 8d 03 00 00                               	jne    0x141522bb8
   14152282b:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522831:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141522835:	e9 57 0d 00 00                                  	jmp    0x141523591
   14152283a:	48 8b 1e                                        	mov    rbx,QWORD PTR [rsi]
   14152283d:	be 06 00 00 00                                  	mov    esi,0x6
   141522842:	48 85 db                                        	test   rbx,rbx
   141522845:	74 ae                                           	je     0x1415227f5
   141522847:	41 8b 7d 14                                     	mov    edi,DWORD PTR [r13+0x14]
   14152284b:	40 f6 c7 01                                     	test   dil,0x1
   14152284f:	0f 84 07 02 00 00                               	je     0x141522a5c
   141522855:	45 8b 65 18                                     	mov    r12d,DWORD PTR [r13+0x18]
   141522859:	45 0f b7 6d 1c                                  	movzx  r13d,WORD PTR [r13+0x1c]
   14152285e:	48 8b 4c 24 68                                  	mov    rcx,QWORD PTR [rsp+0x68]
   141522863:	0f b7 41 1e                                     	movzx  eax,WORD PTR [rcx+0x1e]
   141522867:	66 89 44 24 58                                  	mov    WORD PTR [rsp+0x58],ax
   14152286c:	0f b7 41 20                                     	movzx  eax,WORD PTR [rcx+0x20]
   141522870:	66 89 44 24 60                                  	mov    WORD PTR [rsp+0x60],ax
   141522875:	0f b7 71 22                                     	movzx  esi,WORD PTR [rcx+0x22]
   141522879:	8b 41 24                                        	mov    eax,DWORD PTR [rcx+0x24]
   14152287c:	89 45 e8                                        	mov    DWORD PTR [rbp-0x18],eax
   14152287f:	83 e7 02                                        	and    edi,0x2
   141522882:	c7 01 19 00 00 00                               	mov    DWORD PTR [rcx],0x19
   141522888:	49 8b 07                                        	mov    rax,QWORD PTR [r15]
   14152288b:	49 8b cf                                        	mov    rcx,r15
   14152288e:	ff 10                                           	call   QWORD PTR [rax]
   141522890:	66 83 f8 18                                     	cmp    ax,0x18
   141522894:	74 04                                           	je     0x14152289a
   141522896:	33 c0                                           	xor    eax,eax
   141522898:	eb 0d                                           	jmp    0x1415228a7
   14152289a:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   1415228a1:	8b 80 dc 01 00 00                               	mov    eax,DWORD PTR [rax+0x1dc]
   1415228a7:	48 8b 4c 24 68                                  	mov    rcx,QWORD PTR [rsp+0x68]
   1415228ac:	89 41 08                                        	mov    DWORD PTR [rcx+0x8],eax
   1415228af:	66 83 fe ff                                     	cmp    si,0xffff
   1415228b3:	74 06                                           	je     0x1415228bb
   1415228b5:	83 c0 0a                                        	add    eax,0xa
   1415228b8:	89 41 08                                        	mov    DWORD PTR [rcx+0x8],eax
   1415228bb:	41 8b 47 1c                                     	mov    eax,DWORD PTR [r15+0x1c]
   1415228bf:	89 41 0c                                        	mov    DWORD PTR [rcx+0xc],eax
   1415228c2:	8b 43 1c                                        	mov    eax,DWORD PTR [rbx+0x1c]
   1415228c5:	89 41 10                                        	mov    DWORD PTR [rcx+0x10],eax
   1415228c8:	c7 41 14 00 00 00 00                            	mov    DWORD PTR [rcx+0x14],0x0
   1415228cf:	85 ff                                           	test   edi,edi
   1415228d1:	74 07                                           	je     0x1415228da
   1415228d3:	c7 41 14 01 00 00 00                            	mov    DWORD PTR [rcx+0x14],0x1
   1415228da:	44 89 61 18                                     	mov    DWORD PTR [rcx+0x18],r12d
   1415228de:	66 44 89 69 1c                                  	mov    WORD PTR [rcx+0x1c],r13w
   1415228e3:	0f b7 44 24 58                                  	movzx  eax,WORD PTR [rsp+0x58]
   1415228e8:	66 89 41 1e                                     	mov    WORD PTR [rcx+0x1e],ax
   1415228ec:	0f b7 44 24 60                                  	movzx  eax,WORD PTR [rsp+0x60]
   1415228f1:	66 89 41 20                                     	mov    WORD PTR [rcx+0x20],ax
   1415228f5:	66 89 71 22                                     	mov    WORD PTR [rcx+0x22],si
   1415228f9:	8b 45 e8                                        	mov    eax,DWORD PTR [rbp-0x18]
   1415228fc:	89 41 24                                        	mov    DWORD PTR [rcx+0x24],eax
   1415228ff:	83 3d 32 b9 39 00 01                            	cmp    DWORD PTR [rip+0x39b932],0x1        # 0x1418be238
   141522906:	0f 85 7a 0c 00 00                               	jne    0x141523586
   14152290c:	4c 3b 35 7d 4c ee 00                            	cmp    r14,QWORD PTR [rip+0xee4c7d]        # 0x142407590
   141522913:	0f 85 6d 0c 00 00                               	jne    0x141523586
   141522919:	f6 05 a8 0b e9 00 08                            	test   BYTE PTR [rip+0xe90ba8],0x8        # 0x1423b34c8
   141522920:	0f 84 60 0c 00 00                               	je     0x141523586
   141522926:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   14152292d:	e8 8e e3 b4 fe                                  	call   0x140070cc0
   141522932:	90                                              	nop
   141522933:	48 8d 8d 00 04 00 00                            	lea    rcx,[rbp+0x400]
   14152293a:	e8 81 e3 b4 fe                                  	call   0x140070cc0
   14152293f:	90                                              	nop
   141522940:	41 b9 01 00 00 00                               	mov    r9d,0x1
   141522946:	45 33 c0                                        	xor    r8d,r8d
   141522949:	48 8d 95 40 03 00 00                            	lea    rdx,[rbp+0x340]
   141522950:	49 8b cf                                        	mov    rcx,r15
   141522953:	e8 e8 a7 75 ff                                  	call   0x140c7d140
   141522958:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   14152295f:	e8 cc 41 02 ff                                  	call   0x140546b30
   141522964:	48 8d 15 65 77 28 00                            	lea    rdx,[rip+0x287765]        # 0x1417aa0d0
   14152296b:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   141522972:	e8 19 e2 b4 fe                                  	call   0x140070b90
   141522977:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   14152297e:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   141522985:	83 b8 cc 01 00 00 00                            	cmp    DWORD PTR [rax+0x1cc],0x0
   14152298c:	48 8d 15 31 77 28 00                            	lea    rdx,[rip+0x287731]        # 0x1417aa0c4
   141522993:	74 07                                           	je     0x14152299c
   141522995:	48 8d 15 bc 11 1d 00                            	lea    rdx,[rip+0x1d11bc]        # 0x1416f3b58
   14152299c:	e8 ef e1 b4 fe                                  	call   0x140070b90
   1415229a1:	48 8d 15 a0 6e 0e 00                            	lea    rdx,[rip+0xe6ea0]        # 0x141609848
   1415229a8:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   1415229af:	e8 dc e1 b4 fe                                  	call   0x140070b90
   1415229b4:	45 33 c9                                        	xor    r9d,r9d
   1415229b7:	45 33 c0                                        	xor    r8d,r8d
   1415229ba:	48 8d 95 00 04 00 00                            	lea    rdx,[rbp+0x400]
   1415229c1:	48 8b cb                                        	mov    rcx,rbx
   1415229c4:	e8 77 a7 75 ff                                  	call   0x140c7d140
   1415229c9:	48 8d 95 00 04 00 00                            	lea    rdx,[rbp+0x400]
   1415229d0:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   1415229d7:	e8 64 89 b9 fe                                  	call   0x1400bb340
   1415229dc:	48 8d 15 c5 76 28 00                            	lea    rdx,[rip+0x2876c5]        # 0x1417aa0a8
   1415229e3:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   1415229ea:	e8 a1 e1 b4 fe                                  	call   0x140070b90
   1415229ef:	48 8d 8d f0 01 00 00                            	lea    rcx,[rbp+0x1f0]
   1415229f6:	e8 15 c8 b5 fe                                  	call   0x14007f210
   1415229fb:	c7 85 f0 01 00 00 ea 00 06 00                   	mov    DWORD PTR [rbp+0x1f0],0x600ea
   141522a05:	be 06 00 00 00                                  	mov    esi,0x6
   141522a0a:	c6 85 f4 01 00 00 01                            	mov    BYTE PTR [rbp+0x1f4],0x1
   141522a11:	b8 64 00 00 00                                  	mov    eax,0x64
   141522a16:	66 89 85 0c 02 00 00                            	mov    WORD PTR [rbp+0x20c],ax
   141522a1d:	4c 8d 85 f0 01 00 00                            	lea    r8,[rbp+0x1f0]
   141522a24:	48 8d 95 40 03 00 00                            	lea    rdx,[rbp+0x340]
   141522a2b:	48 8d 0d 9e 32 fe 00                            	lea    rcx,[rip+0xfe329e]        # 0x142505cd0
   141522a32:	e8 19 28 bc fe                                  	call   0x1400e5250
   141522a37:	90                                              	nop
   141522a38:	48 8d 8d 00 04 00 00                            	lea    rcx,[rbp+0x400]
   141522a3f:	e8 3c e4 b4 fe                                  	call   0x140070e80
   141522a44:	90                                              	nop
   141522a45:	48 8d 8d 40 03 00 00                            	lea    rcx,[rbp+0x340]
   141522a4c:	e8 2f e4 b4 fe                                  	call   0x140070e80
   141522a51:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522a57:	e9 35 0b 00 00                                  	jmp    0x141523591
   141522a5c:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522a62:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141522a66:	83 3d cb b7 39 00 01                            	cmp    DWORD PTR [rip+0x39b7cb],0x1        # 0x1418be238
   141522a6d:	0f 85 1e 0b 00 00                               	jne    0x141523591
   141522a73:	4c 3b 35 16 4b ee 00                            	cmp    r14,QWORD PTR [rip+0xee4b16]        # 0x142407590
   141522a7a:	0f 85 11 0b 00 00                               	jne    0x141523591
   141522a80:	f6 05 41 0a e9 00 08                            	test   BYTE PTR [rip+0xe90a41],0x8        # 0x1423b34c8
   141522a87:	0f 84 04 0b 00 00                               	je     0x141523591
   141522a8d:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522a94:	e8 27 e2 b4 fe                                  	call   0x140070cc0
   141522a99:	90                                              	nop
   141522a9a:	48 8d 8d 20 04 00 00                            	lea    rcx,[rbp+0x420]
   141522aa1:	e8 1a e2 b4 fe                                  	call   0x140070cc0
   141522aa6:	90                                              	nop
   141522aa7:	41 b9 01 00 00 00                               	mov    r9d,0x1
   141522aad:	45 33 c0                                        	xor    r8d,r8d
   141522ab0:	48 8d 95 60 03 00 00                            	lea    rdx,[rbp+0x360]
   141522ab7:	49 8b cf                                        	mov    rcx,r15
   141522aba:	e8 81 a6 75 ff                                  	call   0x140c7d140
   141522abf:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522ac6:	e8 65 40 02 ff                                  	call   0x140546b30
   141522acb:	48 8d 15 fe 75 28 00                            	lea    rdx,[rip+0x2875fe]        # 0x1417aa0d0
   141522ad2:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522ad9:	e8 b2 e0 b4 fe                                  	call   0x140070b90
   141522ade:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   141522ae5:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522aec:	83 b8 cc 01 00 00 00                            	cmp    DWORD PTR [rax+0x1cc],0x0
   141522af3:	48 8d 15 ca 75 28 00                            	lea    rdx,[rip+0x2875ca]        # 0x1417aa0c4
   141522afa:	74 07                                           	je     0x141522b03
   141522afc:	48 8d 15 55 10 1d 00                            	lea    rdx,[rip+0x1d1055]        # 0x1416f3b58
   141522b03:	e8 88 e0 b4 fe                                  	call   0x140070b90
   141522b08:	48 8d 15 39 6d 0e 00                            	lea    rdx,[rip+0xe6d39]        # 0x141609848
   141522b0f:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522b16:	e8 75 e0 b4 fe                                  	call   0x140070b90
   141522b1b:	48 8d 95 20 04 00 00                            	lea    rdx,[rbp+0x420]
   141522b22:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522b29:	e8 12 88 b9 fe                                  	call   0x1400bb340
   141522b2e:	45 33 c9                                        	xor    r9d,r9d
   141522b31:	45 33 c0                                        	xor    r8d,r8d
   141522b34:	48 8d 95 20 04 00 00                            	lea    rdx,[rbp+0x420]
   141522b3b:	48 8b cb                                        	mov    rcx,rbx
   141522b3e:	e8 fd a5 75 ff                                  	call   0x140c7d140
   141522b43:	48 8d 15 fa 0c 0e 00                            	lea    rdx,[rip+0xe0cfa]        # 0x141603844
   141522b4a:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522b51:	e8 3a e0 b4 fe                                  	call   0x140070b90
   141522b56:	48 8d 8d 50 01 00 00                            	lea    rcx,[rbp+0x150]
   141522b5d:	e8 ae c6 b5 fe                                  	call   0x14007f210
   141522b62:	c7 85 50 01 00 00 ea 00 06 00                   	mov    DWORD PTR [rbp+0x150],0x600ea
   141522b6c:	c6 85 54 01 00 00 01                            	mov    BYTE PTR [rbp+0x154],0x1
   141522b73:	b8 64 00 00 00                                  	mov    eax,0x64
   141522b78:	66 89 85 6c 01 00 00                            	mov    WORD PTR [rbp+0x16c],ax
   141522b7f:	4c 8d 85 50 01 00 00                            	lea    r8,[rbp+0x150]
   141522b86:	48 8d 95 60 03 00 00                            	lea    rdx,[rbp+0x360]
   141522b8d:	48 8d 0d 3c 31 fe 00                            	lea    rcx,[rip+0xfe313c]        # 0x142505cd0
   141522b94:	e8 b7 26 bc fe                                  	call   0x1400e5250
   141522b99:	90                                              	nop
   141522b9a:	48 8d 8d 20 04 00 00                            	lea    rcx,[rbp+0x420]
   141522ba1:	e8 da e2 b4 fe                                  	call   0x140070e80
   141522ba6:	90                                              	nop
   141522ba7:	48 8d 8d 60 03 00 00                            	lea    rcx,[rbp+0x360]
   141522bae:	e8 cd e2 b4 fe                                  	call   0x140070e80
   141522bb3:	e9 d9 09 00 00                                  	jmp    0x141523591
   141522bb8:	45 8b 4d 10                                     	mov    r9d,DWORD PTR [r13+0x10]
   141522bbc:	48 8b 0d 15 4d ee 00                            	mov    rcx,QWORD PTR [rip+0xee4d15]        # 0x1424078d8
   141522bc3:	4c 8b 1d 06 4d ee 00                            	mov    r11,QWORD PTR [rip+0xee4d06]        # 0x1424078d0
   141522bca:	49 2b cb                                        	sub    rcx,r11
   141522bcd:	48 c1 f9 03                                     	sar    rcx,0x3
   141522bd1:	85 c9                                           	test   ecx,ecx
   141522bd3:	0f 84 52 fc ff ff                               	je     0x14152282b
   141522bd9:	41 83 f9 ff                                     	cmp    r9d,0xffffffff
   141522bdd:	0f 84 48 fc ff ff                               	je     0x14152282b
   141522be3:	33 d2                                           	xor    edx,edx
   141522be5:	83 e9 01                                        	sub    ecx,0x1
   141522be8:	78 30                                           	js     0x141522c1a
   141522bea:	66 0f 1f 44 00 00                               	nop    WORD PTR [rax+rax*1+0x0]
   141522bf0:	44 8b d1                                        	mov    r10d,ecx
   141522bf3:	03 ca                                           	add    ecx,edx
   141522bf5:	d1 f9                                           	sar    ecx,1
   141522bf7:	48 63 c1                                        	movsxd rax,ecx
   141522bfa:	49 8b 1c c3                                     	mov    rbx,QWORD PTR [r11+rax*8]
   141522bfe:	44 8b 43 1c                                     	mov    r8d,DWORD PTR [rbx+0x1c]
   141522c02:	45 3b c1                                        	cmp    r8d,r9d
   141522c05:	74 15                                           	je     0x141522c1c
   141522c07:	8d 41 01                                        	lea    eax,[rcx+0x1]
   141522c0a:	0f 4e d0                                        	cmovle edx,eax
   141522c0d:	ff c9                                           	dec    ecx
   141522c0f:	45 3b c1                                        	cmp    r8d,r9d
   141522c12:	41 0f 4e ca                                     	cmovle ecx,r10d
   141522c16:	3b d1                                           	cmp    edx,ecx
   141522c18:	7e d6                                           	jle    0x141522bf0
   141522c1a:	33 db                                           	xor    ebx,ebx
   141522c1c:	48 85 db                                        	test   rbx,rbx
   141522c1f:	0f 84 06 fc ff ff                               	je     0x14152282b
   141522c25:	48 8b 03                                        	mov    rax,QWORD PTR [rbx]
   141522c28:	48 8b cb                                        	mov    rcx,rbx
   141522c2b:	ff 10                                           	call   QWORD PTR [rax]
   141522c2d:	66 83 f8 27                                     	cmp    ax,0x27
   141522c31:	74 0f                                           	je     0x141522c42
   141522c33:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522c39:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141522c3d:	e9 4f 09 00 00                                  	jmp    0x141523591
   141522c42:	49 8b 97 e8 00 00 00                            	mov    rdx,QWORD PTR [r15+0xe8]
   141522c49:	48 81 c2 d8 00 00 00                            	add    rdx,0xd8
   141522c50:	48 8b 8b e8 00 00 00                            	mov    rcx,QWORD PTR [rbx+0xe8]
   141522c57:	48 81 c1 c8 00 00 00                            	add    rcx,0xc8
   141522c5e:	48 8b 42 10                                     	mov    rax,QWORD PTR [rdx+0x10]
   141522c62:	48 83 7a 18 0f                                  	cmp    QWORD PTR [rdx+0x18],0xf
   141522c67:	76 03                                           	jbe    0x141522c6c
   141522c69:	48 8b 12                                        	mov    rdx,QWORD PTR [rdx]
   141522c6c:	4c 8b 41 10                                     	mov    r8,QWORD PTR [rcx+0x10]
   141522c70:	48 83 79 18 0f                                  	cmp    QWORD PTR [rcx+0x18],0xf
   141522c75:	76 03                                           	jbe    0x141522c7a
   141522c77:	48 8b 09                                        	mov    rcx,QWORD PTR [rcx]
   141522c7a:	4c 3b c0                                        	cmp    r8,rax
   141522c7d:	0f 85 a8 fb ff ff                               	jne    0x14152282b
   141522c83:	e8 dc 1b 03 00                                  	call   0x141554864
   141522c88:	85 c0                                           	test   eax,eax
   141522c8a:	0f 85 9b fb ff ff                               	jne    0x14152282b
   141522c90:	45 33 c0                                        	xor    r8d,r8d
   141522c93:	48 8b d3                                        	mov    rdx,rbx
   141522c96:	49 8b ce                                        	mov    rcx,r14
   141522c99:	e8 32 58 e3 ff                                  	call   0x1413584d0
   141522c9e:	84 c0                                           	test   al,al
   141522ca0:	75 0f                                           	jne    0x141522cb1
   141522ca2:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522ca8:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141522cac:	e9 e0 08 00 00                                  	jmp    0x141523591
   141522cb1:	48 8b cb                                        	mov    rcx,rbx
   141522cb4:	83 bb 80 00 00 00 01                            	cmp    DWORD PTR [rbx+0x80],0x1
   141522cbb:	75 09                                           	jne    0x141522cc6
   141522cbd:	b2 02                                           	mov    dl,0x2
   141522cbf:	e8 1c 85 75 ff                                  	call   0x140c7b1e0
   141522cc4:	eb 26                                           	jmp    0x141522cec
   141522cc6:	48 8b 03                                        	mov    rax,QWORD PTR [rbx]
   141522cc9:	45 33 c0                                        	xor    r8d,r8d
   141522ccc:	ba 01 00 00 00                                  	mov    edx,0x1
   141522cd1:	ff 90 88 03 00 00                               	call   QWORD PTR [rax+0x388]
   141522cd7:	48 8b d8                                        	mov    rbx,rax
   141522cda:	48 8b 08                                        	mov    rcx,QWORD PTR [rax]
   141522cdd:	4c 8b 81 28 03 00 00                            	mov    r8,QWORD PTR [rcx+0x328]
   141522ce4:	b2 01                                           	mov    dl,0x1
   141522ce6:	48 8b c8                                        	mov    rcx,rax
   141522ce9:	41 ff d0                                        	call   r8
   141522cec:	49 8b 97 e8 00 00 00                            	mov    rdx,QWORD PTR [r15+0xe8]
   141522cf3:	8b 82 cc 01 00 00                               	mov    eax,DWORD PTR [rdx+0x1cc]
   141522cf9:	85 c0                                           	test   eax,eax
   141522cfb:	0f 84 7b 02 00 00                               	je     0x141522f7c
   141522d01:	83 f8 01                                        	cmp    eax,0x1
   141522d04:	75 0b                                           	jne    0x141522d11
   141522d06:	49 8b d7                                        	mov    rdx,r15
   141522d09:	48 8b cb                                        	mov    rcx,rbx
   141522d0c:	e8 bf d3 77 ff                                  	call   0x140ca00d0
   141522d11:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522d17:	41 8b 7d 14                                     	mov    edi,DWORD PTR [r13+0x14]
   141522d1b:	40 f6 c7 01                                     	test   dil,0x1
   141522d1f:	0f 84 90 02 00 00                               	je     0x141522fb5
   141522d25:	45 8b 65 18                                     	mov    r12d,DWORD PTR [r13+0x18]
   141522d29:	45 0f b7 6d 1c                                  	movzx  r13d,WORD PTR [r13+0x1c]
   141522d2e:	48 8b 4c 24 68                                  	mov    rcx,QWORD PTR [rsp+0x68]
   141522d33:	0f b7 41 1e                                     	movzx  eax,WORD PTR [rcx+0x1e]
   141522d37:	66 89 44 24 60                                  	mov    WORD PTR [rsp+0x60],ax
   141522d3c:	0f b7 41 20                                     	movzx  eax,WORD PTR [rcx+0x20]
   141522d40:	66 89 44 24 58                                  	mov    WORD PTR [rsp+0x58],ax
   141522d45:	0f b7 71 22                                     	movzx  esi,WORD PTR [rcx+0x22]
   141522d49:	8b 41 24                                        	mov    eax,DWORD PTR [rcx+0x24]
   141522d4c:	89 45 e8                                        	mov    DWORD PTR [rbp-0x18],eax
   141522d4f:	83 e7 02                                        	and    edi,0x2
   141522d52:	c7 01 19 00 00 00                               	mov    DWORD PTR [rcx],0x19
   141522d58:	49 8b d7                                        	mov    rdx,r15
   141522d5b:	e8 50 e5 14 ff                                  	call   0x1406712b0
   141522d60:	48 8b 4c 24 68                                  	mov    rcx,QWORD PTR [rsp+0x68]
   141522d65:	89 41 08                                        	mov    DWORD PTR [rcx+0x8],eax
   141522d68:	66 83 fe ff                                     	cmp    si,0xffff
   141522d6c:	74 06                                           	je     0x141522d74
   141522d6e:	83 c0 0a                                        	add    eax,0xa
   141522d71:	89 41 08                                        	mov    DWORD PTR [rcx+0x8],eax
   141522d74:	41 8b 47 1c                                     	mov    eax,DWORD PTR [r15+0x1c]
   141522d78:	89 41 0c                                        	mov    DWORD PTR [rcx+0xc],eax
   141522d7b:	8b 43 1c                                        	mov    eax,DWORD PTR [rbx+0x1c]
   141522d7e:	89 41 10                                        	mov    DWORD PTR [rcx+0x10],eax
   141522d81:	c7 41 14 00 00 00 00                            	mov    DWORD PTR [rcx+0x14],0x0
   141522d88:	85 ff                                           	test   edi,edi
   141522d8a:	74 07                                           	je     0x141522d93
   141522d8c:	c7 41 14 01 00 00 00                            	mov    DWORD PTR [rcx+0x14],0x1
   141522d93:	44 89 61 18                                     	mov    DWORD PTR [rcx+0x18],r12d
   141522d97:	66 44 89 69 1c                                  	mov    WORD PTR [rcx+0x1c],r13w
   141522d9c:	0f b7 44 24 60                                  	movzx  eax,WORD PTR [rsp+0x60]
   141522da1:	66 89 41 1e                                     	mov    WORD PTR [rcx+0x1e],ax
   141522da5:	0f b7 44 24 58                                  	movzx  eax,WORD PTR [rsp+0x58]
   141522daa:	66 89 41 20                                     	mov    WORD PTR [rcx+0x20],ax
   141522dae:	66 89 71 22                                     	mov    WORD PTR [rcx+0x22],si
   141522db2:	8b 45 e8                                        	mov    eax,DWORD PTR [rbp-0x18]
   141522db5:	89 41 24                                        	mov    DWORD PTR [rcx+0x24],eax
   141522db8:	83 3d 79 b4 39 00 01                            	cmp    DWORD PTR [rip+0x39b479],0x1        # 0x1418be238
   141522dbf:	0f 85 c1 07 00 00                               	jne    0x141523586
   141522dc5:	4c 3b 35 c4 47 ee 00                            	cmp    r14,QWORD PTR [rip+0xee47c4]        # 0x142407590
   141522dcc:	0f 85 b4 07 00 00                               	jne    0x141523586
   141522dd2:	ba ea 00 00 00                                  	mov    edx,0xea
   141522dd7:	48 8d 0d 42 03 e9 00                            	lea    rcx,[rip+0xe90342]        # 0x1423b3120
   141522dde:	e8 7d c6 b5 fe                                  	call   0x14007f460
   141522de3:	84 c0                                           	test   al,al
   141522de5:	0f 84 9b 07 00 00                               	je     0x141523586
   141522deb:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522df2:	e8 c9 de b4 fe                                  	call   0x140070cc0
   141522df7:	90                                              	nop
   141522df8:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   141522dff:	e8 bc de b4 fe                                  	call   0x140070cc0
   141522e04:	90                                              	nop
   141522e05:	48 8d 15 8c 72 28 00                            	lea    rdx,[rip+0x28728c]        # 0x1417aa098
   141522e0c:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522e13:	e8 98 dd b4 fe                                  	call   0x140070bb0
   141522e18:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   141522e1f:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522e26:	83 b8 cc 01 00 00 00                            	cmp    DWORD PTR [rax+0x1cc],0x0
   141522e2d:	48 8d 15 44 5e 1b 00                            	lea    rdx,[rip+0x1b5e44]        # 0x1416d8c78
   141522e34:	74 07                                           	je     0x141522e3d
   141522e36:	48 8d 15 1b 5e 1b 00                            	lea    rdx,[rip+0x1b5e1b]        # 0x1416d8c58
   141522e3d:	e8 4e dd b4 fe                                  	call   0x140070b90
   141522e42:	48 8d 15 a7 0b 0e 00                            	lea    rdx,[rip+0xe0ba7]        # 0x1416039f0
   141522e49:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522e50:	e8 3b dd b4 fe                                  	call   0x140070b90
   141522e55:	41 b9 01 00 00 00                               	mov    r9d,0x1
   141522e5b:	45 33 c0                                        	xor    r8d,r8d
   141522e5e:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141522e65:	48 8b cb                                        	mov    rcx,rbx
   141522e68:	e8 d3 a2 75 ff                                  	call   0x140c7d140
   141522e6d:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141522e74:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522e7b:	e8 c0 84 b9 fe                                  	call   0x1400bb340
   141522e80:	48 8d 15 69 0b 0e 00                            	lea    rdx,[rip+0xe0b69]        # 0x1416039f0
   141522e87:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522e8e:	e8 fd dc b4 fe                                  	call   0x140070b90
   141522e93:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   141522e9a:	e8 61 9d bd fe                                  	call   0x1400fcc00
   141522e9f:	49 8b 8f e8 00 00 00                            	mov    rcx,QWORD PTR [r15+0xe8]
   141522ea6:	83 b9 cc 01 00 00 00                            	cmp    DWORD PTR [rcx+0x1cc],0x0
   141522ead:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522eb4:	48 8d 15 3d b0 13 00                            	lea    rdx,[rip+0x13b03d]        # 0x14165def8
   141522ebb:	74 07                                           	je     0x141522ec4
   141522ebd:	48 8d 15 9c 5d 1b 00                            	lea    rdx,[rip+0x1b5d9c]        # 0x1416d8c60
   141522ec4:	e8 c7 dc b4 fe                                  	call   0x140070b90
   141522ec9:	48 8d 15 20 0b 0e 00                            	lea    rdx,[rip+0xe0b20]        # 0x1416039f0
   141522ed0:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522ed7:	e8 b4 dc b4 fe                                  	call   0x140070b90
   141522edc:	41 b9 01 00 00 00                               	mov    r9d,0x1
   141522ee2:	45 33 c0                                        	xor    r8d,r8d
   141522ee5:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141522eec:	49 8b cf                                        	mov    rcx,r15
   141522eef:	e8 4c a2 75 ff                                  	call   0x140c7d140
   141522ef4:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141522efb:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522f02:	e8 39 84 b9 fe                                  	call   0x1400bb340
   141522f07:	48 8d 15 2a 72 28 00                            	lea    rdx,[rip+0x28722a]        # 0x1417aa138
   141522f0e:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522f15:	e8 76 dc b4 fe                                  	call   0x140070b90
   141522f1a:	48 8d 4c 24 70                                  	lea    rcx,[rsp+0x70]
   141522f1f:	e8 ec c2 b5 fe                                  	call   0x14007f210
   141522f24:	c7 44 24 70 ea 00 06 00                         	mov    DWORD PTR [rsp+0x70],0x600ea
   141522f2c:	be 06 00 00 00                                  	mov    esi,0x6
   141522f31:	c6 44 24 74 01                                  	mov    BYTE PTR [rsp+0x74],0x1
   141522f36:	b8 64 00 00 00                                  	mov    eax,0x64
   141522f3b:	66 89 45 8c                                     	mov    WORD PTR [rbp-0x74],ax
   141522f3f:	4c 8d 44 24 70                                  	lea    r8,[rsp+0x70]
   141522f44:	48 8d 95 40 02 00 00                            	lea    rdx,[rbp+0x240]
   141522f4b:	48 8d 0d 7e 2d fe 00                            	lea    rcx,[rip+0xfe2d7e]        # 0x142505cd0
   141522f52:	e8 f9 22 bc fe                                  	call   0x1400e5250
   141522f57:	90                                              	nop
   141522f58:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   141522f5f:	e8 1c df b4 fe                                  	call   0x140070e80
   141522f64:	90                                              	nop
   141522f65:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522f6c:	e8 0f df b4 fe                                  	call   0x140070e80
   141522f71:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522f77:	e9 15 06 00 00                                  	jmp    0x141523591
   141522f7c:	c6 44 24 28 01                                  	mov    BYTE PTR [rsp+0x28],0x1
   141522f81:	41 bc ff ff ff ff                               	mov    r12d,0xffffffff
   141522f87:	44 89 64 24 20                                  	mov    DWORD PTR [rsp+0x20],r12d
   141522f8c:	44 8b cf                                        	mov    r9d,edi
   141522f8f:	41 b8 0b 00 00 00                               	mov    r8d,0xb
   141522f95:	48 8b d3                                        	mov    rdx,rbx
   141522f98:	49 8b ce                                        	mov    rcx,r14
   141522f9b:	e8 20 e3 e1 ff                                  	call   0x1413412c0
   141522fa0:	48 85 c0                                        	test   rax,rax
   141522fa3:	0f 84 6e fd ff ff                               	je     0x141522d17
   141522fa9:	41 8b 4f 1c                                     	mov    ecx,DWORD PTR [r15+0x1c]
   141522fad:	89 48 10                                        	mov    DWORD PTR [rax+0x10],ecx
   141522fb0:	e9 62 fd ff ff                                  	jmp    0x141522d17
   141522fb5:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141522fb9:	83 3d 78 b2 39 00 01                            	cmp    DWORD PTR [rip+0x39b278],0x1        # 0x1418be238
   141522fc0:	0f 85 cb 05 00 00                               	jne    0x141523591
   141522fc6:	4c 3b 35 c3 45 ee 00                            	cmp    r14,QWORD PTR [rip+0xee45c3]        # 0x142407590
   141522fcd:	0f 85 be 05 00 00                               	jne    0x141523591
   141522fd3:	ba ea 00 00 00                                  	mov    edx,0xea
   141522fd8:	48 8d 0d 41 01 e9 00                            	lea    rcx,[rip+0xe90141]        # 0x1423b3120
   141522fdf:	e8 7c c4 b5 fe                                  	call   0x14007f460
   141522fe4:	84 c0                                           	test   al,al
   141522fe6:	0f 84 a5 05 00 00                               	je     0x141523591
   141522fec:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141522ff3:	e8 c8 dc b4 fe                                  	call   0x140070cc0
   141522ff8:	90                                              	nop
   141522ff9:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   141523000:	e8 bb dc b4 fe                                  	call   0x140070cc0
   141523005:	90                                              	nop
   141523006:	48 8d 15 8b 70 28 00                            	lea    rdx,[rip+0x28708b]        # 0x1417aa098
   14152300d:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523014:	e8 97 db b4 fe                                  	call   0x140070bb0
   141523019:	49 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [r15+0xe8]
   141523020:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523027:	83 b8 cc 01 00 00 00                            	cmp    DWORD PTR [rax+0x1cc],0x0
   14152302e:	48 8d 15 43 5c 1b 00                            	lea    rdx,[rip+0x1b5c43]        # 0x1416d8c78
   141523035:	74 07                                           	je     0x14152303e
   141523037:	48 8d 15 1a 5c 1b 00                            	lea    rdx,[rip+0x1b5c1a]        # 0x1416d8c58
   14152303e:	e8 4d db b4 fe                                  	call   0x140070b90
   141523043:	48 8d 15 a6 09 0e 00                            	lea    rdx,[rip+0xe09a6]        # 0x1416039f0
   14152304a:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523051:	e8 3a db b4 fe                                  	call   0x140070b90
   141523056:	41 b9 01 00 00 00                               	mov    r9d,0x1
   14152305c:	45 33 c0                                        	xor    r8d,r8d
   14152305f:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141523066:	48 8b cb                                        	mov    rcx,rbx
   141523069:	e8 d2 a0 75 ff                                  	call   0x140c7d140
   14152306e:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   141523075:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   14152307c:	e8 bf 82 b9 fe                                  	call   0x1400bb340
   141523081:	48 8d 15 68 09 0e 00                            	lea    rdx,[rip+0xe0968]        # 0x1416039f0
   141523088:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   14152308f:	e8 fc da b4 fe                                  	call   0x140070b90
   141523094:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   14152309b:	e8 60 9b bd fe                                  	call   0x1400fcc00
   1415230a0:	49 8b 8f e8 00 00 00                            	mov    rcx,QWORD PTR [r15+0xe8]
   1415230a7:	83 b9 cc 01 00 00 00                            	cmp    DWORD PTR [rcx+0x1cc],0x0
   1415230ae:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   1415230b5:	48 8d 15 3c ae 13 00                            	lea    rdx,[rip+0x13ae3c]        # 0x14165def8
   1415230bc:	74 07                                           	je     0x1415230c5
   1415230be:	48 8d 15 9b 5b 1b 00                            	lea    rdx,[rip+0x1b5b9b]        # 0x1416d8c60
   1415230c5:	e8 c6 da b4 fe                                  	call   0x140070b90
   1415230ca:	48 8d 15 1f 09 0e 00                            	lea    rdx,[rip+0xe091f]        # 0x1416039f0
   1415230d1:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   1415230d8:	e8 b3 da b4 fe                                  	call   0x140070b90
   1415230dd:	41 b9 01 00 00 00                               	mov    r9d,0x1
   1415230e3:	45 33 c0                                        	xor    r8d,r8d
   1415230e6:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   1415230ed:	49 8b cf                                        	mov    rcx,r15
   1415230f0:	e8 4b a0 75 ff                                  	call   0x140c7d140
   1415230f5:	48 8d 95 60 02 00 00                            	lea    rdx,[rbp+0x260]
   1415230fc:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523103:	e8 38 82 b9 fe                                  	call   0x1400bb340
   141523108:	48 8d 15 35 07 0e 00                            	lea    rdx,[rip+0xe0735]        # 0x141603844
   14152310f:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523116:	e8 75 da b4 fe                                  	call   0x140070b90
   14152311b:	48 8d 4c 24 70                                  	lea    rcx,[rsp+0x70]
   141523120:	e8 eb c0 b5 fe                                  	call   0x14007f210
   141523125:	c7 44 24 70 ea 00 06 00                         	mov    DWORD PTR [rsp+0x70],0x600ea
   14152312d:	c6 44 24 74 01                                  	mov    BYTE PTR [rsp+0x74],0x1
   141523132:	b8 64 00 00 00                                  	mov    eax,0x64
   141523137:	66 89 45 8c                                     	mov    WORD PTR [rbp-0x74],ax
   14152313b:	4c 8d 44 24 70                                  	lea    r8,[rsp+0x70]
   141523140:	48 8d 95 40 02 00 00                            	lea    rdx,[rbp+0x240]
   141523147:	48 8d 0d 82 2b fe 00                            	lea    rcx,[rip+0xfe2b82]        # 0x142505cd0
   14152314e:	e8 fd 20 bc fe                                  	call   0x1400e5250
   141523153:	90                                              	nop
   141523154:	48 8d 8d 60 02 00 00                            	lea    rcx,[rbp+0x260]
   14152315b:	e8 20 dd b4 fe                                  	call   0x140070e80
   141523160:	90                                              	nop
   141523161:	48 8d 8d 40 02 00 00                            	lea    rcx,[rbp+0x240]
   141523168:	e8 13 dd b4 fe                                  	call   0x140070e80
   14152316d:	e9 1f 04 00 00                                  	jmp    0x141523591
   141523172:	41 ff 4d 08                                     	dec    DWORD PTR [r13+0x8]
   141523176:	41 83 7d 08 00                                  	cmp    DWORD PTR [r13+0x8],0x0
   14152317b:	0f 8f 1a 04 00 00                               	jg     0x14152359b
   141523181:	45 8b 4d 0c                                     	mov    r9d,DWORD PTR [r13+0xc]
   141523185:	48 8b 0d 4c 47 ee 00                            	mov    rcx,QWORD PTR [rip+0xee474c]        # 0x1424078d8
   14152318c:	4c 8b 1d 3d 47 ee 00                            	mov    r11,QWORD PTR [rip+0xee473d]        # 0x1424078d0
   141523193:	49 2b cb                                        	sub    rcx,r11
   141523196:	48 c1 f9 03                                     	sar    rcx,0x3
   14152319a:	85 c9                                           	test   ecx,ecx
   14152319c:	0f 84 79 c1 ff ff                               	je     0x14151f31b
   1415231a2:	41 83 f9 ff                                     	cmp    r9d,0xffffffff
   1415231a6:	0f 84 6f c1 ff ff                               	je     0x14151f31b
   1415231ac:	83 e9 01                                        	sub    ecx,0x1
   1415231af:	41 8b d7                                        	mov    edx,r15d
   1415231b2:	78 39                                           	js     0x1415231ed
   1415231b4:	0f 1f 40 00                                     	nop    DWORD PTR [rax+0x0]
   1415231b8:	0f 1f 84 00 00 00 00 00                         	nop    DWORD PTR [rax+rax*1+0x0]
   1415231c0:	44 8b d1                                        	mov    r10d,ecx
   1415231c3:	03 ca                                           	add    ecx,edx
   1415231c5:	d1 f9                                           	sar    ecx,1
   1415231c7:	48 63 c1                                        	movsxd rax,ecx
   1415231ca:	4d 8b 3c c3                                     	mov    r15,QWORD PTR [r11+rax*8]
   1415231ce:	45 8b 47 1c                                     	mov    r8d,DWORD PTR [r15+0x1c]
   1415231d2:	45 3b c1                                        	cmp    r8d,r9d
   1415231d5:	74 16                                           	je     0x1415231ed
   1415231d7:	8d 41 01                                        	lea    eax,[rcx+0x1]
   1415231da:	0f 4e d0                                        	cmovle edx,eax
   1415231dd:	ff c9                                           	dec    ecx
   1415231df:	45 3b c1                                        	cmp    r8d,r9d
   1415231e2:	41 0f 4e ca                                     	cmovle ecx,r10d
   1415231e6:	3b d1                                           	cmp    edx,ecx
   1415231e8:	7e d6                                           	jle    0x1415231c0
   1415231ea:	45 33 ff                                        	xor    r15d,r15d
   1415231ed:	4d 85 ff                                        	test   r15,r15
   1415231f0:	0f 84 20 c1 ff ff                               	je     0x14151f316
   1415231f6:	49 8b 07                                        	mov    rax,QWORD PTR [r15]
   1415231f9:	49 8b cf                                        	mov    rcx,r15
   1415231fc:	ff 10                                           	call   QWORD PTR [rax]
   1415231fe:	66 83 f8 18                                     	cmp    ax,0x18
   141523202:	0f 85 bb c1 ff ff                               	jne    0x14151f3c3
   141523208:	49 8b 8f e8 00 00 00                            	mov    rcx,QWORD PTR [r15+0xe8]
   14152320f:	8b 91 cc 01 00 00                               	mov    edx,DWORD PTR [rcx+0x1cc]
   141523215:	85 d2                                           	test   edx,edx
   141523217:	0f 84 7e 00 00 00                               	je     0x14152329b
   14152321d:	83 fa 01                                        	cmp    edx,0x1
   141523220:	0f 85 c9 c2 ff ff                               	jne    0x14151f4ef
   141523226:	41 f6 47 10 40                                  	test   BYTE PTR [r15+0x10],0x40
   14152322b:	0f 84 be c2 ff ff                               	je     0x14151f4ef
   141523231:	49 8b 47 40                                     	mov    rax,QWORD PTR [r15+0x40]
   141523235:	49 2b 47 38                                     	sub    rax,QWORD PTR [r15+0x38]
   141523239:	48 c1 f8 03                                     	sar    rax,0x3
   14152323d:	2b c2                                           	sub    eax,edx
   14152323f:	0f 88 aa c2 ff ff                               	js     0x14151f4ef
   141523245:	48 63 f8                                        	movsxd rdi,eax
   141523248:	0f 1f 84 00 00 00 00 00                         	nop    DWORD PTR [rax+rax*1+0x0]
   141523250:	49 8b 47 38                                     	mov    rax,QWORD PTR [r15+0x38]
   141523254:	48 8b 0c f8                                     	mov    rcx,QWORD PTR [rax+rdi*8]
   141523258:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   14152325b:	ff 50 10                                        	call   QWORD PTR [rax+0x10]
   14152325e:	83 f8 0a                                        	cmp    eax,0xa
   141523261:	75 24                                           	jne    0x141523287
   141523263:	49 8b 47 38                                     	mov    rax,QWORD PTR [r15+0x38]
   141523267:	48 8b 0c f8                                     	mov    rcx,QWORD PTR [rax+rdi*8]
   14152326b:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   14152326e:	ff 50 18                                        	call   QWORD PTR [rax+0x18]
   141523271:	48 8b d8                                        	mov    rbx,rax
   141523274:	48 85 c0                                        	test   rax,rax
   141523277:	74 0e                                           	je     0x141523287
   141523279:	48 8b 00                                        	mov    rax,QWORD PTR [rax]
   14152327c:	48 8b cb                                        	mov    rcx,rbx
   14152327f:	ff 10                                           	call   QWORD PTR [rax]
   141523281:	66 83 f8 27                                     	cmp    ax,0x27
   141523285:	74 74                                           	je     0x1415232fb
   141523287:	48 83 ef 01                                     	sub    rdi,0x1
   14152328b:	79 c3                                           	jns    0x141523250
   14152328d:	bf d0 8a ff ff                                  	mov    edi,0xffff8ad0
   141523292:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   141523296:	e9 fb 02 00 00                                  	jmp    0x141523596
   14152329b:	49 8b 9e 08 04 00 00                            	mov    rbx,QWORD PTR [r14+0x408]
   1415232a2:	49 8b be 10 04 00 00                            	mov    rdi,QWORD PTR [r14+0x410]
   1415232a9:	48 3b df                                        	cmp    rbx,rdi
   1415232ac:	0f 84 38 c2 ff ff                               	je     0x14151f4ea
   1415232b2:	48 8b 33                                        	mov    rsi,QWORD PTR [rbx]
   1415232b5:	66 83 7e 08 0b                                  	cmp    WORD PTR [rsi+0x8],0xb
   1415232ba:	75 17                                           	jne    0x1415232d3
   1415232bc:	41 8b 47 1c                                     	mov    eax,DWORD PTR [r15+0x1c]
   1415232c0:	39 46 10                                        	cmp    DWORD PTR [rsi+0x10],eax
   1415232c3:	75 0e                                           	jne    0x1415232d3
   1415232c5:	48 8b 0e                                        	mov    rcx,QWORD PTR [rsi]
   1415232c8:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   1415232cb:	ff 10                                           	call   QWORD PTR [rax]
   1415232cd:	66 83 f8 27                                     	cmp    ax,0x27
   1415232d1:	74 1c                                           	je     0x1415232ef
   1415232d3:	48 83 c3 08                                     	add    rbx,0x8
   1415232d7:	48 3b df                                        	cmp    rbx,rdi
   1415232da:	75 d6                                           	jne    0x1415232b2
   1415232dc:	be 06 00 00 00                                  	mov    esi,0x6
   1415232e1:	bf d0 8a ff ff                                  	mov    edi,0xffff8ad0
   1415232e6:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   1415232ea:	e9 a7 02 00 00                                  	jmp    0x141523596
   1415232ef:	48 8b 1e                                        	mov    rbx,QWORD PTR [rsi]
   1415232f2:	48 85 db                                        	test   rbx,rbx
   1415232f5:	0f 84 ea c1 ff ff                               	je     0x14151f4e5
   1415232fb:	45 8b 4d 18                                     	mov    r9d,DWORD PTR [r13+0x18]
   1415232ff:	48 8b 0d 32 42 ee 00                            	mov    rcx,QWORD PTR [rip+0xee4232]        # 0x142407538
   141523306:	4c 8b 1d 23 42 ee 00                            	mov    r11,QWORD PTR [rip+0xee4223]        # 0x142407530
   14152330d:	49 2b cb                                        	sub    rcx,r11
   141523310:	48 c1 f9 03                                     	sar    rcx,0x3
   141523314:	85 c9                                           	test   ecx,ecx
   141523316:	74 45                                           	je     0x14152335d
   141523318:	41 83 f9 ff                                     	cmp    r9d,0xffffffff
   14152331c:	74 3f                                           	je     0x14152335d
   14152331e:	33 d2                                           	xor    edx,edx
   141523320:	83 e9 01                                        	sub    ecx,0x1
   141523323:	78 38                                           	js     0x14152335d
   141523325:	66 66 66 0f 1f 84 00 00 00 00 00                	data16 data16 nop WORD PTR [rax+rax*1+0x0]
   141523330:	44 8b d1                                        	mov    r10d,ecx
   141523333:	03 ca                                           	add    ecx,edx
   141523335:	d1 f9                                           	sar    ecx,1
   141523337:	48 63 c1                                        	movsxd rax,ecx
   14152333a:	49 8b 3c c3                                     	mov    rdi,QWORD PTR [r11+rax*8]
   14152333e:	44 8b 87 30 01 00 00                            	mov    r8d,DWORD PTR [rdi+0x130]
   141523345:	45 3b c1                                        	cmp    r8d,r9d
   141523348:	74 15                                           	je     0x14152335f
   14152334a:	8d 41 01                                        	lea    eax,[rcx+0x1]
   14152334d:	0f 4e d0                                        	cmovle edx,eax
   141523350:	ff c9                                           	dec    ecx
   141523352:	45 3b c1                                        	cmp    r8d,r9d
   141523355:	41 0f 4e ca                                     	cmovle ecx,r10d
   141523359:	3b d1                                           	cmp    edx,ecx
   14152335b:	7e d3                                           	jle    0x141523330
   14152335d:	33 ff                                           	xor    edi,edi
   14152335f:	41 f7 86 10 01 00 00 00 00 04 00                	test   DWORD PTR [r14+0x110],0x40000
   14152336a:	74 0a                                           	je     0x141523376
   14152336c:	b2 01                                           	mov    dl,0x1
   14152336e:	49 8b ce                                        	mov    rcx,r14
   141523371:	e8 4a 7b e5 ff                                  	call   0x14137aec0
   141523376:	40 32 f6                                        	xor    sil,sil
   141523379:	41 f6 45 14 01                                  	test   BYTE PTR [r13+0x14],0x1
   14152337e:	74 0b                                           	je     0x14152338b
   141523380:	40 b6 01                                        	mov    sil,0x1
   141523383:	41 83 8e 14 01 00 00 02                         	or     DWORD PTR [r14+0x114],0x2
   14152338b:	41 0f bf 4d 20                                  	movsx  ecx,WORD PTR [r13+0x20]
   141523390:	45 0f bf 55 1e                                  	movsx  r10d,WORD PTR [r13+0x1e]
   141523395:	45 0f bf 5d 1c                                  	movsx  r11d,WORD PTR [r13+0x1c]
   14152339a:	41 8b 45 24                                     	mov    eax,DWORD PTR [r13+0x24]
   14152339e:	89 44 24 40                                     	mov    DWORD PTR [rsp+0x40],eax
   1415233a2:	41 0f b7 45 22                                  	movzx  eax,WORD PTR [r13+0x22]
   1415233a7:	66 89 44 24 38                                  	mov    WORD PTR [rsp+0x38],ax
   1415233ac:	89 4c 24 30                                     	mov    DWORD PTR [rsp+0x30],ecx
   1415233b0:	44 89 54 24 28                                  	mov    DWORD PTR [rsp+0x28],r10d
   1415233b5:	44 89 5c 24 20                                  	mov    DWORD PTR [rsp+0x20],r11d
   1415233ba:	4c 8b cf                                        	mov    r9,rdi
   1415233bd:	4c 8b c3                                        	mov    r8,rbx
   1415233c0:	49 8b d7                                        	mov    rdx,r15
   1415233c3:	49 8b ce                                        	mov    rcx,r14
   1415233c6:	e8 a5 45 e5 ff                                  	call   0x141377970
   1415233cb:	bf d0 8a ff ff                                  	mov    edi,0xffff8ad0
   1415233d0:	40 84 f6                                        	test   sil,sil
   1415233d3:	be 06 00 00 00                                  	mov    esi,0x6
   1415233d8:	0f 84 11 c1 ff ff                               	je     0x14151f4ef
   1415233de:	41 83 a6 14 01 00 00 fd                         	and    DWORD PTR [r14+0x114],0xfffffffd
   1415233e6:	45 89 65 00                                     	mov    DWORD PTR [r13+0x0],r12d
   1415233ea:	e9 a7 01 00 00                                  	jmp    0x141523596
