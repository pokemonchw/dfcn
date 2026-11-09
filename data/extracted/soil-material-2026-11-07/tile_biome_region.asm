1400838a0: mov    QWORD PTR [rsp+0x8],rbx
1400838a5: mov    QWORD PTR [rsp+0x10],rdi
1400838aa: push   r14
1400838ac: movsx  rdi,r9w
1400838b0: mov    r10,rcx
1400838b3: movsx  rcx,WORD PTR [rsp+0x30]
1400838b9: mov    r11,r8
1400838bc: mov    rbx,rdx
1400838bf: test   di,di
1400838c2: js     0x140083953
1400838c8: mov    r9d,edi
1400838cb: cmp    edi,DWORD PTR [r10+0x116bbc]
1400838d2: jge    0x140083953
1400838d4: test   cx,cx
1400838d7: js     0x140083953
1400838d9: mov    r8d,ecx
1400838dc: cmp    ecx,DWORD PTR [r10+0x116bc0]
1400838e3: jge    0x140083953
1400838e5: cmp    WORD PTR [rsp+0x38],0x0
1400838eb: jl     0x140083953
1400838ed: movsx  eax,WORD PTR [rsp+0x38]
1400838f2: cmp    eax,DWORD PTR [r10+0x116bc4]
1400838f9: jge    0x140083953
1400838fb: mov    r14,QWORD PTR [r10+0x116b88]
140083902: test   r14,r14
140083905: je     0x140083959
140083907: mov    rdx,rcx
14008390a: mov    rax,rdi
14008390d: movsx  rcx,WORD PTR [rsp+0x38]
140083913: shr    rax,0x4
140083917: shr    rdx,0x4
14008391b: mov    rax,QWORD PTR [r14+rax*8]
14008391f: mov    rax,QWORD PTR [rax+rdx*8]
140083923: mov    rcx,QWORD PTR [rax+rcx*8]
140083927: test   rcx,rcx
14008392a: je     0x140083959
14008392c: and    r8w,0xf
140083931: and    r9w,0xf
140083936: mov    WORD PTR [rsp+0x30],r8w
14008393c: mov    rdx,rbx
14008393f: mov    r8,r11
140083942: mov    rbx,QWORD PTR [rsp+0x10]
140083947: mov    rdi,QWORD PTR [rsp+0x18]
14008394c: pop    r14
14008394e: jmp    0x140528f20
140083953: mov    r8d,ecx
140083956: mov    r9d,edi
140083959: mov    eax,0x2aaaaaab
14008395e: imul   r9d
140083961: mov    eax,DWORD PTR [r10+0x116bc8]
140083968: sar    edx,0x3
14008396b: mov    ecx,edx
14008396d: shr    ecx,0x1f
140083970: add    edx,ecx
140083972: add    eax,edx
140083974: cdq
140083975: and    edx,0xf
140083978: add    eax,edx
14008397a: sar    eax,0x4
14008397d: mov    WORD PTR [rbx],ax
140083980: mov    eax,0x2aaaaaab
140083985: imul   r8d
140083988: sar    edx,0x3
14008398b: mov    eax,edx
14008398d: shr    eax,0x1f
140083990: add    edx,eax
140083992: mov    eax,DWORD PTR [r10+0x116bcc]
140083999: add    eax,edx
14008399b: cdq
14008399c: and    edx,0xf
14008399f: add    eax,edx
1400839a1: sar    eax,0x4
1400839a4: mov    WORD PTR [r11],ax
1400839a8: xor    eax,eax
1400839aa: cmp    WORD PTR [rbx],ax
1400839ad: jge    0x1400839b2
1400839af: mov    WORD PTR [rbx],ax
1400839b2: cmp    WORD PTR [r11],ax
1400839b6: jge    0x1400839bc
1400839b8: mov    WORD PTR [r11],ax
1400839bc: mov    rax,QWORD PTR [r10+0x11a638]
1400839c3: mov    ecx,DWORD PTR [rax+0xa0]
1400839c9: movsx  eax,WORD PTR [rbx]
1400839cc: cmp    eax,ecx
1400839ce: jl     0x1400839d6
1400839d0: dec    cx
1400839d3: mov    WORD PTR [rbx],cx
1400839d6: mov    rax,QWORD PTR [r10+0x11a638]
1400839dd: mov    ecx,DWORD PTR [rax+0xa4]
1400839e3: movsx  eax,WORD PTR [r11]
1400839e7: cmp    eax,ecx
1400839e9: jl     0x1400839f2
1400839eb: dec    cx
1400839ee: mov    WORD PTR [r11],cx
1400839f2: mov    rbx,QWORD PTR [rsp+0x10]
1400839f7: mov    rdi,QWORD PTR [rsp+0x18]
1400839fc: pop    r14
1400839fe: ret
