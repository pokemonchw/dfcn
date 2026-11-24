; Site savagery, one roll per group, strict comparison with outdoor irritation
   140abcb6a:	xor    dil,dil
   140abcb6d:	mov    DWORD PTR [rbp-0x58],edi
   140abcb70:	mov    rcx,QWORD PTR [rip+0x18ffaf9]        # 0x1423bc670
   140abcb77:	movsx  r8,WORD PTR [rcx+0x82]
   140abcb7f:	mov    rax,QWORD PTR [rip+0x1a51452]        # 0x14250dfd8
   140abcb86:	mov    rdx,QWORD PTR [rax+0x2b0]
   140abcb8d:	movsx  rax,WORD PTR [rcx+0x84]
   140abcb95:	imul   rcx,rax,0x70
   140abcb99:	mov    rax,QWORD PTR [rdx+r8*8]
   140abcb9d:	cmp    WORD PTR [rax+rcx*1+0x3e],0x42
   140abcba3:	jl     0x140abcc17
   140abcba5:	mov    ebx,DWORD PTR [rip+0x18ff949]        # 0x1423bc4f4
   140abcbab:	inc    ebx
   140abcbad:	cmp    ebx,0x1
   140abcbb0:	ja     0x140abcbc4
   140abcbb2:	mov    eax,r14d
   140abcbb5:	jmp    0x140abcbfc
   140abcbb7:	mov    r13,QWORD PTR [rbp-0x78]
   140abcbbb:	jmp    0x140abcb65
   140abcbbd:	mov    r15,QWORD PTR [rsp+0x78]
   140abcbc2:	jmp    0x140abcb6a
   140abcbc4:	call   0x140ece790
   140abcbc9:	mov    r8d,eax
   140abcbcc:	mov    eax,0x3
   140abcbd1:	mul    r8d
   140abcbd4:	mov    ecx,r8d
   140abcbd7:	sub    ecx,edx
   140abcbd9:	shr    ecx,1
   140abcbdb:	add    ecx,edx
   140abcbdd:	shr    ecx,0x1e
   140abcbe0:	imul   ecx,ecx,0x80000001
   140abcbe6:	add    r8d,ecx
   140abcbe9:	xor    edx,edx
   140abcbeb:	mov    eax,0x7fffffff
   140abcbf0:	div    ebx
   140abcbf2:	lea    ecx,[rax+0x1]
   140abcbf5:	xor    edx,edx
   140abcbf7:	mov    eax,r8d
   140abcbfa:	div    ecx
   140abcbfc:	add    eax,DWORD PTR [rip+0x18ff8f6]        # 0x1423bc4f8
   140abcc02:	movzx  edi,dil
   140abcc06:	cmp    eax,DWORD PTR [rip+0x18f6ca8]        # 0x1423b38b4
   140abcc0c:	mov    eax,0x1
   140abcc11:	cmovl  edi,eax
   140abcc14:	mov    DWORD PTR [rbp-0x58],edi
   140abcc17:	mov    edi,r14d

; Apply the shared roll to eligible newly created animals
   140abcec7:	movzx  r8d,BYTE PTR [rbp+0xf8]
   140abcecf:	cmp    r8b,0x3
   140abced3:	je     0x140abcfb1
   140abced9:	cmp    r8b,0x2
   140abcedd:	je     0x140abcf14
   140abcedf:	cmp    DWORD PTR [rip+0x18f69ce],0x0        # 0x1423b38b4
   140abcee6:	jle    0x140abcf14
   140abcee8:	mov    rax,QWORD PTR [rbp-0x78]
   140abceec:	cmp    BYTE PTR [rax],0x0
   140abceef:	jne    0x140abcf14
   140abcef1:	cmp    WORD PTR [rax+0x14],0xffff
   140abcef6:	jne    0x140abcf14
   140abcef8:	cmp    DWORD PTR [rax+0x18],0xffffffff
   140abcefc:	jne    0x140abcf14
   140abcefe:	cmp    DWORD PTR [rax+0x1c],0xffffffff
   140abcf02:	jne    0x140abcf14
   140abcf04:	cmp    BYTE PTR [rbp-0x58],0x0
   140abcf08:	je     0x140abcf14
   140abcf0a:	or     DWORD PTR [rbx+0x11c],0x1000
   140abcf14:	test   edi,edi

; Felled tree, choose cavern or surface counter and cap the increase
   140de56f1:	inc    DWORD PTR [rip+0x15ce1b9]        # 0x1423b38b0
   140de56f7:	movzx  r9d,r12w
   140de56fb:	movzx  r8d,r15w
   140de56ff:	movzx  edx,r14w
   140de5703:	lea    rcx,[rip+0x160e266]        # 0x1423f3970
   140de570a:	call   0x1414bbbe0
   140de570f:	test   rax,rax
   140de5712:	je     0x140de5747
   140de5714:	mov    rdx,QWORD PTR [rax]
   140de5717:	mov    rcx,rax
   140de571a:	call   QWORD PTR [rdx+0x30]
   140de571d:	test   rax,rax
   140de5720:	je     0x140de57dd
   140de5726:	mov    ecx,DWORD PTR [rax+0x20]
   140de5729:	add    ecx,0x64
   140de572c:	mov    DWORD PTR [rax+0x20],ecx
   140de572f:	cmp    ecx,0x186a0
   140de5735:	jle    0x140de57dd
   140de573b:	mov    DWORD PTR [rax+0x20],0x186a0
   140de5742:	jmp    0x140de57dd
   140de5747:	test   r14w,r14w
   140de574b:	js     0x140de57bd
   140de574d:	movsx  eax,r14w
   140de5751:	cmp    eax,edi
   140de5753:	jge    0x140de57bd
   140de5755:	test   r15w,r15w
   140de5759:	js     0x140de57bd
   140de575b:	movsx  eax,r15w
   140de575f:	mov    r8d,eax
   140de5762:	cmp    eax,esi
   140de5764:	jge    0x140de57bd
   140de5766:	test   r12w,r12w
   140de576a:	js     0x140de57bd
   140de576c:	movsx  eax,r12w
   140de5770:	cmp    eax,ebp
   140de5772:	jge    0x140de57bd
   140de5774:	test   rbx,rbx
   140de5777:	je     0x140de57bd
   140de5779:	movsx  rax,r14w
   140de577d:	shr    rax,0x4
   140de5781:	movsx  rdx,r15w
   140de5785:	shr    rdx,0x4
   140de5789:	mov    rax,QWORD PTR [rbx+rax*8]
   140de578d:	movsx  rcx,r12w
   140de5791:	mov    rax,QWORD PTR [rax+rdx*8]
   140de5795:	mov    rdx,QWORD PTR [rax+rcx*8]
   140de5799:	test   rdx,rdx
   140de579c:	je     0x140de57bd
   140de579e:	and    r14d,0xf
   140de57a2:	mov    eax,r14d
   140de57a5:	shl    rax,0x4
   140de57a9:	and    r8d,0xf
   140de57ad:	add    rax,r8
   140de57b0:	test   DWORD PTR [rdx+rax*4+0x2a0],0x8000
   140de57bb:	jne    0x140de57dd
   140de57bd:	mov    eax,DWORD PTR [rip+0x15ce0f1]        # 0x1423b38b4
   140de57c3:	add    eax,0x64
   140de57c6:	mov    DWORD PTR [rip+0x15ce0e8],eax        # 0x1423b38b4
   140de57cc:	cmp    eax,0x186a0
   140de57d1:	jle    0x140de57dd
   140de57d3:	mov    DWORD PTR [rip+0x15ce0d7],0x186a0        # 0x1423b38b4
   140de57dd:	add    rsp,0x68

; Choose an enemy preset and write the hard preset
   141089560:	mov    edx,DWORD PTR [rcx]
   141089562:	cmp    edx,0x3
   141089565:	je     0x1410899c5
   14108956b:	test   edx,edx
   14108956d:	je     0x14108984f
   141089573:	sub    edx,0x1
   141089576:	je     0x1410896e5
   14108957c:	cmp    edx,0x1
   14108957f:	jne    0x1410899c5
   141089585:	xor    eax,eax
   141089587:	mov    DWORD PTR [rcx+0x44],0x8
   14108958e:	mov    DWORD PTR [rcx+0x48],0x2710
   141089595:	mov    DWORD PTR [rcx+0x4c],0x7d0
   14108959c:	mov    DWORD PTR [rcx+0x50],0x28
   1410895a3:	mov    QWORD PTR [rcx+0x54],0x2710
   1410895ab:	mov    DWORD PTR [rcx+0x5c],0x64
   1410895b2:	mov    DWORD PTR [rcx+0x60],0x8

; Write the normal preset
   1410896e5:	xor    eax,eax
   1410896e7:	mov    DWORD PTR [rcx+0x44],0xa
   1410896ee:	mov    DWORD PTR [rcx+0x48],0x2710
   1410896f5:	mov    DWORD PTR [rcx+0x4c],0x1388
   1410896fc:	mov    DWORD PTR [rcx+0x50],0x28
   141089703:	mov    DWORD PTR [rcx+0x54],0x2710
   14108970a:	mov    DWORD PTR [rcx+0x58],0x7d0
   141089711:	mov    DWORD PTR [rcx+0x5c],0x1f4
   141089718:	mov    DWORD PTR [rcx+0x60],0xa

; Fishing, account for irritation before testing the candidate list
   14135c36e:	movzx  r9d,r14w
   14135c372:	movzx  r8d,r13w
   14135c376:	movzx  edx,di
   14135c379:	lea    rcx,[rip+0x10975f0]        # 0x1423f3970
   14135c380:	call   0x1414bbbe0
   14135c385:	test   rax,rax
   14135c388:	je     0x14135c3b1
   14135c38a:	mov    rdx,QWORD PTR [rax]
   14135c38d:	mov    rcx,rax
   14135c390:	call   QWORD PTR [rdx+0x30]
   14135c393:	test   rax,rax
   14135c396:	je     0x14135c3ed
   14135c398:	mov    ecx,DWORD PTR [rax+0x20]
   14135c39b:	inc    ecx
   14135c39d:	mov    DWORD PTR [rax+0x20],ecx
   14135c3a0:	cmp    ecx,0x186a0
   14135c3a6:	jle    0x14135c3ed
   14135c3a8:	mov    DWORD PTR [rax+0x20],0x186a0
   14135c3af:	jmp    0x14135c3ed
   14135c3b1:	movzx  r9d,r14w
   14135c3b5:	movzx  r8d,r13w
   14135c3b9:	movzx  edx,di
   14135c3bc:	lea    rcx,[rip+0x10975ad]        # 0x1423f3970
   14135c3c3:	call   0x14007f270
   14135c3c8:	bt     eax,0xf
   14135c3cc:	jb     0x14135c3ed
   14135c3ce:	mov    eax,DWORD PTR [rip+0x10574e0]        # 0x1423b38b4
   14135c3d4:	inc    eax
   14135c3d6:	mov    DWORD PTR [rip+0x10574d8],eax        # 0x1423b38b4
   14135c3dc:	cmp    eax,0x186a0
   14135c3e1:	jle    0x14135c3ed
   14135c3e3:	mov    DWORD PTR [rip+0x10574c7],0x186a0        # 0x1423b38b4
   14135c3ed:	mov    rdi,QWORD PTR [rbp-0x30]
   14135c3f1:	sub    rsi,rdi
   14135c3f4:	sar    rsi,1
   14135c3f7:	jne    0x14135cd90
   14135c3fd:	mov    rdx,QWORD PTR [rip+0x105d72c]        # 0x1423b9b30

; Annual reduction of the surface counter and clamp at zero
   1414643e4:	cmp    BYTE PTR [rsp+0x48],0x0
   1414643e9:	jne    0x141463ac5
   1414643ef:	mov    eax,DWORD PTR [rip+0xf4f4bf]        # 0x1423b38b4
   1414643f5:	sub    eax,DWORD PTR [rip+0xf58101]        # 0x1423bc4fc
   1414643fb:	mov    DWORD PTR [rip+0xf4f4b3],eax        # 0x1423b38b4
   141464401:	jns    0x141464409
   141464403:	mov    DWORD PTR [rip+0xf4f4ab],esi        # 0x1423b38b4
   141464409:	mov    edi,0xffff8ad0

