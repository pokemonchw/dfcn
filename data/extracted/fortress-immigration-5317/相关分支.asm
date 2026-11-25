
; 建堡死寂警告，遍历母文明的 nemesis   RVA 0x106d2ea

000000014106d2ea <.text+0x106c2ea>:
   14106d2ea:	mov    rax,QWORD PTR [rip+0x138698f]        # 0x1423f3c80
   14106d2f1:	sub    rax,r13
   14106d2f4:	test   rax,0xfffffffffffffff8
   14106d2fa:	je     0x14106d347
   14106d2fc:	mov    ecx,DWORD PTR [rip+0x13487ee]        # 0x1423b5af0
   14106d302:	cmp    ecx,0xffffffff
   14106d305:	je     0x14106d347
   14106d307:	lea    rdx,[rip+0x138696a]        # 0x1423f3c78
   14106d30e:	call   0x1400bb6d0
   14106d313:	test   rax,rax
   14106d316:	je     0x14106d347
   14106d318:	mov    rcx,QWORD PTR [rax+0x1450]
   14106d31f:	mov    rax,QWORD PTR [rax+0x1458]
   14106d326:	cmp    rcx,rax
   14106d329:	jae    0x14106d33f
   14106d32b:	mov    rdx,QWORD PTR [rcx]
   14106d32e:	mov    r8,QWORD PTR [rdx+0x10]
   14106d332:	cmp    DWORD PTR [r8+0x30],0xffffffff
   14106d337:	je     0x14106d347
   14106d339:	add    rcx,0x8
   14106d33d:	jmp    0x14106d326
   14106d33f:	or     WORD PTR [rbx+0x2aa],0x40

; 世界生成判断文明死灭   RVA 0xf8e141

0000000140f8e141 <.text+0xf8d141>:
   140f8e141:	lea    rcx,[rip+0x1580a98]        # 0x14250ebe0
   140f8e148:	call   0x140070480
   140f8e14d:	mov    r14,rax
   140f8e150:	sub    r14d,0x1
   140f8e154:	js     0x140f890a1
   140f8e15a:	movsxd r12,r14d
   140f8e15d:	nop    DWORD PTR [rax]
   140f8e160:	mov    rdx,r12
   140f8e163:	lea    rcx,[rip+0x1580a76]        # 0x14250ebe0
   140f8e16a:	call   0x140070850
   140f8e16f:	mov    r15,QWORD PTR [rax]
   140f8e172:	lea    rcx,[r15+0x1438]
   140f8e179:	call   0x140070480
   140f8e17e:	mov    rbx,rax
   140f8e181:	sub    ebx,0x1
   140f8e184:	js     0x140f8e1b0
   140f8e186:	data16 nop WORD PTR [rax+rax*1+0x0]
   140f8e190:	mov    edx,ebx
   140f8e192:	lea    rcx,[r15+0x1438]
   140f8e199:	call   0x140070850
   140f8e19e:	mov    rcx,QWORD PTR [rax]
   140f8e1a1:	cmp    DWORD PTR [rcx+0x30],0xffffffff
   140f8e1a5:	je     0x140f8e28f
   140f8e1ab:	sub    ebx,0x1
   140f8e1ae:	jns    0x140f8e190
   140f8e1b0:	lea    rcx,[r15+0x100]
   140f8e1b7:	call   0x1400709a0
   140f8e1bc:	mov    rbx,rax
   140f8e1bf:	sub    ebx,0x1
   140f8e1c2:	js     0x140f8e282
   140f8e1c8:	nop    DWORD PTR [rax+rax*1+0x0]
   140f8e1d0:	movsxd rdx,ebx
   140f8e1d3:	lea    rcx,[r15+0x100]
   140f8e1da:	call   0x140070990
   140f8e1df:	mov    edx,DWORD PTR [rax]
   140f8e1e1:	lea    rcx,[rip+0x1465788]        # 0x1423f3970
   140f8e1e8:	call   0x14010c740
   140f8e1ed:	test   rax,rax
   140f8e1f0:	je     0x140f8e279
   140f8e1f6:	lea    rdi,[rax+0x90]
   140f8e1fd:	mov    rcx,rdi
   140f8e200:	call   0x1400709a0
   140f8e205:	test   rax,rax
   140f8e208:	je     0x140f8e279
   140f8e20a:	lea    rdx,[rbp-0x10]
   140f8e20e:	mov    rcx,rdi
   140f8e211:	call   0x140070870
   140f8e216:	lea    rdx,[rbp-0x18]
   140f8e21a:	mov    rcx,rdi
   140f8e21d:	call   0x140070860
   140f8e222:	lea    r8,[rbp-0x18]
   140f8e226:	lea    rdx,[rsp+0x58]
   140f8e22b:	lea    rcx,[rbp-0x10]
   140f8e22f:	call   0x140070450
   140f8e234:	xor    edx,edx
   140f8e236:	movzx  ecx,BYTE PTR [rax]
   140f8e239:	call   0x140066de0
   140f8e23e:	test   al,al
   140f8e240:	je     0x140f8e279
   140f8e242:	lea    rcx,[rbp-0x10]
   140f8e246:	call   0x140070440
   140f8e24b:	cmp    DWORD PTR [rax],0x0
   140f8e24e:	jg     0x140f8e282
   140f8e250:	lea    rcx,[rbp-0x10]
   140f8e254:	call   0x140070980
   140f8e259:	lea    r8,[rbp-0x18]
   140f8e25d:	lea    rdx,[rsp+0x58]
   140f8e262:	lea    rcx,[rbp-0x10]
   140f8e266:	call   0x140070450
   140f8e26b:	xor    edx,edx
   140f8e26d:	movzx  ecx,BYTE PTR [rax]
   140f8e270:	call   0x140066de0
   140f8e275:	test   al,al
   140f8e277:	jne    0x140f8e242
   140f8e279:	sub    ebx,0x1
   140f8e27c:	jns    0x140f8e1d0
   140f8e282:	cmp    ebx,0xffffffff
   140f8e285:	jne    0x140f8e28f
   140f8e287:	mov    rcx,r15
   140f8e28a:	call   0x1409af4d0
   140f8e28f:	dec    r12
   140f8e292:	sub    r14d,0x1
   140f8e296:	jns    0x140f8e160

; 将文明标记为 DEAD（写入指令）   RVA 0x9af5a0

00000001409af5a0 <.text+0x9ae5a0>:
   1409af5a0:	or     DWORD PTR [r13+0x9c],0x10

; 每 10 个游戏刻运行要塞事件   RVA 0x8cf9c4

00000001408cf9c4 <.text+0x8ce9c4>:
   1408cf9c4:	mov    eax,0x66666667
   1408cf9c9:	imul   ecx
   1408cf9cb:	sar    edx,0x2
   1408cf9ce:	mov    eax,edx
   1408cf9d0:	shr    eax,0x1f
   1408cf9d3:	add    edx,eax
   1408cf9d5:	lea    eax,[rdx+rdx*4]
   1408cf9d8:	add    eax,eax
   1408cf9da:	xor    r15d,r15d
   1408cf9dd:	cmp    ecx,eax
   1408cf9df:	jne    0x1408cf3be
   1408cf9e5:	mov    esi,r15d
   1408cf9e8:	mov    r14d,0x13
   1408cf9ee:	xchg   ax,ax
   1408cf9f0:	lea    rdx,[rsi+0x1]
   1408cf9f4:	lea    rcx,[rip+0x1de8545]        # 0x1426b7f40
   1408cf9fb:	call   0x140070880
   1408cfa00:	mov    ebx,DWORD PTR [rax]
   1408cfa02:	mov    rdx,rsi
   1408cfa05:	lea    rcx,[rip+0x1de8534]        # 0x1426b7f40
   1408cfa0c:	call   0x140070880
   1408cfa11:	mov    DWORD PTR [rax],ebx
   1408cfa13:	inc    rsi
   1408cfa16:	sub    r14,0x1
   1408cfa1a:	jne    0x1408cf9f0
   1408cfa1c:	mov    edx,0x13
   1408cfa21:	lea    rcx,[rip+0x1de8518]        # 0x1426b7f40
   1408cfa28:	call   0x140070880
   1408cfa2d:	mov    DWORD PTR [rax],r15d
   1408cfa30:	mov    rcx,r13
   1408cfa33:	call   0x1408d7bb0
   1408cfa38:	call   0x140e517f0

; 移民边缘格与地图连通区的筛选、回退   RVA 0xe7de74

0000000140e7de74 <.text+0xe7ce74>:
   140e7de74:	movzx  r9d,WORD PTR [rip+0x153e290]        # 0x1423bc10c
   140e7de7c:	lea    rcx,[rip+0x1575aed]        # 0x1423f3970
   140e7de83:	movzx  r8d,WORD PTR [rip+0x153e27d]        # 0x1423bc108
   140e7de8b:	movzx  edx,WORD PTR [rip+0x153e272]        # 0x1423bc104
   140e7de92:	mov    QWORD PTR [rsp+0x80],rbx
   140e7de9a:	mov    QWORD PTR [rsp+0x30],rdi
   140e7de9f:	call   0x14010c680
   140e7dea4:	lea    rsi,[r15+0x6280]
   140e7deab:	xor    r13d,r13d
   140e7deae:	mov    r8,QWORD PTR [rsi+0x8]
   140e7deb2:	lea    rdi,[r15+0x6298]
   140e7deb9:	mov    rdx,QWORD PTR [rsi]
   140e7debc:	mov    rcx,r8
   140e7debf:	sub    rcx,rdx
   140e7dec2:	mov    r14d,eax
   140e7dec5:	sar    rcx,1
   140e7dec8:	mov    ebp,r13d
   140e7decb:	je     0x140e7dfcc
   140e7ded1:	mov    ebx,r13d
   140e7ded4:	nop    DWORD PTR [rax+0x0]
   140e7ded8:	nop    DWORD PTR [rax+rax*1+0x0]
   140e7dee0:	mov    rax,QWORD PTR [r15+0x62b0]
   140e7dee7:	lea    rcx,[rip+0x1575a82]        # 0x1423f3970
   140e7deee:	movzx  edx,WORD PTR [rbx+rdx*1]
   140e7def2:	movzx  r9d,WORD PTR [rbx+rax*1]
   140e7def7:	mov    rax,QWORD PTR [rdi]
   140e7defa:	movzx  r8d,WORD PTR [rbx+rax*1]
   140e7deff:	call   0x14010c680
   140e7df04:	cmp    eax,r14d
   140e7df07:	jne    0x140e7dfaa
   140e7df0d:	mov    r8,QWORD PTR [rsi]
   140e7df10:	lea    rcx,[r15+0x6340]
   140e7df17:	mov    rdx,QWORD PTR [r15+0x6348]
   140e7df1e:	add    r8,rbx
   140e7df21:	cmp    rdx,QWORD PTR [r15+0x6350]
   140e7df28:	je     0x140e7df3b
   140e7df2a:	movzx  eax,WORD PTR [r8]
   140e7df2e:	mov    WORD PTR [rdx],ax
   140e7df31:	add    QWORD PTR [r15+0x6348],0x2
   140e7df39:	jmp    0x140e7df40
   140e7df3b:	call   0x140072670
   140e7df40:	mov    r8,QWORD PTR [rdi]
   140e7df43:	lea    rcx,[r15+0x63d0]
   140e7df4a:	mov    rdx,QWORD PTR [r15+0x63d8]
   140e7df51:	add    r8,rbx
   140e7df54:	cmp    rdx,QWORD PTR [r15+0x63e0]
   140e7df5b:	je     0x140e7df6e
   140e7df5d:	movzx  eax,WORD PTR [r8]
   140e7df61:	mov    WORD PTR [rdx],ax
   140e7df64:	add    QWORD PTR [r15+0x63d8],0x2
   140e7df6c:	jmp    0x140e7df73
   140e7df6e:	call   0x140072670
   140e7df73:	mov    r8,QWORD PTR [r15+0x62b0]
   140e7df7a:	lea    rcx,[r15+0x6460]
   140e7df81:	mov    rdx,QWORD PTR [r15+0x6468]
   140e7df88:	add    r8,rbx
   140e7df8b:	cmp    rdx,QWORD PTR [r15+0x6470]
   140e7df92:	je     0x140e7dfa5
   140e7df94:	movzx  eax,WORD PTR [r8]
   140e7df98:	mov    WORD PTR [rdx],ax
   140e7df9b:	add    QWORD PTR [r15+0x6468],0x2
   140e7dfa3:	jmp    0x140e7dfaa
   140e7dfa5:	call   0x140072670
   140e7dfaa:	mov    r8,QWORD PTR [rsi+0x8]
   140e7dfae:	inc    ebp
   140e7dfb0:	mov    rdx,QWORD PTR [rsi]
   140e7dfb3:	mov    rcx,r8
   140e7dfb6:	sub    rcx,rdx
   140e7dfb9:	movsxd rax,ebp
   140e7dfbc:	sar    rcx,1
   140e7dfbf:	add    rbx,0x2
   140e7dfc3:	cmp    rax,rcx
   140e7dfc6:	jb     0x140e7dee0
   140e7dfcc:	lea    rcx,[r15+0x6340]
   140e7dfd3:	mov    rax,QWORD PTR [rcx+0x8]
   140e7dfd7:	sub    rax,QWORD PTR [rcx]
   140e7dfda:	test   rax,0xfffffffffffffffe
   140e7dfe0:	jne    0x140e7e03c
   140e7dfe2:	cmp    rcx,rsi
   140e7dfe5:	je     0x140e7dff9
   140e7dfe7:	sub    r8,rdx
   140e7dfea:	sar    r8,1
   140e7dfed:	call   0x140071af0
   140e7dff2:	lea    rdi,[r15+0x6298]
   140e7dff9:	lea    rcx,[r15+0x63d0]
   140e7e000:	cmp    rcx,rdi
   140e7e003:	je     0x140e7e017
   140e7e005:	mov    rdx,QWORD PTR [rdi]
   140e7e008:	mov    r8,QWORD PTR [rdi+0x8]
   140e7e00c:	sub    r8,rdx
   140e7e00f:	sar    r8,1
   140e7e012:	call   0x140071af0
   140e7e017:	lea    r8,[r15+0x62b0]
   140e7e01e:	lea    rcx,[r15+0x6460]
   140e7e025:	cmp    rcx,r8
   140e7e028:	je     0x140e7e03c
   140e7e02a:	mov    rdx,QWORD PTR [r8]
   140e7e02d:	mov    r8,QWORD PTR [r8+0x8]
   140e7e031:	sub    r8,rdx
   140e7e034:	sar    r8,1
   140e7e037:	call   0x140071af0

; 移民在地图边缘挑选进场位置   RVA 0xe5e9c0

0000000140e5e9c0 <.text+0xe5d9c0>:
   140e5e9c0:	mov    QWORD PTR [rsp+0x8],rbx
   140e5e9c5:	mov    QWORD PTR [rsp+0x10],rbp
   140e5e9ca:	mov    QWORD PTR [rsp+0x18],rsi
   140e5e9cf:	mov    QWORD PTR [rsp+0x20],rdi
   140e5e9d4:	push   r12
   140e5e9d6:	push   r14
   140e5e9d8:	push   r15
   140e5e9da:	sub    rsp,0x30
   140e5e9de:	mov    rax,QWORD PTR [rcx+0x6348]
   140e5e9e5:	mov    rbp,r9
   140e5e9e8:	sub    rax,QWORD PTR [rcx+0x6340]
   140e5e9ef:	mov    r14,r8
   140e5e9f2:	mov    r15,rdx
   140e5e9f5:	mov    rdi,rcx
   140e5e9f8:	test   rax,0xfffffffffffffffe
   140e5e9fe:	je     0x140e5ead4
   140e5ea04:	xor    r12d,r12d
   140e5ea07:	mov    esi,r12d
   140e5ea0a:	nop    WORD PTR [rax+rax*1+0x0]
   140e5ea10:	cmp    esi,0x3e8
   140e5ea16:	je     0x140e5ead4
   140e5ea1c:	mov    rbx,QWORD PTR [rdi+0x6348]
   140e5ea23:	sub    rbx,QWORD PTR [rdi+0x6340]
   140e5ea2a:	sar    rbx,1
   140e5ea2d:	cmp    ebx,0x1
   140e5ea30:	ja     0x140e5ea37
   140e5ea32:	mov    eax,r12d
   140e5ea35:	jmp    0x140e5ea6f
   140e5ea37:	call   0x140ece790
   140e5ea3c:	mov    r8d,eax
   140e5ea3f:	mov    eax,0x3
   140e5ea44:	mul    r8d
   140e5ea47:	mov    eax,r8d
   140e5ea4a:	sub    eax,edx
   140e5ea4c:	shr    eax,1
   140e5ea4e:	add    eax,edx
   140e5ea50:	xor    edx,edx
   140e5ea52:	shr    eax,0x1e
   140e5ea55:	imul   eax,eax,0x7fffffff
   140e5ea5b:	sub    r8d,eax
   140e5ea5e:	mov    eax,0x7fffffff
   140e5ea63:	div    ebx
   140e5ea65:	xor    edx,edx
   140e5ea67:	lea    ecx,[rax+0x1]
   140e5ea6a:	mov    eax,r8d
   140e5ea6d:	div    ecx
   140e5ea6f:	movsx  rax,ax
   140e5ea73:	inc    esi
   140e5ea75:	mov    DWORD PTR [rsp+0x28],r12d
   140e5ea7a:	mov    BYTE PTR [rsp+0x20],r12b
   140e5ea7f:	lea    r9,[rax+rax*1]
   140e5ea83:	mov    rax,QWORD PTR [rdi+0x6340]
   140e5ea8a:	movzx  ecx,WORD PTR [r9+rax*1]
   140e5ea8f:	mov    WORD PTR [r15],cx
   140e5ea93:	mov    rax,QWORD PTR [rdi+0x63d0]
   140e5ea9a:	movzx  ecx,WORD PTR [r9+rax*1]
   140e5ea9f:	mov    WORD PTR [r14],cx
   140e5eaa3:	lea    rcx,[rip+0x1594ec6]        # 0x1423f3970
   140e5eaaa:	mov    rax,QWORD PTR [rdi+0x6460]
   140e5eab1:	movzx  r9d,WORD PTR [r9+rax*1]
   140e5eab6:	mov    WORD PTR [rbp+0x0],r9w
   140e5eabb:	movzx  r8d,WORD PTR [r14]
   140e5eabf:	movzx  edx,WORD PTR [r15]
   140e5eac3:	call   0x1414c7110
   140e5eac8:	test   al,al
   140e5eaca:	je     0x140e5ea10
   140e5ead0:	mov    al,0x1
   140e5ead2:	jmp    0x140e5ead6
   140e5ead4:	xor    al,al
   140e5ead6:	mov    rbx,QWORD PTR [rsp+0x50]
   140e5eadb:	mov    rbp,QWORD PTR [rsp+0x58]
   140e5eae0:	mov    rsi,QWORD PTR [rsp+0x60]
   140e5eae5:	mov    rdi,QWORD PTR [rsp+0x68]
   140e5eaea:	add    rsp,0x30
   140e5eaee:	pop    r15
   140e5eaf0:	pop    r14
   140e5eaf2:	pop    r12
   140e5eaf4:	ret

; 进场地格判定的代码部分，调用时两个选项都是 0   RVA 0x14c7110

00000001414c7110 <.text+0x14c6110>:
   1414c7110:	mov    QWORD PTR [rsp+0x18],rbx
   1414c7115:	mov    WORD PTR [rsp+0x20],r9w
   1414c711b:	mov    WORD PTR [rsp+0x10],dx
   1414c7120:	mov    QWORD PTR [rsp+0x8],rcx
   1414c7125:	push   rbp
   1414c7126:	push   rsi
   1414c7127:	push   rdi
   1414c7128:	push   r12
   1414c712a:	push   r13
   1414c712c:	push   r14
   1414c712e:	push   r15
   1414c7130:	sub    rsp,0x60
   1414c7134:	movsx  rsi,dx
   1414c7138:	mov    r10,rcx
   1414c713b:	movsx  r12,r9w
   1414c713f:	movsx  r13,r8w
   1414c7143:	test   si,si
   1414c7146:	js     0x1414c744d
   1414c714c:	mov    r15d,esi
   1414c714f:	cmp    esi,DWORD PTR [rcx+0x116bec]
   1414c7155:	jge    0x1414c744d
   1414c715b:	test   r13w,r13w
   1414c715f:	js     0x1414c744d
   1414c7165:	mov    r14d,r13d
   1414c7168:	cmp    r13d,DWORD PTR [rcx+0x116bf0]
   1414c716f:	jge    0x1414c744d
   1414c7175:	test   r12w,r12w
   1414c7179:	js     0x1414c744d
   1414c717f:	cmp    r12d,DWORD PTR [rcx+0x116bf4]
   1414c7186:	jge    0x1414c744d
   1414c718c:	mov    rcx,QWORD PTR [rcx+0x116bb8]
   1414c7193:	test   rcx,rcx
   1414c7196:	je     0x1414c744d
   1414c719c:	mov    rax,rsi
   1414c719f:	mov    rdx,r13
   1414c71a2:	shr    rax,0x4
   1414c71a6:	shr    rdx,0x4
   1414c71aa:	mov    rax,QWORD PTR [rcx+rax*8]
   1414c71ae:	mov    rax,QWORD PTR [rax+rdx*8]
   1414c71b2:	mov    r8,QWORD PTR [rax+r12*8]
   1414c71b6:	test   r8,r8
   1414c71b9:	je     0x1414c744d
   1414c71bf:	mov    ebp,DWORD PTR [rsp+0xc8]
   1414c71c6:	bt     ebp,0x18
   1414c71ca:	jb     0x1414c7ae1
   1414c71d0:	movzx  edi,BYTE PTR [rsp+0xc0]
   1414c71d8:	xor    al,al
   1414c71da:	movzx  r9d,al
   1414c71de:	mov    edx,r15d
   1414c71e1:	mov    eax,0x1
   1414c71e6:	mov    ecx,r14d
   1414c71e9:	cmp    DWORD PTR [rip+0x3f7049],eax        # 0x1418be238
   1414c71ef:	cmove  r9d,eax
   1414c71f3:	and    ecx,0xf
   1414c71f6:	and    edx,0xf
   1414c71f9:	lea    rax,[rdx+0x5]
   1414c71fd:	add    rdx,rdx
   1414c7200:	shl    rax,0x4
   1414c7204:	add    rax,rcx
   1414c7207:	movzx  eax,WORD PTR [r8+rax*2]
   1414c720c:	mov    WORD PTR [rsp+0x52],ax
   1414c7211:	lea    rax,[rcx+rdx*8]
   1414c7215:	mov    ecx,DWORD PTR [r8+rax*4+0x6a0]
   1414c721d:	mov    edx,DWORD PTR [r8+rax*4+0x2a0]
   1414c7225:	and    ecx,0x7
   1414c7228:	mov    DWORD PTR [rsp+0x58],edx
   1414c722c:	mov    DWORD PTR [rsp+0x54],ecx
   1414c7230:	test   dil,dil
   1414c7233:	je     0x1414c724a
   1414c7235:	bt     edx,0x9
   1414c7239:	jae    0x1414c724a
   1414c723b:	test   r9b,r9b
   1414c723e:	jne    0x1414c724a
   1414c7240:	test   bpl,0x20
   1414c7244:	je     0x1414c744d
   1414c724a:	cmp    ecx,0x7
   1414c724d:	jne    0x1414c72a0
   1414c724f:	test   dil,dil
   1414c7252:	je     0x1414c725e
   1414c7254:	test   bpl,0x10
   1414c7258:	jne    0x1414c73a9
   1414c725e:	lea    rbx,[r10+0x1ca18]
   1414c7265:	movzx  r9d,r12w
   1414c7269:	mov    rcx,rbx
   1414c726c:	movzx  r8d,r13w
   1414c7270:	movzx  edx,si
   1414c7273:	call   0x1405c1a20
   1414c7278:	test   al,al
   1414c727a:	jne    0x1414c744d
   1414c7280:	movzx  r8d,r13w
   1414c7284:	movzx  edx,si
   1414c7287:	mov    rcx,rbx
   1414c728a:	call   0x1405c1940
   1414c728f:	test   al,al
   1414c7291:	jne    0x1414c744d
   1414c7297:	mov    ecx,DWORD PTR [rsp+0x54]
   1414c729b:	jmp    0x1414c7398
   1414c72a0:	lea    eax,[rcx-0x3]
   1414c72a3:	test   eax,0xfffffffc
   1414c72a8:	jne    0x1414c7390
   1414c72ae:	cmp    ecx,0x5
   1414c72b1:	je     0x1414c7390
   1414c72b7:	test   dil,dil
   1414c72ba:	je     0x1414c744d
   1414c72c0:	test   bpl,0x10
   1414c72c4:	jne    0x1414c7390
   1414c72ca:	test   bpl,0x8
   1414c72ce:	je     0x1414c748c
   1414c72d4:	mov    rbx,QWORD PTR [r10+0x1d4b8]
   1414c72db:	mov    rdi,QWORD PTR [r10+0x1d4c0]
   1414c72e2:	cmp    rbx,rdi
   1414c72e5:	jae    0x1414c744d
   1414c72eb:	mov    rsi,QWORD PTR [rbx]
   1414c72ee:	mov    rcx,rsi
   1414c72f1:	mov    rax,QWORD PTR [rsi]
   1414c72f4:	call   QWORD PTR [rax+0x120]
   1414c72fa:	movsx  ecx,WORD PTR [rsi+0x120]
   1414c7301:	cmp    ecx,eax
   1414c7303:	jne    0x1414c7483
   1414c7309:	test   BYTE PTR [rsi+0x148],0x20
   1414c7310:	jne    0x1414c7483
   1414c7316:	mov    rax,QWORD PTR [rsi]
   1414c7319:	mov    rcx,rsi
   1414c731c:	call   QWORD PTR [rax+0x130]
   1414c7322:	test   al,al
   1414c7324:	je     0x1414c7483
   1414c732a:	cmp    r12d,DWORD PTR [rsi+0x20]
   1414c732e:	jne    0x1414c7483
   1414c7334:	mov    rax,QWORD PTR [rsi]
   1414c7337:	mov    rcx,rsi
   1414c733a:	call   QWORD PTR [rax+0x140]
   1414c7340:	test   al,al
   1414c7342:	je     0x1414c7467
   1414c7348:	cmp    QWORD PTR [rsi+0x30],0x0
   1414c734d:	je     0x1414c7467
   1414c7353:	movzx  edx,WORD PTR [rsp+0xa8]
   1414c735b:	movzx  r9d,r12w
   1414c735f:	movzx  r8d,r13w
   1414c7363:	mov    rcx,rsi
   1414c7366:	call   0x140571c90
   1414c736b:	test   al,al
   1414c736d:	je     0x1414c7483
   1414c7373:	cmp    rbx,rdi
   1414c7376:	jae    0x1414c744d
   1414c737c:	movzx  edi,BYTE PTR [rsp+0xc0]
   1414c7384:	mov    ecx,DWORD PTR [rsp+0x54]
   1414c7388:	movzx  esi,WORD PTR [rsp+0xa8]
   1414c7390:	test   ecx,ecx
   1414c7392:	je     0x1414c75cc
   1414c7398:	test   dil,dil
   1414c739b:	je     0x1414c7571
   1414c73a1:	mov    r10,QWORD PTR [rsp+0xa0]
   1414c73a9:	test   bpl,bpl
   1414c73ac:	jns    0x1414c7571
   1414c73b2:	mov    rbx,QWORD PTR [r10+0x1d4b8]
   1414c73b9:	mov    rdi,QWORD PTR [r10+0x1d4c0]
   1414c73c0:	movsx  r14d,si
   1414c73c4:	cmp    rbx,rdi
   1414c73c7:	jae    0x1414c755c
   1414c73cd:	mov    rsi,QWORD PTR [rbx]
   1414c73d0:	mov    rcx,rsi
   1414c73d3:	mov    rax,QWORD PTR [rsi]
   1414c73d6:	call   QWORD PTR [rax+0x120]
   1414c73dc:	movsx  ecx,WORD PTR [rsi+0x120]
   1414c73e3:	cmp    ecx,eax
   1414c73e5:	jl     0x1414c7553
   1414c73eb:	mov    rax,QWORD PTR [rsi]
   1414c73ee:	mov    rcx,rsi
   1414c73f1:	call   QWORD PTR [rax+0x130]
   1414c73f7:	test   al,al
   1414c73f9:	je     0x1414c7553
   1414c73ff:	cmp    r12d,DWORD PTR [rsi+0x20]
   1414c7403:	jne    0x1414c7553
   1414c7409:	mov    rax,QWORD PTR [rsi]
   1414c740c:	mov    rcx,rsi
   1414c740f:	call   QWORD PTR [rax+0x140]
   1414c7415:	test   al,al
   1414c7417:	je     0x1414c7537
   1414c741d:	cmp    QWORD PTR [rsi+0x30],0x0
   1414c7422:	je     0x1414c7537
   1414c7428:	movzx  r9d,WORD PTR [rsp+0xb8]
   1414c7431:	movzx  r8d,r13w
   1414c7435:	movzx  edx,WORD PTR [rsp+0xa8]
   1414c743d:	mov    rcx,rsi
   1414c7440:	call   0x140571c90
   1414c7445:	test   al,al
   1414c7447:	je     0x1414c7553
   1414c744d:	xor    al,al
   1414c744f:	mov    rbx,QWORD PTR [rsp+0xb0]
   1414c7457:	add    rsp,0x60
   1414c745b:	pop    r15
   1414c745d:	pop    r14
   1414c745f:	pop    r13
   1414c7461:	pop    r12
   1414c7463:	pop    rdi
   1414c7464:	pop    rsi
   1414c7465:	pop    rbp
   1414c7466:	ret
   1414c7467:	cmp    r15d,DWORD PTR [rsi+0x8]
   1414c746b:	jl     0x1414c7483
   1414c746d:	cmp    r15d,DWORD PTR [rsi+0x14]
   1414c7471:	jg     0x1414c7483
   1414c7473:	cmp    r14d,DWORD PTR [rsi+0xc]
   1414c7477:	jl     0x1414c7483
   1414c7479:	cmp    r14d,DWORD PTR [rsi+0x18]
   1414c747d:	jle    0x1414c7373
   1414c7483:	add    rbx,0x8
   1414c7487:	jmp    0x1414c72e2
   1414c748c:	test   bpl,0x4
   1414c7490:	je     0x1414c744d
   1414c7492:	mov    rbx,QWORD PTR [r10+0x1d4b8]
   1414c7499:	mov    rdi,QWORD PTR [r10+0x1d4c0]
   1414c74a0:	cmp    rbx,rdi
   1414c74a3:	jae    0x1414c744d
   1414c74a5:	mov    rsi,QWORD PTR [rbx]
   1414c74a8:	mov    rcx,rsi
   1414c74ab:	mov    rax,QWORD PTR [rsi]
   1414c74ae:	call   QWORD PTR [rax+0x120]
   1414c74b4:	movsx  ecx,WORD PTR [rsi+0x120]
   1414c74bb:	cmp    ecx,eax
   1414c74bd:	jne    0x1414c752e
   1414c74bf:	mov    rax,QWORD PTR [rsi]
   1414c74c2:	mov    rcx,rsi
   1414c74c5:	call   QWORD PTR [rax+0x130]
   1414c74cb:	test   al,al
   1414c74cd:	je     0x1414c752e
   1414c74cf:	cmp    r12d,DWORD PTR [rsi+0x20]
   1414c74d3:	jne    0x1414c752e
   1414c74d5:	mov    rax,QWORD PTR [rsi]
   1414c74d8:	mov    rcx,rsi
   1414c74db:	call   QWORD PTR [rax+0x140]
   1414c74e1:	test   al,al
   1414c74e3:	je     0x1414c7512
   1414c74e5:	cmp    QWORD PTR [rsi+0x30],0x0
   1414c74ea:	je     0x1414c7512
   1414c74ec:	movzx  edx,WORD PTR [rsp+0xa8]
   1414c74f4:	movzx  r9d,r12w
   1414c74f8:	movzx  r8d,r13w
   1414c74fc:	mov    rcx,rsi
   1414c74ff:	call   0x140571c90
   1414c7504:	test   al,al
   1414c7506:	jne    0x1414c7373
   1414c750c:	add    rbx,0x8
   1414c7510:	jmp    0x1414c74a0
   1414c7512:	cmp    r15d,DWORD PTR [rsi+0x8]
   1414c7516:	jl     0x1414c752e
   1414c7518:	cmp    r15d,DWORD PTR [rsi+0x14]
   1414c751c:	jg     0x1414c752e
   1414c751e:	cmp    r14d,DWORD PTR [rsi+0xc]
   1414c7522:	jl     0x1414c752e
   1414c7524:	cmp    r14d,DWORD PTR [rsi+0x18]
   1414c7528:	jle    0x1414c7373
   1414c752e:	add    rbx,0x8
   1414c7532:	jmp    0x1414c74a0
   1414c7537:	cmp    r14d,DWORD PTR [rsi+0x8]
   1414c753b:	jl     0x1414c7553
   1414c753d:	cmp    r14d,DWORD PTR [rsi+0x14]
   1414c7541:	jg     0x1414c7553
   1414c7543:	cmp    r13d,DWORD PTR [rsi+0xc]
   1414c7547:	jl     0x1414c7553
   1414c7549:	cmp    r13d,DWORD PTR [rsi+0x18]
   1414c754d:	jle    0x1414c744d
   1414c7553:	add    rbx,0x8
   1414c7557:	jmp    0x1414c73c4
   1414c755c:	mov    ecx,DWORD PTR [rsp+0x54]
   1414c7560:	movzx  esi,WORD PTR [rsp+0xa8]
   1414c7568:	movzx  r12d,WORD PTR [rsp+0xb8]
   1414c7571:	cmp    ecx,0x7
   1414c7574:	jne    0x1414c75c7
   1414c7576:	mov    rbx,QWORD PTR [rsp+0xa0]
   1414c757e:	movzx  r9d,r12w
   1414c7582:	add    rbx,0x1ca18
   1414c7589:	movzx  r8d,r13w
   1414c758d:	mov    rcx,rbx
   1414c7590:	movzx  edx,si
   1414c7593:	call   0x1405c1860
   1414c7598:	test   al,al
   1414c759a:	jne    0x1414c75c2
   1414c759c:	movzx  r8d,r13w
   1414c75a0:	movzx  edx,si
   1414c75a3:	mov    rcx,rbx
   1414c75a6:	call   0x1405c19b0
   1414c75ab:	test   al,al
   1414c75ad:	jne    0x1414c75c2
   1414c75af:	movzx  r8d,r13w
   1414c75b3:	movzx  edx,si
   1414c75b6:	mov    rcx,rbx
   1414c75b9:	call   0x1405c18d0
   1414c75be:	test   al,al
   1414c75c0:	je     0x1414c75cc
   1414c75c2:	mov    r15b,0x1
   1414c75c5:	jmp    0x1414c75fa
   1414c75c7:	cmp    ecx,0x5
   1414c75ca:	je     0x1414c75c2
   1414c75cc:	movzx  eax,WORD PTR [rsp+0x52]
   1414c75d1:	lea    rdx,[rip+0xfffffffffeb38a28]        # 0x140000000
   1414c75d8:	dec    eax
   1414c75da:	cmp    eax,0x2b5
   1414c75df:	ja     0x1414c75f7
   1414c75e1:	cdqe
   1414c75e3:	movzx  eax,BYTE PTR [rdx+rax*1+0x14c7af4]
   1414c75eb:	mov    ecx,DWORD PTR [rdx+rax*4+0x14c7ae8]
   1414c75f2:	add    rcx,rdx
   1414c75f5:	jmp    rcx
   1414c75f7:	xor    r15b,r15b
   1414c75fa:	mov    r14d,DWORD PTR [rsp+0x58]
   1414c75ff:	xor    ebx,ebx
   1414c7601:	movzx  eax,r14b
   1414c7605:	and    al,0x1
   1414c7607:	movzx  r8d,al
   1414c760b:	test   r14b,0x2
   1414c760f:	lea    eax,[r8+0x2]
   1414c7613:	movzx  ecx,al
   1414c7616:	cmove  ecx,r8d
   1414c761a:	test   r14b,0x4
   1414c761e:	movzx  edx,cl
   1414c7621:	lea    eax,[rdx+0x4]
   1414c7624:	movzx  r12d,al
   1414c7628:	cmove  r12d,edx
   1414c762c:	test   r12b,r12b
   1414c762f:	je     0x1414c78d9
   1414c7635:	mov    r11,QWORD PTR [rsp+0xa0]
   1414c763d:	and    r14d,0x200000
   1414c7644:	movsx  eax,si
   1414c7647:	mov    DWORD PTR [rsp+0x58],r14d
   1414c764c:	mov    r9d,DWORD PTR [r11+0x116bec]
   1414c7653:	cmp    eax,r9d
   1414c7656:	jge    0x1414c76fd
   1414c765c:	cmp    r13d,DWORD PTR [r11+0x116bf0]
   1414c7663:	jge    0x1414c76fd
   1414c7669:	movsx  r10,WORD PTR [rsp+0xb8]
   1414c7672:	test   r10w,r10w
   1414c7676:	jle    0x1414c7706
   1414c767c:	lea    eax,[r10-0x1]
   1414c7680:	cmp    eax,DWORD PTR [r11+0x116bf4]
   1414c7687:	jge    0x1414c7706
   1414c768d:	mov    rcx,QWORD PTR [r11+0x116bb8]
   1414c7694:	test   rcx,rcx
   1414c7697:	je     0x1414c76f6
   1414c7699:	movsx  rax,si
   1414c769d:	mov    rdx,r13
   1414c76a0:	shr    rax,0x4
   1414c76a4:	shr    rdx,0x4
   1414c76a8:	mov    rax,QWORD PTR [rcx+rax*8]
   1414c76ac:	mov    rax,QWORD PTR [rax+rdx*8]
   1414c76b0:	mov    r8,QWORD PTR [rax+r10*8-0x8]
   1414c76b5:	test   r8,r8
   1414c76b8:	je     0x1414c7706
   1414c76ba:	mov    edx,esi
   1414c76bc:	mov    ecx,r13d
   1414c76bf:	and    edx,0xf
   1414c76c2:	and    ecx,0xf
   1414c76c5:	shl    rdx,0x4
   1414c76c9:	add    rdx,rcx
   1414c76cc:	mov    r8d,DWORD PTR [r8+rdx*4+0x2a0]
   1414c76d4:	movzx  eax,r8b
   1414c76d8:	and    al,0x1
   1414c76da:	movzx  edx,al
   1414c76dd:	test   r8b,0x2
   1414c76e1:	lea    eax,[rdx+0x2]
   1414c76e4:	movzx  edi,al
   1414c76e7:	cmove  edi,edx
   1414c76ea:	test   r8b,0x4
   1414c76ee:	je     0x1414c770b
   1414c76f0:	add    dil,0x4
   1414c76f4:	jmp    0x1414c7724
   1414c76f6:	movzx  edi,BYTE PTR [rsp+0x50]
   1414c76fb:	jmp    0x1414c7724
   1414c76fd:	movzx  r10d,WORD PTR [rsp+0xb8]
   1414c7706:	movzx  edi,BYTE PTR [rsp+0x50]
   1414c770b:	movsx  eax,si
   1414c770e:	cmp    eax,r9d
   1414c7711:	jge    0x1414c77ae
   1414c7717:	cmp    r13d,DWORD PTR [r11+0x116bf0]
   1414c771e:	jge    0x1414c77ae
   1414c7724:	movzx  eax,r10w
   1414c7728:	add    ax,0x1
   1414c772c:	js     0x1414c77ae
   1414c7732:	movsx  eax,r10w
   1414c7736:	inc    eax
   1414c7738:	cmp    eax,DWORD PTR [r11+0x116bf4]
   1414c773f:	jge    0x1414c77ae
   1414c7741:	mov    rcx,QWORD PTR [r11+0x116bb8]
   1414c7748:	test   rcx,rcx
   1414c774b:	je     0x1414c77ae
   1414c774d:	movsx  rax,si
   1414c7751:	mov    rdx,r13
   1414c7754:	shr    rax,0x4
   1414c7758:	shr    rdx,0x4
   1414c775c:	mov    rax,QWORD PTR [rcx+rax*8]
   1414c7760:	movsx  rcx,r10w
   1414c7764:	mov    rax,QWORD PTR [rax+rdx*8]
   1414c7768:	mov    r8,QWORD PTR [rax+rcx*8+0x8]
   1414c776d:	test   r8,r8
   1414c7770:	je     0x1414c77ae
   1414c7772:	mov    edx,esi
   1414c7774:	mov    ecx,r13d
   1414c7777:	and    edx,0xf
   1414c777a:	and    ecx,0xf
   1414c777d:	shl    rdx,0x4
   1414c7781:	add    rdx,rcx
   1414c7784:	mov    r8d,DWORD PTR [r8+rdx*4+0x2a0]
   1414c778c:	movzx  eax,r8b
   1414c7790:	and    al,0x1
   1414c7792:	movzx  edx,al
   1414c7795:	test   r8b,0x2
   1414c7799:	lea    eax,[rdx+0x2]
   1414c779c:	movzx  esi,al
   1414c779f:	cmove  esi,edx
   1414c77a2:	test   r8b,0x4
   1414c77a6:	je     0x1414c77b6
   1414c77a8:	add    sil,0x4
   1414c77ac:	jmp    0x1414c77b6
   1414c77ae:	movzx  esi,BYTE PTR [rsp+0xa8]
   1414c77b6:	movzx  edx,WORD PTR [rsp+0xa8]
   1414c77be:	test   r14d,r14d
   1414c77c1:	mov    DWORD PTR [rsp+0x40],0x0
   1414c77c9:	mov    eax,0x10
   1414c77ce:	mov    BYTE PTR [rsp+0x38],0x0
   1414c77d3:	mov    ebx,0x2
   1414c77d8:	mov    BYTE PTR [rsp+0x30],0x0
   1414c77dd:	movzx  r9d,r10w
   1414c77e1:	mov    BYTE PTR [rsp+0x28],0x0
   1414c77e6:	movzx  r8d,r13w
   1414c77ea:	mov    rcx,r11
   1414c77ed:	mov    BYTE PTR [rsp+0x20],0x0
   1414c77f2:	cmovne ebx,eax
   1414c77f5:	movzx  r14d,r12b
   1414c77f9:	call   0x141460470
   1414c77fe:	test   al,al
   1414c7800:	je     0x1414c780d
   1414c7802:	cmp    dil,0x7
   1414c7806:	jne    0x1414c780d
   1414c7808:	add    r14w,0x7
   1414c780d:	cmp    r14w,0x7
   1414c7812:	jb     0x1414c7823
   1414c7814:	cmp    DWORD PTR [rsp+0x58],0x0
   1414c7819:	je     0x1414c7820
   1414c781b:	or     ebx,0x20
   1414c781e:	jmp    0x1414c7823
   1414c7820:	or     ebx,0x4
   1414c7823:	cmp    r12b,0x7
   1414c7827:	jne    0x1414c78d9
   1414c782d:	movzx  edi,WORD PTR [rsp+0xb8]
   1414c7835:	movzx  r8d,r13w
   1414c7839:	movzx  r14d,WORD PTR [rsp+0xa8]
   1414c7842:	inc    di
   1414c7845:	mov    rcx,QWORD PTR [rsp+0xa0]
   1414c784d:	movzx  r9d,di
   1414c7851:	mov    DWORD PTR [rsp+0x40],0x0
   1414c7859:	movzx  edx,r14w
   1414c785d:	mov    BYTE PTR [rsp+0x38],0x0
   1414c7862:	mov    BYTE PTR [rsp+0x30],0x0
   1414c7867:	mov    BYTE PTR [rsp+0x28],0x0
   1414c786c:	mov    BYTE PTR [rsp+0x20],0x0
   1414c7871:	call   0x141460470
   1414c7876:	test   al,al
   1414c7878:	je     0x1414c78a1
   1414c787a:	mov    rcx,QWORD PTR [rsp+0xa0]
   1414c7882:	movzx  r9d,di
   1414c7886:	mov    BYTE PTR [rsp+0x28],0x0
   1414c788b:	movzx  r8d,r13w
   1414c788f:	movzx  edx,r14w
   1414c7893:	mov    BYTE PTR [rsp+0x20],0x0
   1414c7898:	call   0x1414e2e50
   1414c789d:	test   al,al
   1414c789f:	jne    0x1414c78be
   1414c78a1:	mov    rcx,QWORD PTR [rsp+0xa0]
   1414c78a9:	movzx  r9d,di
   1414c78ad:	movzx  r8d,r13w
   1414c78b1:	movzx  edx,r14w
   1414c78b5:	call   0x14025a980
   1414c78ba:	test   al,al
   1414c78bc:	jne    0x1414c78ca
   1414c78be:	cmp    sil,0x4
   1414c78c2:	jl     0x1414c78d9
   1414c78c4:	cmp    r12b,0x7
   1414c78c8:	jne    0x1414c78d9
   1414c78ca:	cmp    DWORD PTR [rsp+0x58],0x0
   1414c78cf:	je     0x1414c78d6
   1414c78d1:	or     ebx,0x40
   1414c78d4:	jmp    0x1414c78d9
   1414c78d6:	or     ebx,0x8
   1414c78d9:	movzx  r14d,BYTE PTR [rsp+0xc0]
   1414c78e2:	test   r14b,r14b
   1414c78e5:	je     0x1414c79fa
   1414c78eb:	test   r15b,r15b
   1414c78ee:	je     0x1414c78f6
   1414c78f0:	bt     ebp,0x16
   1414c78f4:	jb     0x1414c792e
   1414c78f6:	movzx  edi,WORD PTR [rsp+0xb8]
   1414c78fe:	movzx  esi,WORD PTR [rsp+0xa8]
   1414c7906:	bt     ebp,0x17
   1414c790a:	jb     0x1414c793e
   1414c790c:	mov    rcx,QWORD PTR [rsp+0xa0]
   1414c7914:	movzx  r9d,di
   1414c7918:	movzx  r8d,r13w
   1414c791c:	movzx  edx,si
   1414c791f:	call   0x14010c680
   1414c7924:	test   eax,eax
   1414c7926:	je     0x1414c744d
   1414c792c:	jmp    0x1414c793e
   1414c792e:	movzx  edi,WORD PTR [rsp+0xb8]
   1414c7936:	movzx  esi,WORD PTR [rsp+0xa8]
   1414c793e:	test   bpl,0x2
   1414c7942:	jne    0x1414c7a0c
   1414c7948:	bt     ebp,0x15
   1414c794c:	jb     0x1414c795d
   1414c794e:	test   bl,0x24
   1414c7951:	jne    0x1414c795d
   1414c7953:	bt     ebp,0x14
   1414c7957:	jae    0x1414c744d
   1414c795d:	test   bl,0x2
   1414c7960:	je     0x1414c796c
   1414c7962:	bt     ebp,0xc
   1414c7966:	jae    0x1414c744d
   1414c796c:	test   bl,0x10
   1414c796f:	je     0x1414c797b
   1414c7971:	bt     ebp,0xf
   1414c7975:	jae    0x1414c744d
   1414c797b:	test   r15b,r15b
   1414c797e:	je     0x1414c7986
   1414c7980:	bt     ebp,0x12
   1414c7984:	jb     0x1414c79a9
   1414c7986:	test   bl,0x4
   1414c7989:	je     0x1414c7995
   1414c798b:	bt     ebp,0xd
   1414c798f:	jae    0x1414c744d
   1414c7995:	test   bl,0x8
   1414c7998:	je     0x1414c79a4
   1414c799a:	bt     ebp,0xe
   1414c799e:	jae    0x1414c744d
   1414c79a4:	test   r15b,r15b
   1414c79a7:	je     0x1414c79af
   1414c79a9:	bt     ebp,0x13
   1414c79ad:	jb     0x1414c79cd
   1414c79af:	test   bl,0x20
   1414c79b2:	je     0x1414c79be
   1414c79b4:	bt     ebp,0x10
   1414c79b8:	jae    0x1414c744d
   1414c79be:	test   bl,0x40
   1414c79c1:	je     0x1414c79cd
   1414c79c3:	bt     ebp,0x11
   1414c79c7:	jae    0x1414c744d
   1414c79cd:	bt     ebp,0xf
   1414c79d1:	jb     0x1414c7a0c
   1414c79d3:	movzx  r9d,di
   1414c79d7:	lea    rcx,[rip+0xf2bf92]        # 0x1423f3970
   1414c79de:	movzx  r8d,r13w
   1414c79e2:	movzx  edx,si
   1414c79e5:	call   0x14024b900
   1414c79ea:	mov    ecx,0x27d8
   1414c79ef:	cmp    ax,cx
   1414c79f2:	jae    0x1414c744d
   1414c79f8:	jmp    0x1414c7a0c
   1414c79fa:	test   bl,0x10
   1414c79fd:	jne    0x1414c744d
   1414c7a03:	test   bl,0x4
   1414c7a06:	jne    0x1414c744d
   1414c7a0c:	test   r15b,r15b
   1414c7a0f:	jne    0x1414c7ae1
   1414c7a15:	test   r14b,r14b
   1414c7a18:	je     0x1414c744d
   1414c7a1e:	bt     ebp,0xd
   1414c7a22:	jae    0x1414c7a2d
   1414c7a24:	test   bl,0x4
   1414c7a27:	jne    0x1414c7ae1
   1414c7a2d:	bt     ebp,0x10
   1414c7a31:	jae    0x1414c7a3c
   1414c7a33:	test   bl,0x20
   1414c7a36:	jne    0x1414c7ae1
   1414c7a3c:	bt     ebp,0x19
   1414c7a40:	jae    0x1414c7a7e
   1414c7a42:	movzx  r10d,WORD PTR [rsp+0x52]
   1414c7a48:	lea    eax,[r10-0x1eb]
   1414c7a4f:	cmp    eax,0x13
   1414c7a52:	ja     0x1414c7a71
   1414c7a54:	lea    rdx,[rip+0xfffffffffeb385a5]        # 0x140000000
   1414c7a5b:	cdqe
   1414c7a5d:	movzx  eax,BYTE PTR [rdx+rax*1+0x14c7db0]
   1414c7a65:	mov    ecx,DWORD PTR [rdx+rax*4+0x14c7dac]
   1414c7a6c:	add    rcx,rdx
   1414c7a6f:	jmp    rcx
   1414c7a71:	mov    eax,0x1ea
   1414c7a76:	cmp    r10w,ax
   1414c7a7a:	je     0x1414c7ae1
   1414c7a7c:	jmp    0x1414c7a84
   1414c7a7e:	movzx  r10d,WORD PTR [rsp+0x52]
   1414c7a84:	test   ebp,0x14000000
   1414c7a8a:	je     0x1414c7a99
   1414c7a8c:	movzx  ecx,r10w
   1414c7a90:	call   0x1409fee20
   1414c7a95:	test   al,al
   1414c7a97:	jne    0x1414c7ae1
   1414c7a99:	test   ebp,0x28000000
   1414c7a9f:	je     0x1414c7ab9
   1414c7aa1:	movzx  ecx,r10w
   1414c7aa5:	sub    ecx,0x1
   1414c7aa8:	je     0x1414c7ae1
   1414c7aaa:	sub    ecx,0x1f
   1414c7aad:	je     0x1414c7ae1
   1414c7aaf:	sub    ecx,0x3
   1414c7ab2:	je     0x1414c7ae1
   1414c7ab4:	cmp    ecx,0x7
   1414c7ab7:	je     0x1414c7ae1
   1414c7ab9:	test   ebp,0xc00
   1414c7abf:	je     0x1414c744d
   1414c7ac5:	movzx  ecx,r10w
   1414c7ac9:	sub    ecx,0x1
   1414c7acc:	je     0x1414c7ae1
   1414c7ace:	sub    ecx,0x1f
   1414c7ad1:	je     0x1414c7ae1
   1414c7ad3:	sub    ecx,0x3
   1414c7ad6:	je     0x1414c7ae1
   1414c7ad8:	cmp    ecx,0x7
   1414c7adb:	jne    0x1414c744d
   1414c7ae1:	mov    al,0x1
   1414c7ae3:	jmp    0x1414c744f

; 围城门槛   RVA 0x8f2f80

00000001408f2f80 <.text+0x8f1f80>:
   1408f2f80:	mov    QWORD PTR [rsp+0x8],rbx
   1408f2f85:	mov    QWORD PTR [rsp+0x10],rbp
   1408f2f8a:	mov    QWORD PTR [rsp+0x18],rsi
   1408f2f8f:	mov    QWORD PTR [rsp+0x20],rdi
   1408f2f94:	push   r12
   1408f2f96:	push   r14
   1408f2f98:	push   r15
   1408f2f9a:	sub    rsp,0x20
   1408f2f9e:	mov    r9,QWORD PTR [rcx]
   1408f2fa1:	movzx  ebp,r8b
   1408f2fa5:	mov    rax,QWORD PTR [rcx+0x8]
   1408f2fa9:	movzx  r14d,dl
   1408f2fad:	sub    rax,r9
   1408f2fb0:	sar    rax,0x3
   1408f2fb4:	sub    eax,0x1
   1408f2fb7:	js     0x1408f303d
   1408f2fbd:	mov    r15,QWORD PTR [rip+0x1b00cbc]        # 0x1423f3c80
   1408f2fc4:	mov    r12,QWORD PTR [rip+0x1b00cad]        # 0x1423f3c78
   1408f2fcb:	movsxd rdi,eax
   1408f2fce:	lea    rsi,[r9+rdi*8]
   1408f2fd2:	mov    rbx,QWORD PTR [rsi]
   1408f2fd5:	test   bpl,bpl
   1408f2fd8:	je     0x1408f301a
   1408f2fda:	mov    ecx,DWORD PTR [rbx+0x4]
   1408f2fdd:	cmp    ecx,0xffffffff
   1408f2fe0:	je     0x1408f301a
   1408f2fe2:	mov    rax,r15
   1408f2fe5:	sub    rax,r12
   1408f2fe8:	test   rax,0xfffffffffffffff8
   1408f2fee:	je     0x1408f301a
   1408f2ff0:	lea    rdx,[rip+0x1b00c81]        # 0x1423f3c78
   1408f2ff7:	call   0x1400bb6d0
   1408f2ffc:	test   rax,rax
   1408f2fff:	je     0x1408f301a
   1408f3001:	mov    rax,QWORD PTR [rax+0x8]
   1408f3005:	cmp    DWORD PTR [rax+0x3a8],0x0
   1408f300c:	jle    0x1408f301a
   1408f300e:	mov    rax,QWORD PTR [rax+0x3a0]
   1408f3015:	test   BYTE PTR [rax],0x4
   1408f3018:	jne    0x1408f3033
   1408f301a:	movzx  eax,WORD PTR [rbx+0x18]
   1408f301e:	test   al,0x1
   1408f3020:	je     0x1408f3033
   1408f3022:	test   al,0x2
   1408f3024:	jne    0x1408f302b
   1408f3026:	test   r14b,r14b
   1408f3029:	jne    0x1408f3033
   1408f302b:	mov    eax,DWORD PTR [rbx+0x4]
   1408f302e:	cmp    eax,0xffffffff
   1408f3031:	jne    0x1408f3042
   1408f3033:	sub    rsi,0x8
   1408f3037:	sub    rdi,0x1
   1408f303b:	jns    0x1408f2fd2
   1408f303d:	mov    eax,0xffffffff
   1408f3042:	mov    rbx,QWORD PTR [rsp+0x40]
   1408f3047:	mov    rbp,QWORD PTR [rsp+0x48]
   1408f304c:	mov    rsi,QWORD PTR [rsp+0x50]
   1408f3051:	mov    rdi,QWORD PTR [rsp+0x58]
   1408f3056:	add    rsp,0x20
   1408f305a:	pop    r15
   1408f305c:	pop    r14
   1408f305e:	pop    r12
   1408f3060:	ret

; 可用人物门槛   RVA 0xdf5e20

0000000140df5e20 <.text+0xdf4e20>:
   140df5e20:	mov    r8,QWORD PTR [rcx+0x10]
   140df5e24:	mov    r9,rcx
   140df5e27:	test   r8,r8
   140df5e2a:	je     0x140df5ecb
   140df5e30:	mov    r10d,DWORD PTR [r8+0xd0]
   140df5e37:	test   r10d,r10d
   140df5e3a:	jle    0x140df5e48
   140df5e3c:	mov    rax,QWORD PTR [r8+0xc8]
   140df5e43:	cmp    BYTE PTR [rax],0x0
   140df5e46:	jl     0x140df5e4f
   140df5e48:	cmp    DWORD PTR [r8+0x30],0xffffffff
   140df5e4d:	jne    0x140df5ecb
   140df5e4f:	test   dl,dl
   140df5e51:	je     0x140df5eb4
   140df5e53:	cmp    DWORD PTR [rip+0xac83de],0x0        # 0x1418be238
   140df5e5a:	jne    0x140df5eb4
   140df5e5c:	mov    ecx,DWORD PTR [r8+0x28]
   140df5e60:	cmp    ecx,0xffffffff
   140df5e63:	je     0x140df5eb4
   140df5e65:	mov    eax,DWORD PTR [rip+0x13718e9]        # 0x142167754
   140df5e6b:	add    eax,0x2
   140df5e6e:	cmp    eax,ecx
   140df5e70:	jl     0x140df5eb4
   140df5e72:	test   r10d,r10d
   140df5e75:	jle    0x140df5e83
   140df5e77:	mov    rax,QWORD PTR [r8+0xc8]
   140df5e7e:	cmp    BYTE PTR [rax],0x0
   140df5e81:	jl     0x140df5eb4
   140df5e83:	mov    rax,QWORD PTR [r8+0x130]
   140df5e8a:	test   rax,rax
   140df5e8d:	je     0x140df5ecb
   140df5e8f:	mov    rax,QWORD PTR [rax+0x48]
   140df5e93:	test   rax,rax
   140df5e96:	je     0x140df5ecb
   140df5e98:	cmp    QWORD PTR [rax+0x160],0x0
   140df5ea0:	jne    0x140df5eb4
   140df5ea2:	test   BYTE PTR [rax+0x84],0x1
   140df5ea9:	jne    0x140df5ecb
   140df5eab:	test   BYTE PTR [rax+0x80],0x1
   140df5eb2:	je     0x140df5ecb
   140df5eb4:	mov    rax,QWORD PTR [r9+0x18]
   140df5eb8:	test   rax,rax
   140df5ebb:	je     0x140df5ec8
   140df5ebd:	cmp    DWORD PTR [rax+0x110],0x0
   140df5ec4:	setge  al
   140df5ec7:	ret
   140df5ec8:	mov    al,0x1
   140df5eca:	ret
   140df5ecb:	xor    al,al
   140df5ecd:	ret

; 本地组织指针同时写入 group_id   RVA 0x10833a7

00000001410833a7 <.text+0x10823a7>:
   1410833a7:	mov    eax,DWORD PTR [rdi+0x4]
   1410833aa:	mov    DWORD PTR [rip+0x1332748],eax        # 0x1423b5af8
   1410833b0:	mov    QWORD PTR [rip+0x13392b1],rdi        # 0x1423bc668

; 商人离场时按所属文明设置回报位   RVA 0x13629af

00000001413629af <.text+0x13619af>:
   1413629af:	test   BYTE PTR [rdi+0x110],0x40
   1413629b6:	je     0x141362a7a
   1413629bc:	mov    rax,QWORD PTR [rip+0x1050d75]        # 0x1423b3738
   1413629c3:	mov    rcx,QWORD PTR [rip+0x1050d76]        # 0x1423b3740
   1413629ca:	nop    WORD PTR [rax+rax*1+0x0]
   1413629d0:	cmp    rax,rcx
   1413629d3:	jae    0x141362a14
   1413629d5:	mov    r8,QWORD PTR [rax]
   1413629d8:	mov    edx,DWORD PTR [rdi+0x140]
   1413629de:	cmp    DWORD PTR [r8+0xc],edx
   1413629e2:	je     0x1413629ea
   1413629e4:	add    rax,0x8
   1413629e8:	jmp    0x1413629d0
   1413629ea:	test   r8,r8
   1413629ed:	je     0x141362a14
   1413629ef:	mov    eax,DWORD PTR [r8+0x20c0]
   1413629f6:	or     eax,0x1
   1413629f9:	mov    DWORD PTR [r8+0x20c0],eax
   141362a00:	test   r15b,r15b
   141362a03:	je     0x141362a0a
   141362a05:	or     eax,0x2
   141362a08:	jmp    0x141362a0d
   141362a0a:	or     eax,0x8
   141362a0d:	mov    DWORD PTR [r8+0x20c0],eax

; 商队正常离开前采集快照   RVA 0xe6bc53

0000000140e6bc53 <.text+0xe6ac53>:
   140e6bc53:	lea    rcx,[rip+0x1547a56]        # 0x1423b36b0
   140e6bc5a:	call   0x140e7b7b0
   140e6bc5f:	lea    rcx,[rip+0x1547a4a]        # 0x1423b36b0
   140e6bc66:	call   0x140e7c260
   140e6bc6b:	lea    rcx,[rip+0x1547a3e]        # 0x1423b36b0
   140e6bc72:	call   0x140e7bfb0
   140e6bc77:	lea    rcx,[rip+0x1547a32]        # 0x1423b36b0
   140e6bc7e:	call   0x140e7b680
   140e6bc83:	lea    rcx,[r12+0x10]
   140e6bc88:	lea    rdx,[rip+0x1547c31]        # 0x1423b38c0
   140e6bc8f:	call   0x140e57cd0
   140e6bc94:	mov    BYTE PTR [r12+0x8],0x3

; 遇变故提前离开时采集快照   RVA 0xe5547b

0000000140e5547b <.text+0xe5447b>:
   140e5547b:	mov    eax,DWORD PTR [rdx+0x20c0]
   140e55481:	test   al,0x2
   140e55483:	je     0x140e55532
   140e55489:	and    eax,0xfffffffd
   140e5548c:	mov    DWORD PTR [rdx+0x20c0],eax
   140e55492:	mov    rax,QWORD PTR [rip+0x155e29f]        # 0x1423b3738
   140e55499:	mov    rcx,QWORD PTR [rbx+rax*1]
   140e5549d:	or     DWORD PTR [rcx+0x20c0],0x4
   140e554a4:	mov    rax,QWORD PTR [rip+0x155e28d]        # 0x1423b3738
   140e554ab:	mov    rcx,QWORD PTR [rbx+rax*1]
   140e554af:	cmp    BYTE PTR [rcx+0x8],0x2
   140e554b3:	jg     0x140e55532
   140e554b5:	mov    rdx,rdi
   140e554b8:	lea    rcx,[rip+0x155e279]        # 0x1423b3738
   140e554bf:	call   0x140070850
   140e554c4:	mov    rcx,QWORD PTR [rax]
   140e554c7:	mov    BYTE PTR [rcx+0x8],0x3
   140e554cb:	lea    rcx,[rip+0x155e1de]        # 0x1423b36b0
   140e554d2:	call   0x140e7b7b0
   140e554d7:	lea    rcx,[rip+0x155e1d2]        # 0x1423b36b0
   140e554de:	call   0x140e7c260
   140e554e3:	lea    rcx,[rip+0x155e1c6]        # 0x1423b36b0
   140e554ea:	call   0x140e7bfb0
   140e554ef:	lea    rcx,[rip+0x155e1ba]        # 0x1423b36b0
   140e554f6:	call   0x140e7b680
   140e554fb:	mov    rdx,rdi
   140e554fe:	lea    rcx,[rip+0x155e233]        # 0x1423b3738
   140e55505:	call   0x140070850
   140e5550a:	mov    rcx,QWORD PTR [rax]
   140e5550d:	add    rcx,0x10
   140e55511:	lea    rdx,[rip+0x155e3a8]        # 0x1423b38c0
   140e55518:	call   0x140e57cd0

; 快照复制包含报告年龄   RVA 0xe58655

0000000140e58655 <.text+0xe57655>:
   140e58655:	mov    eax,DWORD PTR [rdi+0x208c]
   140e5865b:	mov    DWORD PTR [rbx+0x208c],eax

; 春季晋升使用深层特殊矿石标志；发现矿石时的写入点   RVA 0x14bcd2c

00000001414bcd2c <.text+0x14bbd2c>:
   1414bcd2c:	mov    rax,QWORD PTR [rcx+rdx*8]
   1414bcd30:	cmp    DWORD PTR [rax+0x40],0x2
   1414bcd34:	jle    0x1414bcd44
   1414bcd36:	mov    rax,QWORD PTR [rax+0x38]
   1414bcd3a:	test   BYTE PTR [rax+0x2],0x4
   1414bcd3e:	je     0x1414bcd44
   1414bcd40:	mov    al,0x1
   1414bcd42:	jmp    0x1414bcd46
   1414bcd44:	xor    al,al
   1414bcd46:	test   al,al
   1414bcd48:	je     0x1414bcd51
   1414bcd4a:	or     DWORD PTR [rip+0xef8c17],0x1        # 0x1423b5968

; 主循环对回退抽选的两条门槛   RVA 0xe610ea

0000000140e610ea <.text+0xe600ea>:
   140e610ea:	mov    r12,QWORD PTR [rbp-0x48]
   140e610ee:	mov    rax,r12
   140e610f1:	sub    rax,rsi
   140e610f4:	sar    rax,0x3
   140e610f8:	test   rax,rax
   140e610fb:	je     0x140e61a91
   140e61101:	call   0x140ece790
   140e61106:	mov    r8d,eax
   140e61109:	mov    edi,0x3
   140e6110e:	mov    eax,edi
   140e61110:	mul    r8d
   140e61113:	mov    ecx,r8d
   140e61116:	sub    ecx,edx
   140e61118:	shr    ecx,1
   140e6111a:	add    ecx,edx
   140e6111c:	shr    ecx,0x1e
   140e6111f:	imul   ecx,ecx,0x80000001
   140e61125:	add    r8d,ecx
   140e61128:	cmp    r8d,0x20000000
   140e6112f:	jb     0x140e6113a
   140e61131:	cmp    ebx,0x32
   140e61134:	jl     0x140e61a91
   140e6113a:	test   r14d,r14d
   140e6113d:	jne    0x140e61a91
   140e61143:	mov    rbx,r12

; 到期移民的唯一直接调用及遇围城后的延期   RVA 0xe53c20

0000000140e53c20 <.text+0xe52c20>:
   140e53c20:	mov    r8b,0x1
   140e53c23:	movzx  edx,r8b
   140e53c27:	lea    rcx,[rip+0x1561daa]        # 0x1423b59d8
   140e53c2e:	call   0x1408f2f80
   140e53c33:	mov    rdx,rdi
   140e53c36:	lea    rcx,[rip+0x186a42b]        # 0x1426be068
   140e53c3d:	cmp    eax,0xffffffff
   140e53c40:	jne    0x140e53c54
   140e53c42:	call   0x1407e1de0
   140e53c47:	mov    rcx,QWORD PTR [rax]
   140e53c4a:	call   0x140e5eb00
   140e53c4f:	jmp    0x140e54021
   140e53c54:	call   0x1407e1de0
   140e53c59:	mov    rcx,QWORD PTR [rax]
   140e53c5c:	movsx  ebx,BYTE PTR [rcx+0x2]
   140e53c60:	inc    ebx
   140e53c62:	and    ebx,0x80000003
   140e53c68:	jge    0x140e53c71
   140e53c6a:	dec    ebx
   140e53c6c:	or     ebx,0xfffffffc
   140e53c6f:	inc    ebx
   140e53c71:	mov    rdx,rdi
   140e53c74:	lea    rcx,[rip+0x186a3ed]        # 0x1426be068
   140e53c7b:	call   0x1407e1de0
   140e53c80:	mov    rcx,QWORD PTR [rax]
   140e53c83:	mov    BYTE PTR [rcx+0x2],bl
   140e53c86:	jmp    0x140e5404c

; 入场地形跳表，tiletype 从 1 开始。三个目的地址及原始索引。
; 0x14c75f7 0x14c75c2 0x14c75f7
;   1.. 32  00 01 01 01 01 01 02 02 02 02 02 02 02 02 02 02 02 02 01 02 02 02 02 02 01 01 01 02 02 02 02 00
;  33.. 64  02 01 02 01 01 01 01 01 01 02 01 01 01 01 01 02 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 02
;  65.. 96  02 02 02 02 02 01 02 01 01 02 01 01 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01 02 02 02 02 02
;  97..128  02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01 01 01 02 01 02 02 02 02 02 02 02 02 02 01 01
; 129..160  01 01 01 02 02 01 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01 01 01 02 01 02 02 02
; 161..192  02 02 02 02 02 02 01 01 01 01 02 02 02 02 01 01 01 01 01 01 01 01 01 01 02 02 02 02 02 02 02 02
; 193..224  02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01
; 225..256  01 02 01 02 01 01 01 01 01 01 01 01 01 01 01 01 01 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01
; 257..288  01 01 02 01 02 02 01 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02
; 289..320  02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02
; 321..352  02 02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 353..384  01 01 01 02 02 02 02 02 01 01 01 01 01 01 01 01 02 02 02 02 02 02 02 02 01 01 01 01 02 02 01 01
; 385..416  01 01 02 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 02 02 02 02
; 417..448  02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01 01 01 02 02 02
; 449..480  02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 02
; 481..512  02 02 02 02 02 02 02 02 01 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 02 01 01
; 513..544  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 545..576  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 577..608  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 609..640  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 641..672  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01
; 673..694  01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01 01

; 建堡提示文字分支，对应 Your selected civilization is dead or dying.   RVA 0x105ed96

000000014105ed96 <.text+0x105dd96>:
   14105ed96:	test   BYTE PTR [rdi+0x2aa],0x40
   14105ed9d:	je     0x14105ee3d
   14105eda3:	mov    r8d,r13d
   14105eda6:	mov    edx,ebx
   14105eda8:	lea    rcx,[rip+0x160dac1]        # 0x14266c870
   14105edaf:	call   0x1400bc750
   14105edb4:	lea    rdx,[rip+0x709ff5]        # 0x141768db0
   14105edbb:	lea    rcx,[rbp+0x9b0]
   14105edc2:	call   0x140069780

; 普通商队建队时对入口、驮畜和车辆的要求   RVA 0xe5ac00

0000000140e5ac00 <.text+0xe59c00>:
   140e5ac00:	mov    QWORD PTR [rsp+0x10],rbx
   140e5ac05:	mov    QWORD PTR [rsp+0x18],rsi
   140e5ac0a:	mov    QWORD PTR [rsp+0x20],rdi
   140e5ac0f:	push   rbp
   140e5ac10:	push   r12
   140e5ac12:	push   r13
   140e5ac14:	push   r14
   140e5ac16:	push   r15
   140e5ac18:	lea    rbp,[rsp-0x1b0]
   140e5ac20:	sub    rsp,0x2b0
   140e5ac27:	mov    rax,QWORD PTR [rip+0xa63412]        # 0x1418be040
   140e5ac2e:	xor    rax,rsp
   140e5ac31:	mov    QWORD PTR [rbp+0x1a0],rax
   140e5ac38:	mov    r13,rcx
   140e5ac3b:	mov    QWORD PTR [rbp-0x68],rcx
   140e5ac3f:	mov    rcx,QWORD PTR [rcx+0x8]
   140e5ac43:	mov    eax,DWORD PTR [rip+0x155aea7]        # 0x1423b5af0
   140e5ac49:	cmp    DWORD PTR [rcx+0x4],eax
   140e5ac4c:	jne    0x140e5ac53
   140e5ac4e:	call   0x140e64950
   140e5ac53:	call   0x140acd540
   140e5ac58:	lea    rax,[rsp+0x60]
   140e5ac5d:	mov    QWORD PTR [rsp+0x20],rax
   140e5ac62:	lea    r9,[rsp+0x68]
   140e5ac67:	lea    r8,[rsp+0x64]
   140e5ac6c:	lea    rdx,[rsp+0x6c]
   140e5ac71:	lea    rcx,[rip+0x1558a38]        # 0x1423b36b0
   140e5ac78:	call   0x140e5e240
   140e5ac7d:	test   al,al
   140e5ac7f:	je     0x140e5d59c
   140e5ac85:	mov    rcx,QWORD PTR [r13+0x8]
   140e5ac89:	mov    rax,QWORD PTR [rcx+0xb70]
   140e5ac90:	sub    rax,QWORD PTR [rcx+0xb68]
   140e5ac97:	test   rax,0xfffffffffffffffc
   140e5ac9d:	jne    0x140e5acd3
   140e5ac9f:	mov    rax,QWORD PTR [rcx+0xb88]
   140e5aca6:	sub    rax,QWORD PTR [rcx+0xb80]
   140e5acad:	test   rax,0xfffffffffffffffc
   140e5acb3:	je     0x140e5d59c
   140e5acb9:	mov    rax,QWORD PTR [rcx+0xb58]
   140e5acc0:	sub    rax,QWORD PTR [rcx+0xb50]
   140e5acc7:	test   rax,0xfffffffffffffffc
   140e5accd:	je     0x140e5d59c

; 无报告的统计初始化，年龄字段与普通需求初值   RVA 0x104dc30

000000014104dc30 <.text+0x104cc30>:
   14104dc30:	mov    QWORD PTR [rsp+0x8],rbx
   14104dc35:	push   rdi
   14104dc36:	sub    rsp,0x20
   14104dc3a:	xor    edi,edi
   14104dc3c:	mov    rbx,rcx
   14104dc3f:	mov    QWORD PTR [rcx+0x2080],rdi
   14104dc46:	xor    edx,edx
   14104dc48:	mov    WORD PTR [rcx+0x2088],di
   14104dc4f:	mov    r8d,0x130
   14104dc55:	mov    WORD PTR [rcx+0x158],di
   14104dc5c:	mov    DWORD PTR [rcx+0x15c],edi
   14104dc62:	mov    DWORD PTR [rcx+0x2018],edi
   14104dc68:	mov    QWORD PTR [rcx],rdi
   14104dc6b:	mov    QWORD PTR [rcx+0x8],rdi
   14104dc6f:	mov    QWORD PTR [rcx+0x10],rdi
   14104dc73:	mov    DWORD PTR [rcx+0x18],edi
   14104dc76:	mov    QWORD PTR [rcx+0x340],rdi
   14104dc7d:	mov    QWORD PTR [rcx+0x348],rdi
   14104dc84:	mov    QWORD PTR [rcx+0x350],rdi
   14104dc8b:	mov    QWORD PTR [rcx+0x358],rdi
   14104dc92:	mov    QWORD PTR [rcx+0x360],rdi
   14104dc99:	mov    DWORD PTR [rcx+0x368],edi
   14104dc9f:	add    rcx,0x1c
   14104dca3:	call   0x141554566
   14104dca8:	lea    rcx,[rbx+0x160]
   14104dcaf:	xor    edx,edx
   14104dcb1:	mov    r8d,0x1c4
   14104dcb7:	call   0x141554566
   14104dcbc:	lea    rcx,[rbx+0x36c]
   14104dcc3:	mov    QWORD PTR [rbx+0x14c],rdi
   14104dcca:	xor    edx,edx
   14104dccc:	mov    DWORD PTR [rbx+0x154],edi
   14104dcd2:	mov    r8d,0x408
   14104dcd8:	call   0x141554566
   14104dcdd:	lea    rcx,[rbx+0x774]
   14104dce4:	xor    edx,edx
   14104dce6:	mov    r8d,0x408
   14104dcec:	call   0x141554566
   14104dcf1:	lea    rcx,[rbx+0xb7c]
   14104dcf8:	xor    edx,edx
   14104dcfa:	mov    r8d,0x408
   14104dd00:	call   0x141554566
   14104dd05:	lea    rcx,[rbx+0xf84]
   14104dd0c:	xor    edx,edx
   14104dd0e:	mov    r8d,0x408
   14104dd14:	call   0x141554566
   14104dd19:	lea    rcx,[rbx+0x138c]
   14104dd20:	xor    edx,edx
   14104dd22:	mov    r8d,0x408
   14104dd28:	call   0x141554566
   14104dd2d:	lea    rcx,[rbx+0x1794]
   14104dd34:	xor    edx,edx
   14104dd36:	mov    r8d,0x408
   14104dd3c:	call   0x141554566
   14104dd41:	lea    rcx,[rbx+0x1b9c]
   14104dd48:	xor    edx,edx
   14104dd4a:	mov    r8d,0x408
   14104dd50:	call   0x141554566
   14104dd55:	mov    QWORD PTR [rbx+0x1fa4],rdi
   14104dd5c:	lea    rcx,[rbx+0x328]
   14104dd63:	mov    QWORD PTR [rbx+0x1fbc],rdi
   14104dd6a:	mov    QWORD PTR [rbx+0x1fd0],rdi
   14104dd71:	mov    QWORD PTR [rbx+0x1fe4],rdi
   14104dd78:	mov    QWORD PTR [rbx+0x1fac],rdi
   14104dd7f:	mov    QWORD PTR [rbx+0x1fc4],rdi
   14104dd86:	mov    QWORD PTR [rbx+0x1fd8],rdi
   14104dd8d:	mov    QWORD PTR [rbx+0x1fec],rdi
   14104dd94:	mov    QWORD PTR [rbx+0x1fb4],rdi
   14104dd9b:	mov    DWORD PTR [rbx+0x1fcc],edi
   14104dda1:	mov    DWORD PTR [rbx+0x1fe0],edi
   14104dda7:	mov    QWORD PTR [rbx+0x1ff4],rdi
   14104ddae:	mov    QWORD PTR [rbx+0x1ffc],rdi
   14104ddb5:	mov    QWORD PTR [rbx+0x2010],rdi
   14104ddbc:	mov    QWORD PTR [rbx+0x2004],rdi
   14104ddc3:	mov    DWORD PTR [rbx+0x200c],edi
   14104ddc9:	mov    DWORD PTR [rbx+0x208c],edi
   14104ddcf:	mov    rdx,QWORD PTR [rip+0x14c11da]        # 0x14250efb0
   14104ddd6:	sub    rdx,QWORD PTR [rip+0x14c11cb]        # 0x14250efa8
   14104dddd:	sar    rdx,0x3
   14104dde1:	call   0x1400709b0
   14104dde6:	mov    DWORD PTR [rbx+0x20a8],edi
   14104ddec:	mov    rbx,QWORD PTR [rsp+0x30]
   14104ddf1:	add    rsp,0x20
   14104ddf5:	pop    rdi

; 移民需求结构的初始幸福百分比为 100   RVA 0xe4e100

0000000140e4e100 <.text+0xe4d100>:
   140e4e100:	mov    QWORD PTR [rsp+0x8],rbx
   140e4e105:	push   rdi
   140e4e106:	sub    rsp,0x20
   140e4e10a:	xor    edi,edi
   140e4e10c:	mov    rbx,rcx
   140e4e10f:	mov    DWORD PTR [rcx],edi
   140e4e111:	xor    edx,edx
   140e4e113:	mov    QWORD PTR [rcx+0x4],rdi
   140e4e117:	mov    r8d,0x21c
   140e4e11d:	mov    QWORD PTR [rcx+0xc],rdi
   140e4e121:	add    rcx,0x14
   140e4e125:	call   0x141554566
   140e4e12a:	mov    rax,rbx
   140e4e12d:	mov    QWORD PTR [rbx+0x230],rdi
   140e4e134:	mov    QWORD PTR [rbx+0x238],0x64
   140e4e13f:	mov    rbx,QWORD PTR [rsp+0x30]
   140e4e144:	add    rsp,0x20

; 获取本季商队资格后的外交关系判断   RVA 0x938020

0000000140938020 <.text+0x937020>:
   140938020:	mov    QWORD PTR [rsp+0x10],rbx
   140938025:	push   rdi
   140938026:	sub    rsp,0x20
   14093802a:	mov    edi,DWORD PTR [rip+0x1a7dac0]        # 0x1423b5af0
   140938030:	lea    rdx,[rcx+0x1028]
   140938037:	mov    rbx,rcx
   14093803a:	mov    ecx,edi
   14093803c:	call   0x1400bb3f0
   140938041:	test   rax,rax
   140938044:	je     0x140938062
   140938046:	movzx  eax,WORD PTR [rax+0x4]
   14093804a:	cmp    ax,0x1
   14093804e:	je     0x14093813c
   140938054:	sub    ax,0x4
   140938058:	cmp    ax,0x1
   14093805c:	jbe    0x14093813c
   140938062:	lea    r8,[rsp+0x30]
   140938067:	mov    edx,edi
   140938069:	mov    rcx,rbx
   14093806c:	call   0x140938150
   140938071:	cmp    eax,0xffffffe2
   140938074:	jl     0x14093813c
   14093807a:	mov    edx,DWORD PTR [rip+0x1a7da78]        # 0x1423b5af8
   140938080:	lea    r8,[rsp+0x30]
   140938085:	mov    rcx,rbx
   140938088:	call   0x140938150
   14093808d:	cmp    eax,0xffffffe2
   140938090:	jl     0x14093813c
   140938096:	mov    ecx,0x20
   14093809b:	call   0x1415530e0
   1409380a0:	mov    QWORD PTR [rsp+0x30],rax
   1409380a5:	mov    rdi,rax
   1409380a8:	xor    ecx,ecx
   1409380aa:	mov    QWORD PTR [rsp+0x30],rdi
   1409380af:	mov    QWORD PTR [rax+0x8],rcx
   1409380b3:	mov    eax,0xffffffff
   1409380b8:	mov    WORD PTR [rdi+0x10],ax
   1409380bc:	mov    DWORD PTR [rdi+0x14],eax
   1409380bf:	mov    WORD PTR [rdi],cx
   1409380c2:	movzx  ecx,BYTE PTR [rip+0xfc11cd]        # 0x1418f9296
   1409380c9:	mov    BYTE PTR [rdi+0x2],cl
   1409380cc:	call   0x140ece790
   1409380d1:	mov    r8d,eax
   1409380d4:	mov    eax,0x3
   1409380d9:	mul    r8d
   1409380dc:	mov    ecx,r8d
   1409380df:	mov    eax,0x7d1ffd5d
   1409380e4:	sub    ecx,edx
   1409380e6:	shr    ecx,1
   1409380e8:	add    ecx,edx
   1409380ea:	shr    ecx,0x1e
   1409380ed:	imul   ecx,ecx,0x7fffffff
   1409380f3:	sub    r8d,ecx
   1409380f6:	mul    r8d
   1409380f9:	mov    eax,0x3e8
   1409380fe:	shr    edx,0x14
   140938101:	add    dx,ax
   140938104:	mov    WORD PTR [rdi+0x4],dx
   140938108:	mov    QWORD PTR [rdi+0x8],rbx
   14093810c:	mov    rdx,QWORD PTR [rip+0x1d85f5d]        # 0x1426be070
   140938113:	cmp    rdx,QWORD PTR [rip+0x1d85f5e]        # 0x1426be078
   14093811a:	je     0x140938132
   14093811c:	mov    QWORD PTR [rdx],rdi
   14093811f:	add    QWORD PTR [rip+0x1d85f49],0x8        # 0x1426be070
   140938127:	mov    rbx,QWORD PTR [rsp+0x38]
   14093812c:	add    rsp,0x20
   140938130:	pop    rdi
   140938131:	ret
   140938132:	lea    r8,[rsp+0x30]
   140938137:	call   0x1409febe0
   14093813c:	rex.W
