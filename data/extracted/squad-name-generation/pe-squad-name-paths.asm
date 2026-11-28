; Dwarf Fortress 53.17 Steam Windows x64  PE:6aea05a1:02734000
; SHA256 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16
; Image base 0x140000000. Addresses are preferred-image VAs.

; Fortress squad allocation and name before position assignment
140451626:	mov    ecx,0x1e8
14045162b:	call   0x1415530e0
140451630:	mov    QWORD PTR [rbp-0x29],rax
140451634:	xor    edx,edx
140451636:	mov    rcx,rax
140451639:	call   0x141105540
14045163e:	mov    r15,rax
140451641:	mov    QWORD PTR [rbp-0x49],rax
140451645:	mov    r8d,0x3
14045164b:	lea    rdx,[rax+0x8]
14045164f:	mov    rcx,QWORD PTR [rip+0x1f6b012]        # 0x1423bc668
140451656:	call   0x14094b310
14045165b:	lea    r13,[r15+0xa0]
140451662:	mov    QWORD PTR [rbp-0x29],r13
140451666:	movsx  rdx,WORD PTR [rbx+0x278]
14045166e:	mov    rcx,r13
140451671:	call   0x14046e010

; Other callers with a squad object and its language_name at +8
1408bd41a:	mov    ecx,0x1e8
1408bd41f:	call   0x1415530e0
1408bd424:	mov    QWORD PTR [rbp+0x50],rax
1408bd428:	xor    edx,edx
1408bd42a:	mov    rcx,rax
1408bd42d:	call   0x141105540
1408bd432:	mov    r13,rax
1408bd435:	mov    r8d,0x3
1408bd43b:	lea    rdx,[rax+0x8]
1408bd43f:	mov    rcx,rdi
1408bd442:	call   0x14094b310

1409d1ab1:	mov    ecx,0x1e8
1409d1ab6:	call   0x1415530e0
1409d1abb:	mov    QWORD PTR [rsp+0x60],rax
1409d1ac0:	xor    edx,edx
1409d1ac2:	mov    rcx,rax
1409d1ac5:	call   0x141105540
1409d1aca:	mov    r14,rax
1409d1acd:	mov    r8d,0x3
1409d1ad3:	lea    rdx,[rax+0x8]
1409d1ad7:	mov    rcx,r13
1409d1ada:	call   0x14094b310

14150be30:	call   0x14042a920
14150be35:	mov    r15,rax
14150be38:	mov    r8d,0x3
14150be3e:	lea    rdx,[rax+0x8]
14150be42:	mov    rcx,r14
14150be45:	call   0x14094b310

; Species with utterances; translation lookup and name type dispatch
14094b310:	mov    QWORD PTR [rsp+0x10],rsi
14094b315:	push   rdi
14094b316:	sub    rsp,0x30
14094b31a:	movsx  rax,WORD PTR [rcx+0x98]
14094b322:	mov    rdi,rdx
14094b325:	movsx  esi,r8w
14094b329:	test   ax,ax
14094b32c:	js     0x14094b3bb
14094b332:	mov    r9,QWORD PTR [rip+0x1bc3baf]        # 0x14250eee8
14094b339:	mov    rdx,rax
14094b33c:	mov    rax,QWORD PTR [rip+0x1bc3bad]        # 0x14250eef0
14094b343:	sub    rax,r9
14094b346:	sar    rax,0x3
14094b34a:	cmp    rdx,rax
14094b34d:	jae    0x14094b3bb
14094b34f:	mov    rax,QWORD PTR [r9+rdx*8]
14094b353:	cmp    DWORD PTR [rax+0x1b0],0xb
14094b35a:	jle    0x14094b36d
14094b35c:	mov    rax,QWORD PTR [rax+0x1a8]
14094b363:	test   BYTE PTR [rax+0xb],0x1
14094b367:	je     0x14094b36d
14094b369:	mov    al,0x1
14094b36b:	jmp    0x14094b36f
14094b36d:	xor    al,al
14094b36f:	test   al,al
14094b371:	je     0x14094b3bb
14094b373:	mov    rcx,rdi
14094b376:	call   0x140067620
14094b37b:	mov    BYTE PTR [rdi+0x72],0x1
14094b37f:	mov    DWORD PTR [rdi+0x6c],0xffffffff
14094b386:	call   0x14094a690
14094b38b:	cmp    QWORD PTR [rdi+0x18],0xf
14094b390:	jbe    0x14094b3a8
14094b392:	mov    rax,QWORD PTR [rdi]
14094b395:	movzx  ecx,BYTE PTR [rax]
14094b398:	sub    cl,0x20
14094b39b:	mov    BYTE PTR [rax],cl
14094b39d:	mov    rsi,QWORD PTR [rsp+0x48]
14094b3a2:	add    rsp,0x30
14094b3a6:	pop    rdi
14094b3a7:	ret
14094b3a8:	movzx  ecx,BYTE PTR [rdi]
14094b3ab:	sub    cl,0x20
14094b3ae:	mov    BYTE PTR [rdi],cl
14094b3b0:	mov    rsi,QWORD PTR [rsp+0x48]
14094b3b5:	add    rsp,0x30
14094b3b9:	pop    rdi
14094b3ba:	ret

; Major and minor MAIN word selectors
14094b553:	lea    r9,[rbx+0x3d0]
14094b55a:	add    rbx,0x1930
14094b561:	movzx  r8d,si
14094b565:	mov    QWORD PTR [rsp+0x20],rbx
14094b56a:	mov    rcx,rdi
14094b56d:	call   0x140aac300

; Resolve both selector tables from include and exclude symbols
14094d950:	lea    rax,[rsi+rsi*8]
14094d954:	shl    rax,0x5
14094d958:	lea    r8,[rax+0x1930]
14094d95f:	add    r8,r12
14094d962:	lea    rdx,[rax+0x3d0]
14094d969:	add    rdx,r12
14094d96c:	lea    rax,[rbp-0x60]
14094d970:	mov    QWORD PTR [rsp+0x28],rax
14094d975:	lea    rax,[rbp-0x48]
14094d979:	mov    QWORD PTR [rsp+0x20],rax
14094d97e:	lea    r9,[rbp-0x30]
14094d982:	call   0x140d4eb70
14094d987:	nop

; Squad name-editor entry
14044898d:	mov    edx,DWORD PTR [rip+0x1f6d15d]        # 0x1423b5af0
140448993:	lea    rcx,[rip+0x1fab2de]        # 0x1423f3c78
14044899a:	mov    BYTE PTR [rip+0x1f6a0ab],r14b        # 0x1423b2a4c
1404489a1:	call   0x14007f120
1404489a6:	mov    rsi,rax
1404489a9:	test   rax,rax
1404489ac:	je     0x140445ec2
1404489b2:	mov    edi,0x2
1404489b7:	lea    rcx,[rip+0x147acd2]        # 0x1418c3690
1404489be:	mov    edx,edi
1404489c0:	call   0x1403c5a80
1404489c5:	lea    r8,[rbx+0x8]
1404489c9:	mov    QWORD PTR [rsp+0x20],rsi
1404489ce:	mov    edx,0x4
1404489d3:	lea    rcx,[rip+0x147c36e]        # 0x1418c4d48
1404489da:	mov    r9d,0x3
1404489e0:	call   0x1401fef30

; Whole-name random choice
140202405:	mov    rcx,QWORD PTR [rsi+0x8]
140202409:	movzx  r8d,WORD PTR [rsi+0x18]
14020240e:	mov    rax,QWORD PTR [rsi+0x10]
140202412:	test   rcx,rcx
140202415:	je     0x140202424
140202417:	mov    rdx,rax
14020241a:	call   0x14094b310
14020241f:	jmp    0x1402015c0
140202424:	lea    r9,[rsi+0x28]
140202428:	mov    QWORD PTR [rsp+0x20],r9
14020242d:	mov    edx,0xffffffff
140202432:	mov    rcx,rax
140202435:	call   0x140aac300

; Single-slot random choice and write
1402025c7:	mov    rdi,QWORD PTR [rsi+0x150]
1402025ce:	sub    rdi,QWORD PTR [rsi+0x148]
1402025d5:	sar    rdi,0x2
1402025d9:	cmp    edi,0x1
1402025dc:	jbe    0x140202619
1402025de:	call   0x140ece790
1402025e3:	mov    r8d,eax
1402025e6:	mov    eax,0x3
1402025eb:	mul    r8d
1402025ee:	mov    ecx,r8d
1402025f1:	sub    ecx,edx
1402025f3:	shr    ecx,1
1402025f5:	add    ecx,edx
1402025f7:	shr    ecx,0x1e
1402025fa:	imul   ecx,ecx,0x7fffffff
140202600:	sub    r8d,ecx
140202603:	xor    edx,edx
140202605:	mov    eax,0x7fffffff
14020260a:	div    edi
14020260c:	lea    ecx,[rax+0x1]
14020260f:	xor    edx,edx
140202611:	mov    eax,r8d
140202614:	div    ecx
140202616:	mov    r14d,eax
140202619:	movsxd rax,r14d
14020261c:	lea    rdx,[rax*4+0x0]
140202624:	movsxd r8,ebx
140202627:	mov    rax,QWORD PTR [rsi+0x148]
14020262e:	mov    rcx,QWORD PTR [rsi+0x10]
140202632:	mov    eax,DWORD PTR [rdx+rax*1]
140202635:	mov    DWORD PTR [rcx+r8*4+0x40],eax
14020263a:	mov    rax,QWORD PTR [rsi+0x160]
140202641:	mov    rcx,QWORD PTR [rsi+0x10]
140202645:	movzx  eax,WORD PTR [rdx+rax*1]
140202649:	mov    WORD PTR [rcx+r8*2+0x5c],ax

; Clear one slot
140202675:	movsxd rcx,ebx
140202678:	mov    rax,QWORD PTR [rsi+0x10]
14020267c:	mov    DWORD PTR [rax+rcx*4+0x40],0xffffffff
140202684:	mov    rax,QWORD PTR [rsi+0x10]
140202688:	mov    WORD PTR [rax+rcx*2+0x5c],r14w

; Choose one candidate and write the matching POS
140202743:	movsxd rax,r14d
140202746:	lea    r8,[rax*4+0x0]
14020274e:	mov    rax,QWORD PTR [rsi+0x148]
140202755:	movsxd rdx,DWORD PTR [rsi+0x1c]
140202759:	mov    rcx,QWORD PTR [rsi+0x10]
14020275d:	mov    eax,DWORD PTR [r8+rax*1]
140202761:	mov    DWORD PTR [rcx+rdx*4+0x40],eax
140202765:	mov    rax,QWORD PTR [rsi+0x160]
14020276c:	movsxd rdx,DWORD PTR [rsi+0x1c]
140202770:	mov    rcx,QWORD PTR [rsi+0x10]
140202774:	movzx  eax,WORD PTR [r8+rax*1]
140202779:	mov    WORD PTR [rcx+rdx*2+0x5c],ax

; Copy alias into or out of the edit buffer
140447e15:	lea    r8,[r12+0x70]
140447e1a:	movzx  r9d,BYTE PTR [r12+0x68]
140447e20:	lea    rcx,[r13+0x80]
140447e27:	test   r9b,r9b
140447e2a:	mov    rdx,r8
140447e2d:	sete   al
140447e30:	test   r9b,r9b
140447e33:	mov    BYTE PTR [r12+0x68],al
140447e38:	cmove  rdx,rcx
140447e3c:	cmove  rcx,r8
140447e40:	call   0x140070bd0

; Squad card: alias or structured name
14044eb5e:	lea    rbx,[rdi+0x80]
14044eb65:	mov    rcx,rbx
14044eb68:	call   0x140070b50
14044eb6d:	test   al,al
14044eb6f:	jne    0x14044eb82
14044eb71:	mov    rdx,rbx
14044eb74:	lea    rcx,[rbp+0x130]
14044eb7b:	call   0x140070bd0
14044eb80:	jmp    0x14044eb98
14044eb82:	lea    rcx,[rdi+0x8]
14044eb86:	xor    r9d,r9d
14044eb89:	mov    r8b,0x1
14044eb8c:	lea    rdx,[rbp+0x130]
14044eb93:	call   0x140aae180

; Same card: order status string
14044ed47:	lea    rdx,[rip+0x120a54a]        # 0x141659298
14044ed4e:	jmp    0x14044ed57
14044ed50:	lea    rdx,[rip+0x120a529]        # 0x141659280
14044ed57:	lea    rcx,[rbp+0x110]
14044ed5e:	call   0x140070bb0

; Two-level dispatch tables from the image (little endian RVA targets).
; entity dispatch, type 3: remap 19, VA 0x14094b553
; generator, type 3: remap 3, VA 0x140aad3b6
; entity dispatch, type 17: remap 3, VA 0x14094b4f3
; generator, type 17: remap 2, VA 0x140aad227
