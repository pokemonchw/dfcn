; wrestle opponents, conflict participants, candidate scores and selected target [0x1414ffcd7, 0x1415005d4)
   1414ffcd7:	80 7d 98 00                                     	cmp    BYTE PTR [rbp-0x68],0x0
   1414ffcdb:	0f 84 a8 08 00 00                               	je     0x141500589
   1414ffce1:	89 55 98                                        	mov    DWORD PTR [rbp-0x68],edx
   1414ffce4:	0f 57 c0                                        	xorps  xmm0,xmm0
   1414ffce7:	f3 0f 7f 85 80 00 00 00                         	movdqu XMMWORD PTR [rbp+0x80],xmm0
   1414ffcef:	4c 89 a5 90 00 00 00                            	mov    QWORD PTR [rbp+0x90],r12
   1414ffcf6:	48 8b 9e 18 0b 00 00                            	mov    rbx,QWORD PTR [rsi+0xb18]
   1414ffcfd:	48 8b be 20 0b 00 00                            	mov    rdi,QWORD PTR [rsi+0xb20]
   1414ffd04:	48 3b df                                        	cmp    rbx,rdi
   1414ffd07:	0f 83 8b 00 00 00                               	jae    0x1414ffd98
   1414ffd0d:	48 8b 03                                        	mov    rax,QWORD PTR [rbx]
   1414ffd10:	44 8b 08                                        	mov    r9d,DWORD PTR [rax]
   1414ffd13:	48 8b 05 1e 78 f0 00                            	mov    rax,QWORD PTR [rip+0xf0781e]        # 0x142407538
   1414ffd1a:	48 2b 05 0f 78 f0 00                            	sub    rax,QWORD PTR [rip+0xf0780f]        # 0x142407530
   1414ffd21:	48 c1 f8 03                                     	sar    rax,0x3
   1414ffd25:	85 c0                                           	test   eax,eax
   1414ffd27:	74 66                                           	je     0x1414ffd8f
   1414ffd29:	41 83 f9 ff                                     	cmp    r9d,0xffffffff
   1414ffd2d:	74 60                                           	je     0x1414ffd8f
   1414ffd2f:	83 e8 01                                        	sub    eax,0x1
   1414ffd32:	41 8b d4                                        	mov    edx,r12d
   1414ffd35:	78 3d                                           	js     0x1414ffd74
   1414ffd37:	66 0f 1f 84 00 00 00 00 00                      	nop    WORD PTR [rax+rax*1+0x0]
   1414ffd40:	44 8b d8                                        	mov    r11d,eax
   1414ffd43:	44 8d 04 02                                     	lea    r8d,[rdx+rax*1]
   1414ffd47:	41 d1 f8                                        	sar    r8d,1
   1414ffd4a:	49 63 c8                                        	movsxd rcx,r8d
   1414ffd4d:	48 8b 05 dc 77 f0 00                            	mov    rax,QWORD PTR [rip+0xf077dc]        # 0x142407530
   1414ffd54:	4c 8b 14 c8                                     	mov    r10,QWORD PTR [rax+rcx*8]
   1414ffd58:	45 39 8a 30 01 00 00                            	cmp    DWORD PTR [r10+0x130],r9d
   1414ffd5f:	74 16                                           	je     0x1414ffd77
   1414ffd61:	41 8d 40 01                                     	lea    eax,[r8+0x1]
   1414ffd65:	0f 4e d0                                        	cmovle edx,eax
   1414ffd68:	41 8d 40 ff                                     	lea    eax,[r8-0x1]
   1414ffd6c:	41 0f 4e c3                                     	cmovle eax,r11d
   1414ffd70:	3b d0                                           	cmp    edx,eax
   1414ffd72:	7e cc                                           	jle    0x1414ffd40
   1414ffd74:	4d 8b d4                                        	mov    r10,r12
   1414ffd77:	4d 85 d2                                        	test   r10,r10
   1414ffd7a:	74 13                                           	je     0x1414ffd8f
   1414ffd7c:	48 8d 95 80 00 00 00                            	lea    rdx,[rbp+0x80]
   1414ffd83:	41 8b 8a 30 01 00 00                            	mov    ecx,DWORD PTR [r10+0x130]
   1414ffd8a:	e8 11 b7 bb fe                                  	call   0x1400bb4a0
   1414ffd8f:	48 83 c3 10                                     	add    rbx,0x10
   1414ffd93:	e9 6c ff ff ff                                  	jmp    0x1414ffd04
   1414ffd98:	48 8b 8e 00 03 00 00                            	mov    rcx,QWORD PTR [rsi+0x300]
   1414ffd9f:	48 8b 86 08 03 00 00                            	mov    rax,QWORD PTR [rsi+0x308]
   1414ffda6:	48 89 45 c0                                     	mov    QWORD PTR [rbp-0x40],rax
   1414ffdaa:	4c 8b 35 ef 5e 00 01                            	mov    r14,QWORD PTR [rip+0x1005eef]        # 0x142505ca0
   1414ffdb1:	48 89 4d c8                                     	mov    QWORD PTR [rbp-0x38],rcx
   1414ffdb5:	48 3b c8                                        	cmp    rcx,rax
   1414ffdb8:	0f 83 b8 07 00 00                               	jae    0x141500576
   1414ffdbe:	8b 19                                           	mov    ebx,DWORD PTR [rcx]
   1414ffdc0:	48 8b 15 e1 5e 00 01                            	mov    rdx,QWORD PTR [rip+0x1005ee1]        # 0x142505ca8
   1414ffdc7:	49 2b d6                                        	sub    rdx,r14
   1414ffdca:	48 c1 fa 03                                     	sar    rdx,0x3
   1414ffdce:	48 85 d2                                        	test   rdx,rdx
   1414ffdd1:	0f 84 96 07 00 00                               	je     0x14150056d
   1414ffdd7:	83 fb ff                                        	cmp    ebx,0xffffffff
   1414ffdda:	0f 84 8d 07 00 00                               	je     0x14150056d
   1414ffde0:	33 ff                                           	xor    edi,edi
   1414ffde2:	44 8b cf                                        	mov    r9d,edi
   1414ffde5:	83 ea 01                                        	sub    edx,0x1
   1414ffde8:	78 35                                           	js     0x1414ffe1f
   1414ffdea:	66 0f 1f 44 00 00                               	nop    WORD PTR [rax+rax*1+0x0]
   1414ffdf0:	8b fa                                           	mov    edi,edx
   1414ffdf2:	45 8d 04 11                                     	lea    r8d,[r9+rdx*1]
   1414ffdf6:	41 d1 f8                                        	sar    r8d,1
   1414ffdf9:	49 63 d0                                        	movsxd rdx,r8d
   1414ffdfc:	4d 8b 1c d6                                     	mov    r11,QWORD PTR [r14+rdx*8]
   1414ffe00:	41 39 1b                                        	cmp    DWORD PTR [r11],ebx
   1414ffe03:	0f 84 8e 01 00 00                               	je     0x1414fff97
   1414ffe09:	41 8d 50 01                                     	lea    edx,[r8+0x1]
   1414ffe0d:	44 0f 4e ca                                     	cmovle r9d,edx
   1414ffe11:	41 8d 50 ff                                     	lea    edx,[r8-0x1]
   1414ffe15:	0f 4e d7                                        	cmovle edx,edi
   1414ffe18:	44 3b ca                                        	cmp    r9d,edx
   1414ffe1b:	7e d3                                           	jle    0x1414ffdf0
   1414ffe1d:	33 ff                                           	xor    edi,edi
   1414ffe1f:	4c 8b df                                        	mov    r11,rdi
   1414ffe22:	4d 85 db                                        	test   r11,r11
   1414ffe25:	0f 84 42 07 00 00                               	je     0x14150056d
   1414ffe2b:	66 41 83 7b 04 02                               	cmp    WORD PTR [r11+0x4],0x2
   1414ffe31:	0f 85 36 07 00 00                               	jne    0x14150056d
   1414ffe37:	4d 8b 6b 08                                     	mov    r13,QWORD PTR [r11+0x8]
   1414ffe3b:	49 8b 43 10                                     	mov    rax,QWORD PTR [r11+0x10]
   1414ffe3f:	48 89 45 e8                                     	mov    QWORD PTR [rbp-0x18],rax
   1414ffe43:	4c 89 6d 00                                     	mov    QWORD PTR [rbp+0x0],r13
   1414ffe47:	4c 3b e8                                        	cmp    r13,rax
   1414ffe4a:	0f 83 0e 07 00 00                               	jae    0x14150055e
   1414ffe50:	49 8b 4d 00                                     	mov    rcx,QWORD PTR [r13+0x0]
   1414ffe54:	48 8b 01                                        	mov    rax,QWORD PTR [rcx]
   1414ffe57:	ff 10                                           	call   QWORD PTR [rax]
   1414ffe59:	66 83 f8 08                                     	cmp    ax,0x8
   1414ffe5d:	0f 85 ee 06 00 00                               	jne    0x141500551
   1414ffe63:	4d 8b 65 00                                     	mov    r12,QWORD PTR [r13+0x0]
   1414ffe67:	4c 89 65 e0                                     	mov    QWORD PTR [rbp-0x20],r12
   1414ffe6b:	41 f6 44 24 14 01                               	test   BYTE PTR [r12+0x14],0x1
   1414ffe71:	0f 85 da 06 00 00                               	jne    0x141500551
   1414ffe77:	4d 8b 7c 24 48                                  	mov    r15,QWORD PTR [r12+0x48]
   1414ffe7c:	4d 8b 64 24 50                                  	mov    r12,QWORD PTR [r12+0x50]
   1414ffe81:	4c 89 65 f0                                     	mov    QWORD PTR [rbp-0x10],r12
   1414ffe85:	4c 8b 6d d0                                     	mov    r13,QWORD PTR [rbp-0x30]
   1414ffe89:	4c 89 7d 10                                     	mov    QWORD PTR [rbp+0x10],r15
   1414ffe8d:	4d 3b fc                                        	cmp    r15,r12
   1414ffe90:	0f 83 b7 06 00 00                               	jae    0x14150054d
   1414ffe96:	49 8b 1f                                        	mov    rbx,QWORD PTR [r15]
   1414ffe99:	48 89 5c 24 78                                  	mov    QWORD PTR [rsp+0x78],rbx
   1414ffe9e:	48 8d 53 08                                     	lea    rdx,[rbx+0x8]
   1414ffea2:	44 8b 86 30 0c 00 00                            	mov    r8d,DWORD PTR [rsi+0xc30]
   1414ffea9:	48 8d 4d 70                                     	lea    rcx,[rbp+0x70]
   1414ffead:	e8 5e c3 bb fe                                  	call   0x1400bc210
   1414ffeb2:	41 be ff ff ff ff                               	mov    r14d,0xffffffff
   1414ffeb8:	44 89 75 08                                     	mov    DWORD PTR [rbp+0x8],r14d
   1414ffebc:	89 7d 0c                                        	mov    DWORD PTR [rbp+0xc],edi
   1414ffebf:	48 8b 45 08                                     	mov    rax,QWORD PTR [rbp+0x8]
   1414ffec3:	80 7d 78 00                                     	cmp    BYTE PTR [rbp+0x78],0x0
   1414ffec7:	48 0f 45 45 70                                  	cmovne rax,QWORD PTR [rbp+0x70]
   1414ffecc:	41 3b c6                                        	cmp    eax,r14d
   1414ffecf:	75 31                                           	jne    0x1414fff02
   1414ffed1:	48 8d 53 20                                     	lea    rdx,[rbx+0x20]
   1414ffed5:	44 8b 86 30 01 00 00                            	mov    r8d,DWORD PTR [rsi+0x130]
   1414ffedc:	48 8d 4d 50                                     	lea    rcx,[rbp+0x50]
   1414ffee0:	e8 2b c3 bb fe                                  	call   0x1400bc210
   1414ffee5:	44 89 75 d8                                     	mov    DWORD PTR [rbp-0x28],r14d
   1414ffee9:	89 7d dc                                        	mov    DWORD PTR [rbp-0x24],edi
   1414ffeec:	48 8b 45 d8                                     	mov    rax,QWORD PTR [rbp-0x28]
   1414ffef0:	80 7d 58 00                                     	cmp    BYTE PTR [rbp+0x58],0x0
   1414ffef4:	48 0f 45 45 50                                  	cmovne rax,QWORD PTR [rbp+0x50]
   1414ffef9:	41 3b c6                                        	cmp    eax,r14d
   1414ffefc:	0f 84 42 06 00 00                               	je     0x141500544
   1414fff02:	44 39 73 54                                     	cmp    DWORD PTR [rbx+0x54],r14d
   1414fff06:	75 08                                           	jne    0x1414fff10
   1414fff08:	48 8b cb                                        	mov    rcx,rbx
   1414fff0b:	e8 10 30 03 00                                  	call   0x141532f20
   1414fff10:	8b 43 54                                        	mov    eax,DWORD PTR [rbx+0x54]
   1414fff13:	41 3b 45 10                                     	cmp    eax,DWORD PTR [r13+0x10]
   1414fff17:	7e 04                                           	jle    0x1414fff1d
   1414fff19:	41 89 45 10                                     	mov    DWORD PTR [r13+0x10],eax
   1414fff1d:	8b 43 50                                        	mov    eax,DWORD PTR [rbx+0x50]
   1414fff20:	2b 43 54                                        	sub    eax,DWORD PTR [rbx+0x54]
   1414fff23:	41 3b 45 18                                     	cmp    eax,DWORD PTR [r13+0x18]
   1414fff27:	7e 04                                           	jle    0x1414fff2d
   1414fff29:	41 89 45 18                                     	mov    DWORD PTR [r13+0x18],eax
   1414fff2d:	48 8b 7b 38                                     	mov    rdi,QWORD PTR [rbx+0x38]
   1414fff31:	4c 8b 73 40                                     	mov    r14,QWORD PTR [rbx+0x40]
   1414fff35:	4c 89 75 f8                                     	mov    QWORD PTR [rbp-0x8],r14
   1414fff39:	4c 8b 65 a0                                     	mov    r12,QWORD PTR [rbp-0x60]
   1414fff3d:	4c 8b 7d e0                                     	mov    r15,QWORD PTR [rbp-0x20]
   1414fff41:	49 3b fe                                        	cmp    rdi,r14
   1414fff44:	0f 83 ec 05 00 00                               	jae    0x141500536
   1414fff4a:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   1414fff4d:	44 8b 18                                        	mov    r11d,DWORD PTR [rax]
   1414fff50:	44 3b 1b                                        	cmp    r11d,DWORD PTR [rbx]
   1414fff53:	0f 84 d4 05 00 00                               	je     0x14150052d
   1414fff59:	83 78 04 00                                     	cmp    DWORD PTR [rax+0x4],0x0
   1414fff5d:	75 5f                                           	jne    0x1414fffbe
   1414fff5f:	49 83 bc 24 80 0d 00 00 00                      	cmp    QWORD PTR [r12+0xd80],0x0
   1414fff68:	75 54                                           	jne    0x1414fffbe
   1414fff6a:	41 83 bc 24 80 12 00 00 07                      	cmp    DWORD PTR [r12+0x1280],0x7
   1414fff73:	7e 29                                           	jle    0x1414fff9e
   1414fff75:	49 8b 84 24 78 12 00 00                         	mov    rax,QWORD PTR [r12+0x1278]
   1414fff7d:	f6 40 07 04                                     	test   BYTE PTR [rax+0x7],0x4
   1414fff81:	74 1b                                           	je     0x1414fff9e
   1414fff83:	41 f7 84 24 2c 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x82c],0x2000000
   1414fff8f:	75 2d                                           	jne    0x1414fffbe
   1414fff91:	48 83 c7 08                                     	add    rdi,0x8
   1414fff95:	eb aa                                           	jmp    0x1414fff41
   1414fff97:	33 ff                                           	xor    edi,edi
   1414fff99:	e9 84 fe ff ff                                  	jmp    0x1414ffe22
   1414fff9e:	41 f7 84 24 2c 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x82c],0x2000000
   1414fffaa:	75 12                                           	jne    0x1414fffbe
   1414fffac:	41 f7 84 24 28 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x828],0x2000000
   1414fffb8:	0f 85 6f 05 00 00                               	jne    0x14150052d
   1414fffbe:	49 8b 5f 48                                     	mov    rbx,QWORD PTR [r15+0x48]
   1414fffc2:	4d 8b 57 50                                     	mov    r10,QWORD PTR [r15+0x50]
   1414fffc6:	4c 2b d3                                        	sub    r10,rbx
   1414fffc9:	49 c1 fa 03                                     	sar    r10,0x3
   1414fffcd:	45 85 d2                                        	test   r10d,r10d
   1414fffd0:	75 0a                                           	jne    0x1414fffdc
   1414fffd2:	b8 ff ff ff ff                                  	mov    eax,0xffffffff
   1414fffd7:	44 8b c8                                        	mov    r9d,eax
   1414fffda:	eb 3c                                           	jmp    0x141500018
   1414fffdc:	45 33 c9                                        	xor    r9d,r9d
   1414fffdf:	41 83 fa 40                                     	cmp    r10d,0x40
   1414fffe3:	7e 2f                                           	jle    0x141500014
   1414fffe5:	66 66 66 0f 1f 84 00 00 00 00 00                	data16 data16 nop WORD PTR [rax+rax*1+0x0]
   1414ffff0:	45 8b c2                                        	mov    r8d,r10d
   1414ffff3:	41 d1 e8                                        	shr    r8d,1
   1414ffff6:	43 8d 14 08                                     	lea    edx,[r8+r9*1]
   1414ffffa:	48 63 c2                                        	movsxd rax,edx
   1414ffffd:	48 8b 0c c3                                     	mov    rcx,QWORD PTR [rbx+rax*8]
   141500001:	44 3b 19                                        	cmp    r11d,DWORD PTR [rcx]
   141500004:	41 0f 4c d1                                     	cmovl  edx,r9d
   141500008:	44 8b ca                                        	mov    r9d,edx
   14150000b:	45 2b d0                                        	sub    r10d,r8d
   14150000e:	41 83 fa 40                                     	cmp    r10d,0x40
   141500012:	7f dc                                           	jg     0x1414ffff0
   141500014:	43 8d 04 11                                     	lea    eax,[r9+r10*1]
   141500018:	83 f8 ff                                        	cmp    eax,0xffffffff
   14150001b:	0f 84 07 05 00 00                               	je     0x141500528
   141500021:	44 3b c8                                        	cmp    r9d,eax
   141500024:	0f 8d fe 04 00 00                               	jge    0x141500528
   14150002a:	49 63 c9                                        	movsxd rcx,r9d
   14150002d:	4c 63 c0                                        	movsxd r8,eax
   141500030:	48 8d 14 cb                                     	lea    rdx,[rbx+rcx*8]
   141500034:	48 8b 02                                        	mov    rax,QWORD PTR [rdx]
   141500037:	44 3b 18                                        	cmp    r11d,DWORD PTR [rax]
   14150003a:	74 1d                                           	je     0x141500059
   14150003c:	41 ff c1                                        	inc    r9d
   14150003f:	48 ff c1                                        	inc    rcx
   141500042:	48 83 c2 08                                     	add    rdx,0x8
   141500046:	49 3b c8                                        	cmp    rcx,r8
   141500049:	7c e9                                           	jl     0x141500034
   14150004b:	48 8b 5c 24 78                                  	mov    rbx,QWORD PTR [rsp+0x78]
   141500050:	48 83 c7 08                                     	add    rdi,0x8
   141500054:	e9 e8 fe ff ff                                  	jmp    0x1414fff41
   141500059:	49 63 c9                                        	movsxd rcx,r9d
   14150005c:	48 8b 14 cb                                     	mov    rdx,QWORD PTR [rbx+rcx*8]
   141500060:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   141500064:	48 85 d2                                        	test   rdx,rdx
   141500067:	0f 84 bb 04 00 00                               	je     0x141500528
   14150006d:	32 c0                                           	xor    al,al
   14150006f:	88 44 24 60                                     	mov    BYTE PTR [rsp+0x60],al
   141500073:	48 8b 5a 20                                     	mov    rbx,QWORD PTR [rdx+0x20]
   141500077:	48 8b 72 28                                     	mov    rsi,QWORD PTR [rdx+0x28]
   14150007b:	44 8b 75 98                                     	mov    r14d,DWORD PTR [rbp-0x68]
   14150007f:	90                                              	nop
   141500080:	48 3b de                                        	cmp    rbx,rsi
   141500083:	0f 84 6d 04 00 00                               	je     0x1415004f6
   141500089:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   14150008d:	0f 83 63 04 00 00                               	jae    0x1415004f6
   141500093:	44 8b 13                                        	mov    r10d,DWORD PTR [rbx]
   141500096:	48 8b 05 9b 74 f0 00                            	mov    rax,QWORD PTR [rip+0xf0749b]        # 0x142407538
   14150009d:	48 2b 05 8c 74 f0 00                            	sub    rax,QWORD PTR [rip+0xf0748c]        # 0x142407530
   1415000a4:	48 c1 f8 03                                     	sar    rax,0x3
   1415000a8:	85 c0                                           	test   eax,eax
   1415000aa:	0f 84 39 04 00 00                               	je     0x1415004e9
   1415000b0:	41 83 fa ff                                     	cmp    r10d,0xffffffff
   1415000b4:	0f 84 2f 04 00 00                               	je     0x1415004e9
   1415000ba:	45 33 c0                                        	xor    r8d,r8d
   1415000bd:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   1415000c1:	83 e8 01                                        	sub    eax,0x1
   1415000c4:	78 53                                           	js     0x141500119
   1415000c6:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   1415000ca:	66 0f 1f 44 00 00                               	nop    WORD PTR [rax+rax*1+0x0]
   1415000d0:	89 45 a8                                        	mov    DWORD PTR [rbp-0x58],eax
   1415000d3:	45 8d 0c 00                                     	lea    r9d,[r8+rax*1]
   1415000d7:	41 d1 f9                                        	sar    r9d,1
   1415000da:	49 63 c9                                        	movsxd rcx,r9d
   1415000dd:	48 8b 05 4c 74 f0 00                            	mov    rax,QWORD PTR [rip+0xf0744c]        # 0x142407530
   1415000e4:	48 8b 0c c8                                     	mov    rcx,QWORD PTR [rax+rcx*8]
   1415000e8:	48 89 4d 88                                     	mov    QWORD PTR [rbp-0x78],rcx
   1415000ec:	44 39 91 30 01 00 00                            	cmp    DWORD PTR [rcx+0x130],r10d
   1415000f3:	0f 84 91 00 00 00                               	je     0x14150018a
   1415000f9:	41 8d 41 01                                     	lea    eax,[r9+0x1]
   1415000fd:	44 0f 4e c0                                     	cmovle r8d,eax
   141500101:	41 8d 41 ff                                     	lea    eax,[r9-0x1]
   141500105:	0f 4e 45 a8                                     	cmovle eax,DWORD PTR [rbp-0x58]
   141500109:	48 8b ca                                        	mov    rcx,rdx
   14150010c:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   141500110:	44 3b c0                                        	cmp    r8d,eax
   141500113:	7e bb                                           	jle    0x1415000d0
   141500115:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   141500119:	45 33 d2                                        	xor    r10d,r10d
   14150011c:	41 8b ca                                        	mov    ecx,r10d
   14150011f:	48 89 4d 88                                     	mov    QWORD PTR [rbp-0x78],rcx
   141500123:	48 85 c9                                        	test   rcx,rcx
   141500126:	0f 84 c1 03 00 00                               	je     0x1415004ed
   14150012c:	49 3b cc                                        	cmp    rcx,r12
   14150012f:	0f 84 b8 03 00 00                               	je     0x1415004ed
   141500135:	44 8b 89 10 01 00 00                            	mov    r9d,DWORD PTR [rcx+0x110]
   14150013c:	41 f7 c1 02 00 00 02                            	test   r9d,0x2000002
   141500143:	0f 85 a4 03 00 00                               	jne    0x1415004ed
   141500149:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   14150014c:	44 8b 40 04                                     	mov    r8d,DWORD PTR [rax+0x4]
   141500150:	41 83 f8 06                                     	cmp    r8d,0x6
   141500154:	74 65                                           	je     0x1415001bb
   141500156:	49 83 bc 24 80 0d 00 00 00                      	cmp    QWORD PTR [r12+0xd80],0x0
   14150015f:	75 5a                                           	jne    0x1415001bb
   141500161:	41 83 bc 24 80 12 00 00 07                      	cmp    DWORD PTR [r12+0x1280],0x7
   14150016a:	7e 23                                           	jle    0x14150018f
   14150016c:	49 8b 84 24 78 12 00 00                         	mov    rax,QWORD PTR [r12+0x1278]
   141500174:	f6 40 07 04                                     	test   BYTE PTR [rax+0x7],0x4
   141500178:	74 15                                           	je     0x14150018f
   14150017a:	41 f7 84 24 2c 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x82c],0x2000000
   141500186:	75 33                                           	jne    0x1415001bb
   141500188:	eb 21                                           	jmp    0x1415001ab
   14150018a:	45 33 d2                                        	xor    r10d,r10d
   14150018d:	eb 94                                           	jmp    0x141500123
   14150018f:	41 f7 84 24 2c 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x82c],0x2000000
   14150019b:	75 1e                                           	jne    0x1415001bb
   14150019d:	41 f7 84 24 28 08 00 00 00 00 00 02             	test   DWORD PTR [r12+0x828],0x2000000
   1415001a9:	74 10                                           	je     0x1415001bb
   1415001ab:	f7 81 18 01 00 00 00 00 40 00                   	test   DWORD PTR [rcx+0x118],0x400000
   1415001b5:	0f 85 32 03 00 00                               	jne    0x1415004ed
   1415001bb:	41 0f ba e1 0f                                  	bt     r9d,0xf
   1415001c0:	73 25                                           	jae    0x1415001e7
   1415001c2:	41 83 f8 01                                     	cmp    r8d,0x1
   1415001c6:	0f 86 21 03 00 00                               	jbe    0x1415004ed
   1415001cc:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   1415001cf:	44 8b 40 04                                     	mov    r8d,DWORD PTR [rax+0x4]
   1415001d3:	41 83 f8 02                                     	cmp    r8d,0x2
   1415001d7:	0f 84 10 03 00 00                               	je     0x1415004ed
   1415001dd:	41 83 f8 03                                     	cmp    r8d,0x3
   1415001e1:	0f 84 06 03 00 00                               	je     0x1415004ed
   1415001e7:	0f b7 81 a0 00 00 00                            	movzx  eax,WORD PTR [rcx+0xa0]
   1415001ee:	66 83 f8 67                                     	cmp    ax,0x67
   1415001f2:	74 06                                           	je     0x1415001fa
   1415001f4:	66 83 f8 68                                     	cmp    ax,0x68
   1415001f8:	75 0d                                           	jne    0x141500207
   1415001fa:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   1415001fd:	83 78 04 03                                     	cmp    DWORD PTR [rax+0x4],0x3
   141500201:	0f 84 e6 02 00 00                               	je     0x1415004ed
   141500207:	44 89 54 24 64                                  	mov    DWORD PTR [rsp+0x64],r10d
   14150020c:	41 0f b7 84 24 ac 00 00 00                      	movzx  eax,WORD PTR [r12+0xac]
   141500215:	66 89 44 24 30                                  	mov    WORD PTR [rsp+0x30],ax
   14150021a:	41 0f b7 84 24 aa 00 00 00                      	movzx  eax,WORD PTR [r12+0xaa]
   141500223:	66 89 44 24 28                                  	mov    WORD PTR [rsp+0x28],ax
   141500228:	41 0f b7 84 24 a8 00 00 00                      	movzx  eax,WORD PTR [r12+0xa8]
   141500231:	66 89 44 24 20                                  	mov    WORD PTR [rsp+0x20],ax
   141500236:	44 0f b7 89 ac 00 00 00                         	movzx  r9d,WORD PTR [rcx+0xac]
   14150023e:	44 0f b7 81 aa 00 00 00                         	movzx  r8d,WORD PTR [rcx+0xaa]
   141500246:	0f b7 91 a8 00 00 00                            	movzx  edx,WORD PTR [rcx+0xa8]
   14150024d:	48 8d 0d 1c 37 ef 00                            	lea    rcx,[rip+0xef371c]        # 0x1423f3970
   141500254:	e8 77 5a f6 ff                                  	call   0x141465cd0
   141500259:	88 44 24 68                                     	mov    BYTE PTR [rsp+0x68],al
   14150025d:	84 c0                                           	test   al,al
   14150025f:	74 0d                                           	je     0x14150026e
   141500261:	41 83 4d 0c 02                                  	or     DWORD PTR [r13+0xc],0x2
   141500266:	41 b8 40 42 0f 00                               	mov    r8d,0xf4240
   14150026c:	eb 05                                           	jmp    0x141500273
   14150026e:	44 8b 44 24 64                                  	mov    r8d,DWORD PTR [rsp+0x64]
   141500273:	48 8b 0f                                        	mov    rcx,QWORD PTR [rdi]
   141500276:	8b 51 04                                        	mov    edx,DWORD PTR [rcx+0x4]
   141500279:	ff ca                                           	dec    edx
   14150027b:	83 fa 05                                        	cmp    edx,0x5
   14150027e:	77 4a                                           	ja     0x1415002ca
   141500280:	48 63 c2                                        	movsxd rax,edx
   141500283:	48 8d 15 76 fd af fe                            	lea    rdx,[rip+0xfffffffffeaffd76]        # 0x140000000
   14150028a:	8b 8c 82 04 06 50 01                            	mov    ecx,DWORD PTR [rdx+rax*4+0x1500604]
   141500291:	48 03 ca                                        	add    rcx,rdx
   141500294:	ff e1                                           	jmp    rcx
   141500296:	41 81 c0 f4 01 00 00                            	add    r8d,0x1f4
   14150029d:	eb 2b                                           	jmp    0x1415002ca
   14150029f:	41 81 c0 e8 03 00 00                            	add    r8d,0x3e8
   1415002a6:	eb 22                                           	jmp    0x1415002ca
   1415002a8:	41 81 c0 d0 07 00 00                            	add    r8d,0x7d0
   1415002af:	eb 19                                           	jmp    0x1415002ca
   1415002b1:	41 81 c0 b8 0b 00 00                            	add    r8d,0xbb8
   1415002b8:	eb 10                                           	jmp    0x1415002ca
   1415002ba:	41 81 c0 a0 0f 00 00                            	add    r8d,0xfa0
   1415002c1:	eb 07                                           	jmp    0x1415002ca
   1415002c3:	41 81 c0 88 13 00 00                            	add    r8d,0x1388
   1415002ca:	48 8b 55 88                                     	mov    rdx,QWORD PTR [rbp-0x78]
   1415002ce:	48 8b 82 d0 07 00 00                            	mov    rax,QWORD PTR [rdx+0x7d0]
   1415002d5:	48 8b 8a d8 07 00 00                            	mov    rcx,QWORD PTR [rdx+0x7d8]
   1415002dc:	48 8b 55 80                                     	mov    rdx,QWORD PTR [rbp-0x80]
   1415002e0:	4c 8b d2                                        	mov    r10,rdx
   1415002e3:	48 3b c1                                        	cmp    rax,rcx
   1415002e6:	74 31                                           	je     0x141500319
   1415002e8:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   1415002ec:	73 2b                                           	jae    0x141500319
   1415002ee:	4c 8b 08                                        	mov    r9,QWORD PTR [rax]
   1415002f1:	41 83 39 01                                     	cmp    DWORD PTR [r9],0x1
   1415002f5:	75 15                                           	jne    0x14150030c
   1415002f7:	41 8b 94 24 30 01 00 00                         	mov    edx,DWORD PTR [r12+0x130]
   1415002ff:	41 39 51 08                                     	cmp    DWORD PTR [r9+0x8],edx
   141500303:	75 07                                           	jne    0x14150030c
   141500305:	41 81 c0 10 27 00 00                            	add    r8d,0x2710
   14150030c:	48 83 c0 08                                     	add    rax,0x8
   141500310:	49 8b d2                                        	mov    rdx,r10
   141500313:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   141500317:	eb c7                                           	jmp    0x1415002e0
   141500319:	44 89 44 24 64                                  	mov    DWORD PTR [rsp+0x64],r8d
   14150031e:	c6 44 24 60 00                                  	mov    BYTE PTR [rsp+0x60],0x0
   141500323:	49 8d 45 20                                     	lea    rax,[r13+0x20]
   141500327:	33 c9                                           	xor    ecx,ecx
   141500329:	45 8b 8d 60 06 00 00                            	mov    r9d,DWORD PTR [r13+0x660]
   141500330:	45 85 c9                                        	test   r9d,r9d
   141500333:	7e 2e                                           	jle    0x141500363
   141500335:	48 8b 55 88                                     	mov    rdx,QWORD PTR [rbp-0x78]
   141500339:	0f 1f 80 00 00 00 00                            	nop    DWORD PTR [rax+0x0]
   141500340:	48 39 10                                        	cmp    QWORD PTR [rax],rdx
   141500343:	74 0d                                           	je     0x141500352
   141500345:	ff c1                                           	inc    ecx
   141500347:	48 83 c0 08                                     	add    rax,0x8
   14150034b:	41 3b c9                                        	cmp    ecx,r9d
   14150034e:	7c f0                                           	jl     0x141500340
   141500350:	eb 11                                           	jmp    0x141500363
   141500352:	c6 44 24 60 01                                  	mov    BYTE PTR [rsp+0x60],0x1
   141500357:	41 81 c0 20 a1 07 00                            	add    r8d,0x7a120
   14150035e:	44 89 44 24 64                                  	mov    DWORD PTR [rsp+0x64],r8d
   141500363:	49 8b cc                                        	mov    rcx,r12
   141500366:	e8 45 4e ee ff                                  	call   0x1413e51b0
   14150036b:	48 85 c0                                        	test   rax,rax
   14150036e:	74 4d                                           	je     0x1415003bd
   141500370:	48 8b 10                                        	mov    rdx,QWORD PTR [rax]
   141500373:	48 8b c8                                        	mov    rcx,rax
   141500376:	ff 52 58                                        	call   QWORD PTR [rdx+0x58]
   141500379:	48 85 c0                                        	test   rax,rax
   14150037c:	74 3f                                           	je     0x1415003bd
   14150037e:	4c 8b 45 88                                     	mov    r8,QWORD PTR [rbp-0x78]
   141500382:	45 8b 80 30 01 00 00                            	mov    r8d,DWORD PTR [r8+0x130]
   141500389:	48 8b d0                                        	mov    rdx,rax
   14150038c:	48 8d 4d 60                                     	lea    rcx,[rbp+0x60]
   141500390:	e8 7b be bb fe                                  	call   0x1400bc210
   141500395:	c7 45 20 ff ff ff ff                            	mov    DWORD PTR [rbp+0x20],0xffffffff
   14150039c:	c7 45 24 00 00 00 00                            	mov    DWORD PTR [rbp+0x24],0x0
   1415003a3:	48 8b 45 20                                     	mov    rax,QWORD PTR [rbp+0x20]
   1415003a7:	80 7d 68 00                                     	cmp    BYTE PTR [rbp+0x68],0x0
   1415003ab:	48 0f 45 45 60                                  	cmovne rax,QWORD PTR [rbp+0x60]
   1415003b0:	83 f8 ff                                        	cmp    eax,0xffffffff
   1415003b3:	74 08                                           	je     0x1415003bd
   1415003b5:	81 44 24 64 b0 71 0b 00                         	add    DWORD PTR [rsp+0x64],0xb71b0
   1415003bd:	48 8b 45 88                                     	mov    rax,QWORD PTR [rbp-0x78]
   1415003c1:	44 8b 80 30 01 00 00                            	mov    r8d,DWORD PTR [rax+0x130]
   1415003c8:	48 8d 95 80 00 00 00                            	lea    rdx,[rbp+0x80]
   1415003cf:	48 8d 4d 30                                     	lea    rcx,[rbp+0x30]
   1415003d3:	e8 38 be bb fe                                  	call   0x1400bc210
   1415003d8:	c7 45 18 ff ff ff ff                            	mov    DWORD PTR [rbp+0x18],0xffffffff
   1415003df:	c7 45 1c 00 00 00 00                            	mov    DWORD PTR [rbp+0x1c],0x0
   1415003e6:	48 8b 45 18                                     	mov    rax,QWORD PTR [rbp+0x18]
   1415003ea:	80 7d 38 00                                     	cmp    BYTE PTR [rbp+0x38],0x0
   1415003ee:	48 0f 45 45 30                                  	cmovne rax,QWORD PTR [rbp+0x30]
   1415003f3:	83 f8 ff                                        	cmp    eax,0xffffffff
   1415003f6:	74 08                                           	je     0x141500400
   1415003f8:	81 44 24 64 80 84 1e 00                         	add    DWORD PTR [rsp+0x64],0x1e8480
   141500400:	41 0f b7 84 24 a8 00 00 00                      	movzx  eax,WORD PTR [r12+0xa8]
   141500409:	4c 8b 4d 88                                     	mov    r9,QWORD PTR [rbp-0x78]
   14150040d:	66 41 2b 81 a8 00 00 00                         	sub    ax,WORD PTR [r9+0xa8]
   141500415:	44 0f bf c0                                     	movsx  r8d,ax
   141500419:	41 0f b7 84 24 aa 00 00 00                      	movzx  eax,WORD PTR [r12+0xaa]
   141500422:	66 41 2b 81 aa 00 00 00                         	sub    ax,WORD PTR [r9+0xaa]
   14150042a:	0f bf c8                                        	movsx  ecx,ax
   14150042d:	41 0f b7 84 24 ac 00 00 00                      	movzx  eax,WORD PTR [r12+0xac]
   141500436:	66 41 2b 81 ac 00 00 00                         	sub    ax,WORD PTR [r9+0xac]
   14150043e:	0f bf d0                                        	movsx  edx,ax
   141500441:	0f af d2                                        	imul   edx,edx
   141500444:	0f af c9                                        	imul   ecx,ecx
   141500447:	03 d1                                           	add    edx,ecx
   141500449:	45 0f af c0                                     	imul   r8d,r8d
   14150044d:	41 03 d0                                        	add    edx,r8d
   141500450:	66 0f 6e ca                                     	movd   xmm1,edx
   141500454:	0f 5b c9                                        	cvtdq2ps xmm1,xmm1
   141500457:	0f 57 c0                                        	xorps  xmm0,xmm0
   14150045a:	0f 2e c1                                        	ucomiss xmm0,xmm1
   14150045d:	77 09                                           	ja     0x141500468
   14150045f:	0f 57 c0                                        	xorps  xmm0,xmm0
   141500462:	f3 0f 51 c1                                     	sqrtss xmm0,xmm1
   141500466:	eb 0c                                           	jmp    0x141500474
   141500468:	0f 28 c1                                        	movaps xmm0,xmm1
   14150046b:	e8 66 44 05 00                                  	call   0x1415548d6
   141500470:	4c 8b 4d 88                                     	mov    r9,QWORD PTR [rbp-0x78]
   141500474:	f3 0f 2c c0                                     	cvttss2si eax,xmm0
   141500478:	0f bf c8                                        	movsx  ecx,ax
   14150047b:	b8 10 27 00 00                                  	mov    eax,0x2710
   141500480:	2b c1                                           	sub    eax,ecx
   141500482:	8b 54 24 64                                     	mov    edx,DWORD PTR [rsp+0x64]
   141500486:	03 d0                                           	add    edx,eax
   141500488:	41 83 fe ff                                     	cmp    r14d,0xffffffff
   14150048c:	74 05                                           	je     0x141500493
   14150048e:	41 3b d6                                        	cmp    edx,r14d
   141500491:	7e 3f                                           	jle    0x1415004d2
   141500493:	4d 89 4d 00                                     	mov    QWORD PTR [r13+0x0],r9
   141500497:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   14150049a:	8b 48 04                                        	mov    ecx,DWORD PTR [rax+0x4]
   14150049d:	41 89 4d 08                                     	mov    DWORD PTR [r13+0x8],ecx
   1415004a1:	4d 89 bd 68 06 00 00                            	mov    QWORD PTR [r13+0x668],r15
   1415004a8:	44 8b f2                                        	mov    r14d,edx
   1415004ab:	41 8b 4d 0c                                     	mov    ecx,DWORD PTR [r13+0xc]
   1415004af:	8b c1                                           	mov    eax,ecx
   1415004b1:	83 c8 08                                        	or     eax,0x8
   1415004b4:	83 e1 f7                                        	and    ecx,0xfffffff7
   1415004b7:	80 7c 24 68 00                                  	cmp    BYTE PTR [rsp+0x68],0x0
   1415004bc:	0f 45 c8                                        	cmovne ecx,eax
   1415004bf:	80 7c 24 60 00                                  	cmp    BYTE PTR [rsp+0x60],0x0
   1415004c4:	74 05                                           	je     0x1415004cb
   1415004c6:	83 c9 04                                        	or     ecx,0x4
   1415004c9:	eb 03                                           	jmp    0x1415004ce
   1415004cb:	83 e1 fb                                        	and    ecx,0xfffffffb
   1415004ce:	41 89 4d 0c                                     	mov    DWORD PTR [r13+0xc],ecx
   1415004d2:	41 83 4d 0c 01                                  	or     DWORD PTR [r13+0xc],0x1
   1415004d7:	c6 44 24 60 01                                  	mov    BYTE PTR [rsp+0x60],0x1
   1415004dc:	48 8b 55 80                                     	mov    rdx,QWORD PTR [rbp-0x80]
   1415004e0:	48 83 c3 04                                     	add    rbx,0x4
   1415004e4:	e9 97 fb ff ff                                  	jmp    0x141500080
   1415004e9:	48 89 55 80                                     	mov    QWORD PTR [rbp-0x80],rdx
   1415004ed:	48 83 c3 04                                     	add    rbx,0x4
   1415004f1:	e9 8a fb ff ff                                  	jmp    0x141500080
   1415004f6:	44 89 75 98                                     	mov    DWORD PTR [rbp-0x68],r14d
   1415004fa:	80 7c 24 60 00                                  	cmp    BYTE PTR [rsp+0x60],0x0
   1415004ff:	4c 8b 75 f8                                     	mov    r14,QWORD PTR [rbp-0x8]
   141500503:	74 23                                           	je     0x141500528
   141500505:	83 7a 54 ff                                     	cmp    DWORD PTR [rdx+0x54],0xffffffff
   141500509:	75 0c                                           	jne    0x141500517
   14150050b:	48 8b ca                                        	mov    rcx,rdx
   14150050e:	e8 0d 2a 03 00                                  	call   0x141532f20
   141500513:	48 8b 55 80                                     	mov    rdx,QWORD PTR [rbp-0x80]
   141500517:	8b 42 54                                        	mov    eax,DWORD PTR [rdx+0x54]
   14150051a:	41 01 45 14                                     	add    DWORD PTR [r13+0x14],eax
   14150051e:	8b 42 50                                        	mov    eax,DWORD PTR [rdx+0x50]
   141500521:	2b 42 54                                        	sub    eax,DWORD PTR [rdx+0x54]
   141500524:	41 01 45 1c                                     	add    DWORD PTR [r13+0x1c],eax
   141500528:	48 8b 5c 24 78                                  	mov    rbx,QWORD PTR [rsp+0x78]
   14150052d:	48 83 c7 08                                     	add    rdi,0x8
   141500531:	e9 0b fa ff ff                                  	jmp    0x1414fff41
   141500536:	4c 8b 7d 10                                     	mov    r15,QWORD PTR [rbp+0x10]
   14150053a:	4c 8b 65 f0                                     	mov    r12,QWORD PTR [rbp-0x10]
   14150053e:	48 8b 75 a0                                     	mov    rsi,QWORD PTR [rbp-0x60]
   141500542:	33 ff                                           	xor    edi,edi
   141500544:	49 83 c7 08                                     	add    r15,0x8
   141500548:	e9 3c f9 ff ff                                  	jmp    0x1414ffe89
   14150054d:	4c 8b 6d 00                                     	mov    r13,QWORD PTR [rbp+0x0]
   141500551:	49 83 c5 08                                     	add    r13,0x8
   141500555:	48 8b 45 e8                                     	mov    rax,QWORD PTR [rbp-0x18]
   141500559:	e9 e5 f8 ff ff                                  	jmp    0x1414ffe43
   14150055e:	4c 8b 35 3b 57 00 01                            	mov    r14,QWORD PTR [rip+0x100573b]        # 0x142505ca0
   141500565:	48 8b 4d c8                                     	mov    rcx,QWORD PTR [rbp-0x38]
   141500569:	48 8b 45 c0                                     	mov    rax,QWORD PTR [rbp-0x40]
   14150056d:	48 83 c1 04                                     	add    rcx,0x4
   141500571:	e9 3b f8 ff ff                                  	jmp    0x1414ffdb1
   141500576:	48 8d 8d 80 00 00 00                            	lea    rcx,[rbp+0x80]
   14150057d:	e8 fe 07 b7 fe                                  	call   0x140070d80
   141500582:	48 8b 5d d0                                     	mov    rbx,QWORD PTR [rbp-0x30]
   141500586:	45 33 e4                                        	xor    r12d,r12d
   141500589:	f6 43 0c 01                                     	test   BYTE PTR [rbx+0xc],0x1
   14150058d:	74 0c                                           	je     0x14150059b
   14150058f:	48 8b 86 90 04 00 00                            	mov    rax,QWORD PTR [rsi+0x490]
   141500596:	48 39 03                                        	cmp    QWORD PTR [rbx],rax
   141500599:	74 07                                           	je     0x1415005a2
   14150059b:	4c 89 a6 90 04 00 00                            	mov    QWORD PTR [rsi+0x490],r12
   1415005a2:	48 8b 8d 50 10 00 00                            	mov    rcx,QWORD PTR [rbp+0x1050]
   1415005a9:	48 33 cc                                        	xor    rcx,rsp
   1415005ac:	e8 ff 2a 05 00                                  	call   0x1415530b0
   1415005b1:	48 8b 9c 24 c0 11 00 00                         	mov    rbx,QWORD PTR [rsp+0x11c0]
   1415005b9:	0f 28 b4 24 60 11 00 00                         	movaps xmm6,XMMWORD PTR [rsp+0x1160]
   1415005c1:	48 81 c4 70 11 00 00                            	add    rsp,0x1170
   1415005c8:	41 5f                                           	pop    r15
   1415005ca:	41 5e                                           	pop    r14
   1415005cc:	41 5d                                           	pop    r13
   1415005ce:	41 5c                                           	pop    r12
   1415005d0:	5f                                              	pop    rdi
   1415005d1:	5e                                              	pop    rsi
   1415005d2:	5d                                              	pop    rbp
   1415005d3:	c3                                              	ret
