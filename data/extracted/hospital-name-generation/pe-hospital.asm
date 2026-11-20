; Fortress location creation: menu index 4, allocate hospital
0x140339033: cmp    DWORD PTR [rsp+0x4cc],0x4
0x14033903b: jne    0x14033934f
0x140339041: mov    edx,DWORD PTR [rip+0x207caad]        # 0x1423b5af4
0x140339047: mov    rcx,QWORD PTR [rip+0x21d4f8a]        # 0x14250dfd8
0x14033904e: call   0x14007f150
0x140339053: mov    QWORD PTR [rsp+0x1188],rax
0x14033905b: cmp    QWORD PTR [rsp+0x1188],0x0
0x140339064: jne    0x14033906d
0x140339066: xor    al,al
0x140339068: jmp    0x140367890
0x14033906d: call   0x140311090
0x140339072: mov    QWORD PTR [rsp+0x858],rax

; Register hospital at site, look up civilization, generate hospital.name
0x140339207: mov    rax,QWORD PTR [rsp+0x1188]
0x14033920f: add    rax,0x2b0
0x140339215: mov    rdx,rax
0x140339218: mov    rcx,QWORD PTR [rsp+0x858]
0x140339220: call   0x1403d05f0
0x140339225: mov    rax,QWORD PTR [rsp+0x1188]
0x14033922d: add    rax,0x2c8
0x140339233: mov    eax,DWORD PTR [rax]
0x140339235: inc    eax
0x140339237: mov    rcx,QWORD PTR [rsp+0x1188]
0x14033923f: add    rcx,0x2c8
0x140339246: mov    DWORD PTR [rcx],eax
0x140339248: mov    edx,DWORD PTR [rip+0x207c8a2]        # 0x1423b5af0
0x14033924e: lea    rcx,[rip+0x20baa23]        # 0x1423f3c78
0x140339255: call   0x14007f120
0x14033925a: mov    QWORD PTR [rsp+0x39e8],rax
0x140339262: cmp    QWORD PTR [rsp+0x39e8],0x0
0x14033926b: je     0x140339291
0x14033926d: mov    rax,QWORD PTR [rsp+0x858]
0x140339275: add    rax,0xb8
0x14033927b: mov    r8w,0x36
0x140339280: mov    rdx,rax
0x140339283: mov    rcx,QWORD PTR [rsp+0x39e8]
0x14033928b: call   0x1409aa010
0x140339290: nop

; Location function: language and exceptional utterance route
0x1409aa010: mov    QWORD PTR [rsp+0x8],rbx
0x1409aa015: mov    QWORD PTR [rsp+0x10],rbp
0x1409aa01a: mov    QWORD PTR [rsp+0x18],rsi
0x1409aa01f: push   rdi
0x1409aa020: sub    rsp,0x30
0x1409aa024: mov    rdi,QWORD PTR [rcx+0x8]
0x1409aa028: mov    rsi,rdx
0x1409aa02b: movsx  ebx,r8w
0x1409aa02f: mov    rbp,rcx
0x1409aa032: cmp    QWORD PTR [rdi+0x3c0],0x0
0x1409aa03a: jne    0x1409aa08e
0x1409aa03c: movsx  rax,WORD PTR [rcx+0x98]
0x1409aa044: test   ax,ax
0x1409aa047: js     0x1409aa08e
0x1409aa049: mov    rdx,QWORD PTR [rip+0x1b64e98]        # 0x14250eee8
0x1409aa050: mov    rcx,rax
0x1409aa053: mov    rax,QWORD PTR [rip+0x1b64e96]        # 0x14250eef0
0x1409aa05a: sub    rax,rdx
0x1409aa05d: sar    rax,0x3
0x1409aa061: cmp    rcx,rax
0x1409aa064: jae    0x1409aa08e
0x1409aa066: mov    rax,QWORD PTR [rdx+rcx*8]
0x1409aa06a: cmp    DWORD PTR [rax+0x1b0],0xb
0x1409aa071: jle    0x1409aa084
0x1409aa073: mov    rax,QWORD PTR [rax+0x1a8]
0x1409aa07a: test   BYTE PTR [rax+0xb],0x1
0x1409aa07e: je     0x1409aa084
0x1409aa080: mov    al,0x1
0x1409aa082: jmp    0x1409aa086
0x1409aa084: xor    al,al
0x1409aa086: test   al,al
0x1409aa088: jne    0x1409aa39f
0x1409aa08e: lea    rdx,[rdi+0x3b0]
0x1409aa095: lea    rcx,[rip+0x1b65b54]        # 0x14250fbf0
0x1409aa09c: call   0x1401fd1c0
0x1409aa0a1: lea    ecx,[rbx-0x15]
0x1409aa0a4: mov    r10d,eax
0x1409aa0a7: cmp    ecx,0x21
0x1409aa0aa: ja     0x1409aa39f
0x1409aa0b0: lea    rax,[rip+0xffffffffff655f49]        # 0x140000000
0x1409aa0b7: movsxd rcx,ecx
0x1409aa0ba: mov    edx,DWORD PTR [rax+rcx*4+0x9aa3c4]
0x1409aa0c1: add    rdx,rax
0x1409aa0c4: jmp    rdx

; Location switch for type 54 (entry va 0x1409aa448)
0x1409aa1b0: lea    rax,[rdi+0x3d0]
0x1409aa1b7: movzx  r8d,bx
0x1409aa1bb: lea    r9,[rip+0x1b6a5d6]        # 0x142514798
0x1409aa1c2: mov    QWORD PTR [rsp+0x20],rax
0x1409aa1c7: mov    edx,r10d
0x1409aa1ca: mov    rcx,rsi
0x1409aa1cd: call   0x140aac300
0x1409aa1d2: jmp    0x1409aa3ae

; Delegate on exceptional route
0x1409aa39f: movzx  r8d,bx
0x1409aa3a3: mov    rdx,rsi
0x1409aa3a6: mov    rcx,rbp
0x1409aa3a9: call   0x14094b310

; Category 67 inclusion and global table build
0x140d49e6d: lea    rdx,[rip+0x9e7d5c]        # 0x141731bd0 ; 'NAME_BUILDING_HOSPITAL'
0x140d49e74: lea    rcx,[rbp+0x5f0]
0x140d49e7b: call   0x140069780
0x140d49e80: nop
0x140d49e81: lea    rdx,[rbp+0x5f0]
0x140d49e88: mov    rcx,rbx
0x140d49e8b: call   0x1406d36d0
0x140d49e90: mov    DWORD PTR [rbp+0x44c],eax
0x140d49e96: lea    rdx,[rbp+0x44c]
0x140d49e9d: lea    rcx,[rsp+0x60]
0x140d49ea2: call   0x140070a40
0x140d49ea7: nop
0x140d49ea8: jmp    0x140d4b9fd

; Global table build (common tail)
0x140d4ba09: lea    rcx,[rdi+rdi*8]
0x140d4ba0d: shl    rcx,0x5
0x140d4ba11: lea    r8,[rbx+0x4cc8]
0x140d4ba18: add    r8,rcx
0x140d4ba1b: lea    rdx,[rbx+0x48]
0x140d4ba1f: add    rdx,rcx
0x140d4ba22: lea    rax,[rsp+0x30]
0x140d4ba27: mov    QWORD PTR [rsp+0x28],rax
0x140d4ba2c: lea    rax,[rsp+0x48]
0x140d4ba31: mov    QWORD PTR [rsp+0x20],rax
0x140d4ba36: lea    r9,[rsp+0x60]
0x140d4ba3b: mov    rcx,rbx
0x140d4ba3e: call   0x140d4eb70

; REMAINING appends when category has no explicit SELECT entry
0x140946d66: lea    rdx,[rip+0xda29b3]        # 0x1416e9720 ; 'REMAINING'
0x140946d6d: lea    rcx,[rbp-0x8]
0x140946d71: call   0x1400714b0
0x140946d76: test   al,al
0x140946d78: je     0x140946ddb
0x140946d7a: xor    eax,eax
0x140946d7c: mov    edi,eax
0x140946d7e: mov    r12,QWORD PTR [rsp+0x20]
0x140946d83: mov    ebx,eax
0x140946d85: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x140946d90: lea    rdx,[r12+0x18]
0x140946d95: mov    ecx,edi
0x140946d97: call   0x1400e2a50
0x140946d9c: cmp    eax,0xffffffff
0x140946d9f: jne    0x140946db8
0x140946da1: mov    rcx,QWORD PTR [r12]
0x140946da5: add    rcx,0x2e90
0x140946dac: add    rcx,rbx
0x140946daf: lea    rdx,[rbp-0x48]
0x140946db3: call   0x1400bcda0
0x140946db8: inc    edi
0x140946dba: add    rbx,0x18
0x140946dbe: cmp    edi,0x13
0x140946dc1: jl     0x140946d90

; The explicit SELECT records the individual category
0x140946ddb: lea    rcx,[rbp-0x8]
0x140946ddf: call   0x140762a90
0x140946de4: mov    DWORD PTR [rsp+0x30],eax
0x140946de8: cmp    eax,0x12
0x140946deb: ja     0x140946e22
0x140946ded: cdqe
0x140946def: lea    rdx,[rax+rax*2]
0x140946df3: mov    rax,QWORD PTR [rsp+0x20]
0x140946df8: mov    rax,QWORD PTR [rax]
0x140946dfb: lea    rdx,[rdx+0x5d2]
0x140946e02: lea    rcx,[rax+rdx*8]
0x140946e06: lea    rdx,[rbp-0x48]
0x140946e0a: call   0x1400bcda0
0x140946e0f: mov    rdx,QWORD PTR [rsp+0x20]
0x140946e14: add    rdx,0x18
0x140946e18: mov    ecx,DWORD PTR [rsp+0x30]
0x140946e1c: call   0x1409fe3f0
0x140946e21: nop

; CULL ALL appends to all 19 civilization cull lists
0x140947010: lea    rdx,[rip+0xd55041]        # 0x14169c058 ; 'ALL'
0x140947017: lea    rcx,[rbp-0x8]
0x14094701b: call   0x1400714b0
0x140947020: test   al,al
0x140947022: je     0x140947068
0x140947024: xor    eax,eax
0x140947026: mov    r13d,eax
0x140947029: mov    edi,0x13
0x14094702e: mov    rsi,QWORD PTR [rsp+0x20]
0x140947033: mov    rcx,QWORD PTR [rsi]
0x140947036: add    rcx,0x3220
0x14094703d: add    rcx,r13
0x140947040: lea    rdx,[rbp-0x48]
0x140947044: call   0x1400bcda0
0x140947049: add    r13,0x18
0x14094704d: sub    rdi,0x1
0x140947051: jne    0x140947033

; Build both selectors per civilization category
0x14094d950: lea    rax,[rsi+rsi*8]
0x14094d954: shl    rax,0x5
0x14094d958: lea    r8,[rax+0x1930]
0x14094d95f: add    r8,r12
0x14094d962: lea    rdx,[rax+0x3d0]
0x14094d969: add    rdx,r12
0x14094d96c: lea    rax,[rbp-0x60]
0x14094d970: mov    QWORD PTR [rsp+0x28],rax
0x14094d975: lea    rax,[rbp-0x48]
0x14094d979: mov    QWORD PTR [rsp+0x20],rax
0x14094d97e: lea    r9,[rbp-0x30]
0x14094d982: call   0x140d4eb70

; Hospital grammar: all mode and slot draws
0x140aad227: mov    rcx,QWORD PTR [rsp+0x20]
0x140aad22c: lea    rbp,[rbx+0x66]
0x140aad230: lea    r14,[rbx+0x54]
0x140aad234: mov    QWORD PTR [rsp+0x38],rbp
0x140aad239: mov    r8,rbp
0x140aad23c: mov    rdx,r14
0x140aad23f: mov    r9d,0x2
0x140aad245: call   0x140d4dbd0
0x140aad24a: call   0x140ece790
0x140aad24f: mov    r8d,eax
0x140aad252: mov    eax,0x3
0x140aad257: mul    r8d
0x140aad25a: mov    ecx,r8d
0x140aad25d: mov    eax,0xbfffffff
0x140aad262: sub    ecx,edx
0x140aad264: shr    ecx,1
0x140aad266: add    ecx,edx
0x140aad268: shr    ecx,0x1e
0x140aad26b: imul   ecx,ecx,0x7fffffff
0x140aad271: sub    r8d,ecx
0x140aad274: mul    r8d
0x140aad277: mov    edi,edx
0x140aad279: shr    edi,0x1d
0x140aad27c: call   0x140ece790
0x140aad281: mov    r8d,eax
0x140aad284: mov    eax,0x3
0x140aad289: mul    r8d
0x140aad28c: mov    ecx,r8d
0x140aad28f: sub    ecx,edx
0x140aad291: shr    ecx,1
0x140aad293: add    ecx,edx
0x140aad295: shr    ecx,0x1e
0x140aad298: imul   ecx,ecx,0x7fffffff
0x140aad29e: sub    r8d,ecx
0x140aad2a1: cmp    r8d,0x28f5c29
0x140aad2a8: jb     0x140aad2ce
0x140aad2aa: call   0x140ece790
0x140aad2af: mov    edi,eax
0x140aad2b1: mov    eax,0x3
0x140aad2b6: mul    edi
0x140aad2b8: mov    eax,edi
0x140aad2ba: sub    eax,edx
0x140aad2bc: shr    eax,1
0x140aad2be: add    eax,edx
0x140aad2c0: shr    eax,0x1e
0x140aad2c3: imul   eax,eax,0x7fffffff
0x140aad2c9: sub    edi,eax
0x140aad2cb: shr    edi,0x1e
0x140aad2ce: test   edi,edi
0x140aad2d0: jne    0x140aad2e2
0x140aad2d2: lea    r8,[rbx+0x68]
0x140aad2d6: mov    r9d,0x5
0x140aad2dc: lea    rdx,[rbx+0x58]
0x140aad2e0: jmp    0x140aad35e
0x140aad2e2: cmp    edi,0x2
0x140aad2e5: jne    0x140aad2ff
0x140aad2e7: lea    r8,[rbx+0x68]
0x140aad2eb: mov    r9d,0x5
0x140aad2f1: lea    rdx,[rbx+0x58]
0x140aad2f5: mov    rcx,r15
0x140aad2f8: call   0x140d4dbd0
0x140aad2fd: jmp    0x140aad304
0x140aad2ff: cmp    edi,0x1
0x140aad302: jne    0x140aad366
0x140aad304: lea    rdx,[rbx+0x48]
0x140aad308: mov    r9d,0x3
0x140aad30e: lea    r8,[rbx+0x60]
0x140aad312: mov    QWORD PTR [rsp+0x48],rdx
0x140aad317: mov    rcx,r15
0x140aad31a: call   0x140d4dbd0
0x140aad31f: call   0x140ece790
0x140aad324: mov    r8d,eax
0x140aad327: mov    eax,0x3
0x140aad32c: mul    r8d
0x140aad32f: mov    ecx,r8d
0x140aad332: sub    ecx,edx
0x140aad334: shr    ecx,1
0x140aad336: add    ecx,edx
0x140aad338: shr    ecx,0x1e
0x140aad33b: imul   ecx,ecx,0x7fffffff
0x140aad341: sub    r8d,ecx
0x140aad344: cmp    r8d,0x147ae15
0x140aad34b: jae    0x140aad366
0x140aad34d: lea    rsi,[rbx+0x4c]
0x140aad351: mov    r9d,0x3
0x140aad357: mov    rdx,rsi
0x140aad35a: lea    r8,[rbx+0x62]
0x140aad35e: mov    rcx,r15
0x140aad361: call   0x140d4dbd0
0x140aad366: call   0x140ece790
0x140aad36b: mov    r8d,eax
0x140aad36e: mov    eax,0x3
0x140aad373: mul    r8d
0x140aad376: mov    ecx,r8d
0x140aad379: sub    ecx,edx
0x140aad37b: shr    ecx,1
0x140aad37d: add    ecx,edx
0x140aad37f: shr    ecx,0x1e
0x140aad382: imul   ecx,ecx,0x7fffffff
0x140aad388: sub    r8d,ecx
0x140aad38b: cmp    r8d,0x147ae15
0x140aad392: jae    0x140aac9d4
0x140aad398: lea    r13,[rbx+0x50]
0x140aad39c: mov    r9d,0x4
0x140aad3a2: mov    rdx,r13
0x140aad3a5: lea    r8,[rbx+0x64]
0x140aad3a9: mov    rcx,r15
0x140aad3ac: call   0x140d4dbd0
0x140aad3b1: jmp    0x140aac9d4

; Location detail: fetch name and call English formatter before width truncation
0x1403ba87b: mov    rcx,QWORD PTR [r15+0x8]
0x1403ba87f: mov    rax,QWORD PTR [rcx]
0x1403ba882: call   QWORD PTR [rax+0x10]
0x1403ba885: mov    rbx,rax
0x1403ba888: test   rax,rax
0x1403ba88b: je     0x1403ba97a
0x1403ba891: cmp    BYTE PTR [rax+0x72],0x0
0x1403ba895: je     0x1403ba97a
0x1403ba89b: xor    r8d,r8d
0x1403ba89e: mov    edx,0x7
0x1403ba8a3: mov    r9b,0x1
0x1403ba8a6: lea    rcx,[rip+0x22b1fc3]        # 0x14266c870
0x1403ba8ad: call   0x1400bc760
0x1403ba8b2: lea    r8d,[rsi+0x6]
0x1403ba8b6: mov    edx,r12d
0x1403ba8b9: lea    rcx,[rip+0x22b1fb0]        # 0x14266c870
0x1403ba8c0: call   0x1400bc750
0x1403ba8c5: lea    rcx,[rbp+0x50]
0x1403ba8c9: call   0x140070cc0
0x1403ba8ce: nop
0x1403ba8cf: xor    r9d,r9d
0x1403ba8d2: mov    r8b,0x1
0x1403ba8d5: lea    rdx,[rbp+0x50]
0x1403ba8d9: mov    rcx,rbx
0x1403ba8dc: call   0x140aae180

; Hospital type label at the next position
0x1403ba9c6: lea    r8d,[rsi+0x6]
0x1403ba9ca: lea    edx,[r12+0x1]
0x1403ba9cf: lea    rcx,[rip+0x22b1e9a]        # 0x14266c870
0x1403ba9d6: call   0x1400bc750
0x1403ba9db: lea    rdx,[rip+0x128d016]        # 0x1416479f8 ; 'Hospital'
0x1403ba9e2: lea    rcx,[rbp+0x30]
0x1403ba9e6: call   0x140069780

; Location rename tooltip
0x14040a1fe: lea    rdx,[rip+0x1245d0b]        # 0x14164ff10 ; 'Rename this location.'
0x14040a205: lea    rcx,[rbp-0x30]
0x14040a209: call   0x140069780
