; farm_update: planted seed, current season, tile suitability and maturity
   1405898e6:	cmp    ax,0x35
   1405898ea:	jne    0x140589fad
   1405898f0:	call   QWORD PTR [rdx+0x58]
   1405898f3:	movsx  r12,ax
   1405898f7:	cmp    r12w,0xffff
   1405898fc:	je     0x14058a1ad
   140589902:	inc    DWORD PTR [rdi+0xc0]
   140589908:	test   r12w,r12w
   14058990c:	js     0x140589940
   14058990e:	mov    rax,QWORD PTR [rip+0x1f8546b]        # 0x14250ed80
   140589915:	mov    rdx,QWORD PTR [rip+0x1f8545c]        # 0x14250ed78
   14058991c:	sub    rax,rdx
   14058991f:	sar    rax,0x3
   140589923:	cmp    r12,rax
   140589926:	jae    0x140589940
   140589928:	mov    rax,QWORD PTR [rdx+r12*8]
   14058992c:	mov    ebx,DWORD PTR [rax+0x218]
   140589932:	jmp    0x140589943
   140589940:	mov    ebx,r15d
   140589943:	lea    rdx,[rsp+0x98]
   14058994b:	movzx  ecx,r12w
   14058994f:	call   0x140ac7c40
   140589954:	movsx  rcx,BYTE PTR [rip+0x136f93a]        # 0x1418f9296
   14058995c:	cmp    BYTE PTR [rsp+rcx*1+0x98],0x0
   140589964:	je     0x140589f80
   14058996a:	mov    DWORD PTR [rsp+0x20],r12d
   14058996f:	movzx  r9d,WORD PTR [rdi+0xc]
   140589974:	movzx  r8d,WORD PTR [rdi+0xa]
   140589979:	movzx  edx,WORD PTR [rdi+0x8]
   14058997d:	lea    rcx,[rip+0x1e69fec]        # 0x1423f3970
   140589984:	call   0x1414ca790
   140589989:	test   al,al
   14058998b:	je     0x140589f79
   140589991:	cmp    DWORD PTR [rdi+0xc0],ebx
   140589997:	jl     0x14058a1a5

; farm_update: count eligible cells for the crop assigned to this season
   14058a2aa:	movsx  rax,BYTE PTR [rip+0x136efe4]        # 0x1418f9296
   14058a2b2:	movsx  ecx,WORD PTR [rsi+rax*2+0x148]
   14058a2ba:	cmp    cx,0xffff
   14058a2be:	je     0x14058a8b2
   14058a2c4:	cmp    BYTE PTR [rsp+0x90],0x0
   14058a2cc:	jne    0x14058a8b2
   14058a2d2:	mov    r15d,ecx
   14058a2d5:	xor    r13d,r13d
   14058a2d8:	mov    edi,r13d
   14058a2db:	movsx  ebp,WORD PTR [rsi+0x8]
   14058a2df:	mov    r14d,ebp
   14058a2e2:	cmp    ebp,DWORD PTR [rsi+0x14]
   14058a2e5:	jg     0x14058a380
   14058a2eb:	nop    DWORD PTR [rax+rax*1+0x0]
   14058a2f0:	movsx  ebx,WORD PTR [rsi+0xc]
   14058a2f4:	mov    edx,ebx
   14058a2f6:	cmp    ebx,DWORD PTR [rsi+0x18]
   14058a2f9:	jg     0x14058a36f
   14058a2fb:	nop    DWORD PTR [rax+rax*1+0x0]
   14058a300:	mov    r8,QWORD PTR [rsi+0x30]
   14058a304:	test   r8,r8
   14058a307:	je     0x14058a325
   14058a309:	mov    eax,DWORD PTR [rsi+0x14]
   14058a30c:	sub    eax,DWORD PTR [rsi+0x8]
   14058a30f:	inc    eax
   14058a311:	sub    edx,DWORD PTR [rsi+0xc]
   14058a314:	imul   eax,edx
   14058a317:	sub    eax,DWORD PTR [rsi+0x8]
   14058a31a:	add    eax,r14d
   14058a31d:	cdqe
   14058a31f:	cmp    BYTE PTR [rax+r8*1],r13b
   14058a323:	je     0x14058a364
   14058a325:	movzx  r9d,WORD PTR [rsi+0x20]
   14058a32a:	movzx  r8d,bx
   14058a32e:	movzx  edx,bp
   14058a331:	lea    rcx,[rip+0x1e69638]        # 0x1423f3970
   14058a338:	call   0x1414ca6d0
   14058a33d:	test   eax,eax
   14058a33f:	jne    0x14058a364
   14058a341:	mov    DWORD PTR [rsp+0x20],r15d
   14058a346:	movzx  r9d,WORD PTR [rsi+0x20]
   14058a34b:	movzx  r8d,bx
   14058a34f:	movzx  edx,bp
   14058a352:	lea    rcx,[rip+0x1e69617]        # 0x1423f3970
   14058a359:	call   0x1414ca790
   14058a35e:	test   al,al
   14058a360:	je     0x14058a364
   14058a362:	inc    edi
   14058a364:	inc    bx
   14058a367:	movsx  edx,bx
   14058a36a:	cmp    edx,DWORD PTR [rsi+0x18]
   14058a36d:	jle    0x14058a300
   14058a36f:	inc    bp
   14058a372:	movsx  r14d,bp
   14058a376:	cmp    r14d,DWORD PTR [rsi+0x14]
   14058a37a:	jle    0x14058a2f0
