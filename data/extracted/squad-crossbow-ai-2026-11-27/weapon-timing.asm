; initiate-shot time from weapon definition [0x1406712b0, 0x1406712e7)
   1406712b0:	40 53                                           	rex push rbx
   1406712b2:	48 83 ec 20                                     	sub    rsp,0x20
   1406712b6:	48 8b da                                        	mov    rbx,rdx
   1406712b9:	48 85 d2                                        	test   rdx,rdx
   1406712bc:	74 21                                           	je     0x1406712df
   1406712be:	48 8b 02                                        	mov    rax,QWORD PTR [rdx]
   1406712c1:	48 8b ca                                        	mov    rcx,rdx
   1406712c4:	ff 10                                           	call   QWORD PTR [rax]
   1406712c6:	66 83 f8 18                                     	cmp    ax,0x18
   1406712ca:	75 13                                           	jne    0x1406712df
   1406712cc:	48 8b 83 e8 00 00 00                            	mov    rax,QWORD PTR [rbx+0xe8]
   1406712d3:	8b 80 dc 01 00 00                               	mov    eax,DWORD PTR [rax+0x1dc]
   1406712d9:	48 83 c4 20                                     	add    rsp,0x20
   1406712dd:	5b                                              	pop    rbx
   1406712de:	c3                                              	ret
   1406712df:	33 c0                                           	xor    eax,eax
   1406712e1:	48 83 c4 20                                     	add    rsp,0x20
   1406712e5:	5b                                              	pop    rbx
   1406712e6:	c3                                              	ret

; skill-dependent load time [0x1406712f0, 0x1406713c2)
   1406712f0:	48 89 6c 24 18                                  	mov    QWORD PTR [rsp+0x18],rbp
   1406712f5:	57                                              	push   rdi
   1406712f6:	48 83 ec 20                                     	sub    rsp,0x20
   1406712fa:	48 8b fa                                        	mov    rdi,rdx
   1406712fd:	48 8b e9                                        	mov    rbp,rcx
   140671300:	48 85 d2                                        	test   rdx,rdx
   140671303:	0f 84 ac 00 00 00                               	je     0x1406713b5
   140671309:	48 8b 02                                        	mov    rax,QWORD PTR [rdx]
   14067130c:	48 8b ca                                        	mov    rcx,rdx
   14067130f:	ff 10                                           	call   QWORD PTR [rax]
   140671311:	66 83 f8 18                                     	cmp    ax,0x18
   140671315:	0f 85 9a 00 00 00                               	jne    0x1406713b5
   14067131b:	48 8b 87 e8 00 00 00                            	mov    rax,QWORD PTR [rdi+0xe8]
   140671322:	48 89 5c 24 30                                  	mov    QWORD PTR [rsp+0x30],rbx
   140671327:	48 89 74 24 38                                  	mov    QWORD PTR [rsp+0x38],rsi
   14067132c:	8b b0 d4 01 00 00                               	mov    esi,DWORD PTR [rax+0x1d4]
   140671332:	8b 98 d8 01 00 00                               	mov    ebx,DWORD PTR [rax+0x1d8]
   140671338:	3b f3                                           	cmp    esi,ebx
   14067133a:	7f 17                                           	jg     0x140671353
   14067133c:	8b c3                                           	mov    eax,ebx
   14067133e:	48 8b 5c 24 30                                  	mov    rbx,QWORD PTR [rsp+0x30]
   140671343:	48 8b 74 24 38                                  	mov    rsi,QWORD PTR [rsp+0x38]
   140671348:	48 8b 6c 24 40                                  	mov    rbp,QWORD PTR [rsp+0x40]
   14067134d:	48 83 c4 20                                     	add    rsp,0x20
   140671351:	5f                                              	pop    rdi
   140671352:	c3                                              	ret
   140671353:	48 8b 07                                        	mov    rax,QWORD PTR [rdi]
   140671356:	48 8b cf                                        	mov    rcx,rdi
   140671359:	ff 90 f8 04 00 00                               	call   QWORD PTR [rax+0x4f8]
   14067135f:	0f b7 d0                                        	movzx  edx,ax
   140671362:	48 8b cd                                        	mov    rcx,rbp
   140671365:	e8 46 5d ce 00                                  	call   0x1413570b0
   14067136a:	45 33 c0                                        	xor    r8d,r8d
   14067136d:	85 c0                                           	test   eax,eax
   14067136f:	44 0f 49 c0                                     	cmovns r8d,eax
   140671373:	41 83 f8 0f                                     	cmp    r8d,0xf
   140671377:	7e 06                                           	jle    0x14067137f
   140671379:	8b d3                                           	mov    edx,ebx
   14067137b:	8b c3                                           	mov    eax,ebx
   14067137d:	eb bf                                           	jmp    0x14067133e
   14067137f:	b9 0f 00 00 00                                  	mov    ecx,0xf
   140671384:	41 8b c0                                        	mov    eax,r8d
   140671387:	41 2b c8                                        	sub    ecx,r8d
   14067138a:	0f af c3                                        	imul   eax,ebx
   14067138d:	0f af ce                                        	imul   ecx,esi
   140671390:	03 c8                                           	add    ecx,eax
   140671392:	b8 89 88 88 88                                  	mov    eax,0x88888889
   140671397:	f7 e9                                           	imul   ecx
   140671399:	03 d1                                           	add    edx,ecx
   14067139b:	c1 fa 03                                        	sar    edx,0x3
   14067139e:	8b ca                                           	mov    ecx,edx
   1406713a0:	c1 e9 1f                                        	shr    ecx,0x1f
   1406713a3:	03 d1                                           	add    edx,ecx
   1406713a5:	41 83 f8 0f                                     	cmp    r8d,0xf
   1406713a9:	7d 06                                           	jge    0x1406713b1
   1406713ab:	3b d3                                           	cmp    edx,ebx
   1406713ad:	75 02                                           	jne    0x1406713b1
   1406713af:	ff ca                                           	dec    edx
   1406713b1:	8b c2                                           	mov    eax,edx
   1406713b3:	eb 89                                           	jmp    0x14067133e
   1406713b5:	48 8b 6c 24 40                                  	mov    rbp,QWORD PTR [rsp+0x40]
   1406713ba:	33 c0                                           	xor    eax,eax
   1406713bc:	48 83 c4 20                                     	add    rsp,0x20
   1406713c0:	5f                                              	pop    rdi
   1406713c1:	c3                                              	ret

; choose melee or ranged skill for the effective skill query [0x141357010, 0x14135705a)
   141357010:	40 53                                           	rex push rbx
   141357012:	48 83 ec 20                                     	sub    rsp,0x20
   141357016:	48 8b d9                                        	mov    rbx,rcx
   141357019:	b8 63 00 00 00                                  	mov    eax,0x63
   14135701e:	48 85 d2                                        	test   rdx,rdx
   141357021:	74 27                                           	je     0x14135704a
   141357023:	48 8b 02                                        	mov    rax,QWORD PTR [rdx]
   141357026:	48 8b ca                                        	mov    rcx,rdx
   141357029:	45 84 c0                                        	test   r8b,r8b
   14135702c:	74 16                                           	je     0x141357044
   14135702e:	ff 90 f0 04 00 00                               	call   QWORD PTR [rax+0x4f0]
   141357034:	0f b7 d0                                        	movzx  edx,ax
   141357037:	48 8b cb                                        	mov    rcx,rbx
   14135703a:	48 83 c4 20                                     	add    rsp,0x20
   14135703e:	5b                                              	pop    rbx
   14135703f:	e9 6c 00 00 00                                  	jmp    0x1413570b0
   141357044:	ff 90 f8 04 00 00                               	call   QWORD PTR [rax+0x4f8]
   14135704a:	0f b7 d0                                        	movzx  edx,ax
   14135704d:	48 8b cb                                        	mov    rcx,rbx
   141357050:	48 83 c4 20                                     	add    rsp,0x20
   141357054:	5b                                              	pop    rbx
   141357055:	e9 56 00 00 00                                  	jmp    0x1413570b0

; effective skill after the tail jump [0x1413570b0, 0x1413573dd)
   1413570b0:	40 53                                           	rex push rbx
   1413570b2:	48 83 ec 20                                     	sub    rsp,0x20
   1413570b6:	0f b7 c2                                        	movzx  eax,dx
   1413570b9:	48 8b d9                                        	mov    rbx,rcx
   1413570bc:	48 8b 91 98 0a 00 00                            	mov    rdx,QWORD PTR [rcx+0xa98]
   1413570c3:	48 85 d2                                        	test   rdx,rdx
   1413570c6:	0f 84 09 03 00 00                               	je     0x1413573d5
   1413570cc:	66 83 f8 ff                                     	cmp    ax,0xffff
   1413570d0:	0f 84 ff 02 00 00                               	je     0x1413573d5
   1413570d6:	48 89 74 24 30                                  	mov    QWORD PTR [rsp+0x30],rsi
   1413570db:	48 81 c2 18 02 00 00                            	add    rdx,0x218
   1413570e2:	33 f6                                           	xor    esi,esi
   1413570e4:	48 89 7c 24 38                                  	mov    QWORD PTR [rsp+0x38],rdi
   1413570e9:	0f b7 c8                                        	movzx  ecx,ax
   1413570ec:	8b fe                                           	mov    edi,esi
   1413570ee:	e8 dd 46 d6 fe                                  	call   0x1400bb7d0
   1413570f3:	48 85 c0                                        	test   rax,rax
   1413570f6:	74 09                                           	je     0x141357101
   1413570f8:	8b 78 04                                        	mov    edi,DWORD PTR [rax+0x4]
   1413570fb:	2b 78 10                                        	sub    edi,DWORD PTR [rax+0x10]
   1413570fe:	0f 48 fe                                        	cmovs  edi,esi
   141357101:	39 b3 1c 08 00 00                               	cmp    DWORD PTR [rbx+0x81c],esi
   141357107:	7e 0c                                           	jle    0x141357115
   141357109:	66 83 bb 14 08 00 00 ff                         	cmp    WORD PTR [rbx+0x814],0xffff
   141357111:	75 02                                           	jne    0x141357115
   141357113:	d1 ff                                           	sar    edi,1
   141357115:	66 39 b3 fc 07 00 00                            	cmp    WORD PTR [rbx+0x7fc],si
   14135711c:	7e 0c                                           	jle    0x14135712a
   14135711e:	66 83 bb 14 08 00 00 ff                         	cmp    WORD PTR [rbx+0x814],0xffff
   141357126:	75 02                                           	jne    0x14135712a
   141357128:	d1 ff                                           	sar    edi,1
   14135712a:	66 39 b3 fe 07 00 00                            	cmp    WORD PTR [rbx+0x7fe],si
   141357131:	7e 0c                                           	jle    0x14135713f
   141357133:	66 83 bb 14 08 00 00 ff                         	cmp    WORD PTR [rbx+0x814],0xffff
   14135713b:	75 02                                           	jne    0x14135713f
   14135713d:	d1 ff                                           	sar    edi,1
   14135713f:	39 b3 20 08 00 00                               	cmp    DWORD PTR [rbx+0x820],esi
   141357145:	7e 0c                                           	jle    0x141357153
   141357147:	66 83 bb 14 08 00 00 ff                         	cmp    WORD PTR [rbx+0x814],0xffff
   14135714f:	75 02                                           	jne    0x141357153
   141357151:	d1 ff                                           	sar    edi,1
   141357153:	39 b3 80 09 00 00                               	cmp    DWORD PTR [rbx+0x980],esi
   141357159:	7e 0c                                           	jle    0x141357167
   14135715b:	66 83 bb 14 08 00 00 ff                         	cmp    WORD PTR [rbx+0x814],0xffff
   141357163:	75 02                                           	jne    0x141357167
   141357165:	d1 ff                                           	sar    edi,1
   141357167:	48 8b cb                                        	mov    rcx,rbx
   14135716a:	e8 71 4d 04 00                                  	call   0x14139bee0
   14135716f:	8b cf                                           	mov    ecx,edi
   141357171:	c1 f9 02                                        	sar    ecx,0x2
   141357174:	85 c0                                           	test   eax,eax
   141357176:	0f 45 cf                                        	cmovne ecx,edi
   141357179:	83 bb 18 08 00 00 64                            	cmp    DWORD PTR [rbx+0x818],0x64
   141357180:	48 8b 7c 24 38                                  	mov    rdi,QWORD PTR [rsp+0x38]
   141357185:	8b d1                                           	mov    edx,ecx
   141357187:	7c 15                                           	jl     0x14135719e
   141357189:	66 39 b3 14 08 00 00                            	cmp    WORD PTR [rbx+0x814],si
   141357190:	74 0c                                           	je     0x14135719e
   141357192:	66 83 bb 60 03 00 00 ff                         	cmp    WORD PTR [rbx+0x360],0xffff
   14135719a:	75 02                                           	jne    0x14135719e
   14135719c:	d1 fa                                           	sar    edx,1
   14135719e:	8b 8b 84 09 00 00                               	mov    ecx,DWORD PTR [rbx+0x984]
   1413571a4:	81 f9 d0 07 00 00                               	cmp    ecx,0x7d0
   1413571aa:	7c 15                                           	jl     0x1413571c1
   1413571ac:	66 39 b3 14 08 00 00                            	cmp    WORD PTR [rbx+0x814],si
   1413571b3:	74 0c                                           	je     0x1413571c1
   1413571b5:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   1413571b8:	99                                              	cdq
   1413571b9:	83 e2 03                                        	and    edx,0x3
   1413571bc:	03 d0                                           	add    edx,eax
   1413571be:	c1 fa 02                                        	sar    edx,0x2
   1413571c1:	81 f9 a0 0f 00 00                               	cmp    ecx,0xfa0
   1413571c7:	7c 15                                           	jl     0x1413571de
   1413571c9:	66 39 b3 14 08 00 00                            	cmp    WORD PTR [rbx+0x814],si
   1413571d0:	74 0c                                           	je     0x1413571de
   1413571d2:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   1413571d5:	99                                              	cdq
   1413571d6:	83 e2 03                                        	and    edx,0x3
   1413571d9:	03 d0                                           	add    edx,eax
   1413571db:	c1 fa 02                                        	sar    edx,0x2
   1413571de:	81 f9 70 17 00 00                               	cmp    ecx,0x1770
   1413571e4:	7c 15                                           	jl     0x1413571fb
   1413571e6:	66 39 b3 14 08 00 00                            	cmp    WORD PTR [rbx+0x814],si
   1413571ed:	74 0c                                           	je     0x1413571fb
   1413571ef:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   1413571f2:	99                                              	cdq
   1413571f3:	83 e2 03                                        	and    edx,0x3
   1413571f6:	03 d0                                           	add    edx,eax
   1413571f8:	c1 fa 02                                        	sar    edx,0x2
   1413571fb:	83 bb 80 12 00 00 14                            	cmp    DWORD PTR [rbx+0x1280],0x14
   141357202:	44 8b 0d 2f 70 56 00                            	mov    r9d,DWORD PTR [rip+0x56702f]        # 0x1418be238
   141357209:	7e 1f                                           	jle    0x14135722a
   14135720b:	48 8b 83 78 12 00 00                            	mov    rax,QWORD PTR [rbx+0x1278]
   141357212:	f6 40 14 04                                     	test   BYTE PTR [rax+0x14],0x4
   141357216:	74 12                                           	je     0x14135722a
   141357218:	f7 83 2c 08 00 00 00 00 00 10                   	test   DWORD PTR [rbx+0x82c],0x10000000
   141357222:	0f 85 80 00 00 00                               	jne    0x1413572a8
   141357228:	eb 18                                           	jmp    0x141357242
   14135722a:	f7 83 2c 08 00 00 00 00 00 10                   	test   DWORD PTR [rbx+0x82c],0x10000000
   141357234:	75 72                                           	jne    0x1413572a8
   141357236:	f7 83 28 08 00 00 00 00 00 10                   	test   DWORD PTR [rbx+0x828],0x10000000
   141357240:	74 66                                           	je     0x1413572a8
   141357242:	48 8b 83 a8 09 00 00                            	mov    rax,QWORD PTR [rbx+0x9a8]
   141357249:	48 8b 8b b0 09 00 00                            	mov    rcx,QWORD PTR [rbx+0x9b0]
   141357250:	48 3b c1                                        	cmp    rax,rcx
   141357253:	73 19                                           	jae    0x14135726e
   141357255:	4c 8b 00                                        	mov    r8,QWORD PTR [rax]
   141357258:	66 41 83 38 2e                                  	cmp    WORD PTR [r8],0x2e
   14135725d:	74 06                                           	je     0x141357265
   14135725f:	48 83 c0 08                                     	add    rax,0x8
   141357263:	eb eb                                           	jmp    0x141357250
   141357265:	49 83 c0 04                                     	add    r8,0x4
   141357269:	74 03                                           	je     0x14135726e
   14135726b:	41 8b 30                                        	mov    esi,DWORD PTR [r8]
   14135726e:	41 83 f9 01                                     	cmp    r9d,0x1
   141357272:	75 14                                           	jne    0x141357288
   141357274:	81 fe 00 ea 24 00                               	cmp    esi,0x24ea00
   14135727a:	7c 04                                           	jl     0x141357280
   14135727c:	d1 fa                                           	sar    edx,1
   14135727e:	eb 28                                           	jmp    0x1413572a8
   141357280:	81 fe 00 75 12 00                               	cmp    esi,0x127500
   141357286:	eb 12                                           	jmp    0x14135729a
   141357288:	81 fe 00 27 06 00                               	cmp    esi,0x62700
   14135728e:	7c 04                                           	jl     0x141357294
   141357290:	d1 fa                                           	sar    edx,1
   141357292:	eb 14                                           	jmp    0x1413572a8
   141357294:	81 fe 40 9d 04 00                               	cmp    esi,0x49d40
   14135729a:	7c 0c                                           	jl     0x1413572a8
   14135729c:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   14135729f:	99                                              	cdq
   1413572a0:	83 e2 03                                        	and    edx,0x3
   1413572a3:	03 d0                                           	add    edx,eax
   1413572a5:	c1 fa 02                                        	sar    edx,0x2
   1413572a8:	8b 8b 8c 09 00 00                               	mov    ecx,DWORD PTR [rbx+0x98c]
   1413572ae:	48 8b 74 24 30                                  	mov    rsi,QWORD PTR [rsp+0x30]
   1413572b3:	45 85 c9                                        	test   r9d,r9d
   1413572b6:	75 37                                           	jne    0x1413572ef
   1413572b8:	8b c2                                           	mov    eax,edx
   1413572ba:	d1 f8                                           	sar    eax,1
   1413572bc:	81 f9 50 c3 00 00                               	cmp    ecx,0xc350
   1413572c2:	0f 4c c2                                        	cmovl  eax,edx
   1413572c5:	8b c8                                           	mov    ecx,eax
   1413572c7:	d1 f9                                           	sar    ecx,1
   1413572c9:	81 bb 88 09 00 00 f8 24 01 00                   	cmp    DWORD PTR [rbx+0x988],0x124f8
   1413572d3:	0f 4c c8                                        	cmovl  ecx,eax
   1413572d6:	8b d1                                           	mov    edx,ecx
   1413572d8:	d1 fa                                           	sar    edx,1
   1413572da:	81 bb 90 09 00 00 f0 49 02 00                   	cmp    DWORD PTR [rbx+0x990],0x249f0
   1413572e4:	0f 4c d1                                        	cmovl  edx,ecx
   1413572e7:	8b c2                                           	mov    eax,edx
   1413572e9:	48 83 c4 20                                     	add    rsp,0x20
   1413572ed:	5b                                              	pop    rbx
   1413572ee:	c3                                              	ret
   1413572ef:	81 f9 00 46 05 00                               	cmp    ecx,0x54600
   1413572f5:	7c 04                                           	jl     0x1413572fb
   1413572f7:	d1 fa                                           	sar    edx,1
   1413572f9:	eb 32                                           	jmp    0x14135732d
   1413572fb:	81 f9 00 a3 02 00                               	cmp    ecx,0x2a300
   141357301:	7c 0e                                           	jl     0x141357311
   141357303:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   141357306:	99                                              	cdq
   141357307:	83 e2 03                                        	and    edx,0x3
   14135730a:	03 d0                                           	add    edx,eax
   14135730c:	c1 fa 02                                        	sar    edx,0x2
   14135730f:	eb 1c                                           	jmp    0x14135732d
   141357311:	81 f9 00 c2 01 00                               	cmp    ecx,0x1c200
   141357317:	7c 14                                           	jl     0x14135732d
   141357319:	8d 0c d2                                        	lea    ecx,[rdx+rdx*8]
   14135731c:	b8 67 66 66 66                                  	mov    eax,0x66666667
   141357321:	f7 e9                                           	imul   ecx
   141357323:	c1 fa 02                                        	sar    edx,0x2
   141357326:	8b c2                                           	mov    eax,edx
   141357328:	c1 e8 1f                                        	shr    eax,0x1f
   14135732b:	03 d0                                           	add    edx,eax
   14135732d:	8b 83 88 09 00 00                               	mov    eax,DWORD PTR [rbx+0x988]
   141357333:	3d 00 8d 27 00                                  	cmp    eax,0x278d00
   141357338:	7c 04                                           	jl     0x14135733e
   14135733a:	d1 fa                                           	sar    edx,1
   14135733c:	eb 30                                           	jmp    0x14135736e
   14135733e:	3d 00 75 12 00                                  	cmp    eax,0x127500
   141357343:	7c 0e                                           	jl     0x141357353
   141357345:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   141357348:	99                                              	cdq
   141357349:	83 e2 03                                        	and    edx,0x3
   14135734c:	03 d0                                           	add    edx,eax
   14135734e:	c1 fa 02                                        	sar    edx,0x2
   141357351:	eb 1b                                           	jmp    0x14135736e
   141357353:	3d 00 a3 02 00                                  	cmp    eax,0x2a300
   141357358:	7c 14                                           	jl     0x14135736e
   14135735a:	8d 0c d2                                        	lea    ecx,[rdx+rdx*8]
   14135735d:	b8 67 66 66 66                                  	mov    eax,0x66666667
   141357362:	f7 e9                                           	imul   ecx
   141357364:	c1 fa 02                                        	sar    edx,0x2
   141357367:	8b c2                                           	mov    eax,edx
   141357369:	c1 e8 1f                                        	shr    eax,0x1f
   14135736c:	03 d0                                           	add    edx,eax
   14135736e:	8b 83 90 09 00 00                               	mov    eax,DWORD PTR [rbx+0x990]
   141357374:	3d 00 2f 0d 00                                  	cmp    eax,0xd2f00
   141357379:	7c 0b                                           	jl     0x141357386
   14135737b:	c1 fa 02                                        	sar    edx,0x2
   14135737e:	8b c2                                           	mov    eax,edx
   141357380:	48 83 c4 20                                     	add    rsp,0x20
   141357384:	5b                                              	pop    rbx
   141357385:	c3                                              	ret
   141357386:	3d 00 46 05 00                                  	cmp    eax,0x54600
   14135738b:	7c 0a                                           	jl     0x141357397
   14135738d:	d1 fa                                           	sar    edx,1
   14135738f:	8b c2                                           	mov    eax,edx
   141357391:	48 83 c4 20                                     	add    rsp,0x20
   141357395:	5b                                              	pop    rbx
   141357396:	c3                                              	ret
   141357397:	3d 80 f4 03 00                                  	cmp    eax,0x3f480
   14135739c:	7c 14                                           	jl     0x1413573b2
   14135739e:	8d 04 52                                        	lea    eax,[rdx+rdx*2]
   1413573a1:	99                                              	cdq
   1413573a2:	83 e2 03                                        	and    edx,0x3
   1413573a5:	03 d0                                           	add    edx,eax
   1413573a7:	c1 fa 02                                        	sar    edx,0x2
   1413573aa:	8b c2                                           	mov    eax,edx
   1413573ac:	48 83 c4 20                                     	add    rsp,0x20
   1413573b0:	5b                                              	pop    rbx
   1413573b1:	c3                                              	ret
   1413573b2:	3d 00 a3 02 00                                  	cmp    eax,0x2a300
   1413573b7:	7c 14                                           	jl     0x1413573cd
   1413573b9:	8d 0c d2                                        	lea    ecx,[rdx+rdx*8]
   1413573bc:	b8 67 66 66 66                                  	mov    eax,0x66666667
   1413573c1:	f7 e9                                           	imul   ecx
   1413573c3:	c1 fa 02                                        	sar    edx,0x2
   1413573c6:	8b c2                                           	mov    eax,edx
   1413573c8:	c1 e8 1f                                        	shr    eax,0x1f
   1413573cb:	03 d0                                           	add    edx,eax
   1413573cd:	8b c2                                           	mov    eax,edx
   1413573cf:	48 83 c4 20                                     	add    rsp,0x20
   1413573d3:	5b                                              	pop    rbx
   1413573d4:	c3                                              	ret
   1413573d5:	33 c0                                           	xor    eax,eax
   1413573d7:	48 83 c4 20                                     	add    rsp,0x20
   1413573db:	5b                                              	pop    rbx
   1413573dc:	c3                                              	ret
