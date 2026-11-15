; classic PE:6aea11a5:0272d000; guild-profession; RVA 0x1340270..0x1341714; code ends 0x13414f8
0x1340270: rex push rbx
0x1340272: push   rdi
0x1340273: push   r14
0x1340275: push   r15
0x1340277: sub    rsp,0x48
0x134027b: movzx  r14d,BYTE PTR [rsp+0xa0]
0x1340284: mov    eax,0x86
0x1340289: movsx  rdi,r9w
0x134028d: mov    r15,rdx
0x1340290: movsx  r9,r8w
0x1340294: mov    rbx,rcx
0x1340297: cmp    r9w,ax
0x134029b: ja     0x1413414ea
0x13402a1: mov    QWORD PTR [rsp+0x70],rbp
0x13402a6: lea    rcx,[rip+0x11c8b1b]        # 0x142508dc8
0x13402ad: movsx  rbp,WORD PTR [rsp+0x98]
0x13402b6: movzx  edx,di
0x13402b9: mov    QWORD PTR [rsp+0x78],rsi
0x13402be: movzx  r8d,bp
0x13402c2: mov    QWORD PTR [rsp+0x80],r12
0x13402ca: mov    sil,0x1
0x13402cd: mov    r12,QWORD PTR [rsp+0x90]
0x13402d5: mov    BYTE PTR [r12],0x0
0x13402da: call   0x14030e690
0x13402df: test   al,al
0x13402e1: je     0x141340316
0x13402e3: movzx  eax,BYTE PTR [rsp+0xa8]
0x13402eb: lea    rcx,[rip+0x11c8ad6]        # 0x142508dc8
0x13402f2: mov    BYTE PTR [rsp+0x30],al
0x13402f6: movzx  r8d,di
0x13402fa: mov    BYTE PTR [rsp+0x28],r14b
0x13402ff: mov    rdx,rbx
0x1340302: mov    WORD PTR [rsp+0x20],r9w
0x1340308: movzx  r9d,bp
0x134030c: call   0x14030e760
0x1340311: jmp    0x1413414d8
0x1340316: mov    QWORD PTR [rsp+0x40],r13
0x134031b: movzx  r13d,BYTE PTR [rsp+0xa8]
0x1340324: cmp    r9d,0x86
0x134032b: ja     0x1413414a7
0x1340331: lea    rdx,[rip+0xfffffffffecbfcc8]        # 0x140000000
0x1340338: mov    ecx,DWORD PTR [rdx+r9*4+0x13414f8]
0x1340340: add    rcx,rdx
0x1340343: jmp    rcx
0x1340345: mov    r8d,0x5
0x134034b: lea    rdx,[rip+0x45c5c2]        # 0x14179c914 ; cstring='miner'
0x1340352: mov    rcx,rbx
0x1340355: call   0x140070e90
0x134035a: jmp    0x1413414a7
0x134035f: mov    r8d,0xa
0x1340365: lea    rdx,[rip+0x45c5f4]        # 0x14179c960 ; cstring='woodworker'
0x134036c: mov    rcx,rbx
0x134036f: call   0x140070e90
0x1340374: jmp    0x1413414a7
0x1340379: mov    r8d,0x9
0x134037f: lea    rdx,[rip+0x45c5ea]        # 0x14179c970 ; cstring='carpenter'
0x1340386: mov    rcx,rbx
0x1340389: call   0x140070e90
0x134038e: jmp    0x1413414a7
0x1340393: mov    r8d,0x6
0x1340399: lea    rdx,[rip+0x45c5a8]        # 0x14179c948 ; cstring='bowyer'
0x13403a0: mov    rcx,rbx
0x13403a3: call   0x140070e90
0x13403a8: jmp    0x1413414a7
0x13403ad: mov    r8d,0xa
0x13403b3: lea    rdx,[rip+0x45c596]        # 0x14179c950 ; cstring='woodcutter'
0x13403ba: mov    rcx,rbx
0x13403bd: call   0x140070e90
0x13403c2: jmp    0x1413414a7
0x13403c7: mov    r8d,0xb
0x13403cd: lea    rdx,[rip+0x45c73c]        # 0x14179cb10 ; cstring='stoneworker'
0x13403d4: mov    rcx,rbx
0x13403d7: call   0x140070e90
0x13403dc: jmp    0x1413414a7
0x13403e1: mov    r8d,0x8
0x13403e7: lea    rdx,[rip+0x45c732]        # 0x14179cb20 ; cstring='engraver'
0x13403ee: mov    rcx,rbx
0x13403f1: call   0x140070e90
0x13403f6: jmp    0x1413414a7
0x13403fb: mov    r8d,0xb
0x1340401: lea    rdx,[rip+0x45c6e8]        # 0x14179caf0 ; cstring='stonecutter'
0x1340408: mov    rcx,rbx
0x134040b: call   0x140070e90
0x1340410: jmp    0x1413414a7
0x1340415: mov    r8d,0xc
0x134041b: lea    rdx,[rip+0x45c6de]        # 0x14179cb00 ; cstring='stone carver'
0x1340422: mov    rcx,rbx
0x1340425: call   0x140070e90
0x134042a: jmp    0x1413414a7
0x134042f: mov    r8d,0x5
0x1340435: lea    rdx,[rip+0x45c71c]        # 0x14179cb58 ; cstring='mason'
0x134043c: mov    rcx,rbx
0x134043f: call   0x140070e90
0x1340444: jmp    0x1413414a7
0x1340449: mov    r8d,0x6
0x134044f: lea    rdx,[rip+0x45c70a]        # 0x14179cb60 ; cstring='ranger'
0x1340456: mov    rcx,rbx
0x1340459: call   0x140070e90
0x134045e: jmp    0x1413414a7
0x1340463: mov    r8d,0x10
0x1340469: lea    rdx,[rip+0x45c6c0]        # 0x14179cb30 ; cstring='animal caretaker'
0x1340470: mov    rcx,rbx
0x1340473: call   0x140070e90
0x1340478: jmp    0x1413414a7
0x134047d: mov    r8d,0xe
0x1340483: lea    rdx,[rip+0x45c6be]        # 0x14179cb48 ; cstring='animal trainer'
0x134048a: mov    rcx,rbx
0x134048d: call   0x140070e90
0x1340492: jmp    0x1413414a7
0x1340497: mov    r8d,0x6
0x134049d: lea    rdx,[rip+0x3819f0]        # 0x1416c1e94 ; cstring='hunter'
0x13404a4: mov    rcx,rbx
0x13404a7: call   0x140070e90
0x13404ac: jmp    0x1413414a7
0x13404b1: mov    r8d,0x7
0x13404b7: lea    rdx,[rip+0x45c5da]        # 0x14179ca98 ; cstring='trapper'
0x13404be: mov    rcx,rbx
0x13404c1: call   0x140070e90
0x13404c6: jmp    0x1413414a7
0x13404cb: mov    r8d,0x10
0x13404d1: lea    rdx,[rip+0x45c5c8]        # 0x14179caa0 ; cstring='animal dissector'
0x13404d8: mov    rcx,rbx
0x13404db: call   0x140070e90
0x13404e0: jmp    0x1413414a7
0x13404e5: mov    r8d,0xa
0x13404eb: lea    rdx,[rip+0x45c57e]        # 0x14179ca70 ; cstring='metalsmith'
0x13404f2: mov    rcx,rbx
0x13404f5: call   0x140070e90
0x13404fa: jmp    0x1413414a7
0x13404ff: mov    r8d,0x10
0x1340505: lea    rdx,[rip+0x45c574]        # 0x14179ca80 ; cstring='furnace operator'
0x134050c: mov    rcx,rbx
0x134050f: call   0x140070e90
0x1340514: jmp    0x1413414a7
0x1340519: mov    r8d,0xb
0x134051f: lea    rdx,[rip+0x45c5b2]        # 0x14179cad8 ; cstring='weaponsmith'
0x1340526: mov    rcx,rbx
0x1340529: call   0x140070e90
0x134052e: jmp    0x1413414a7
0x1340533: mov    r8d,0x7
0x1340539: lea    rdx,[rip+0x45c5a8]        # 0x14179cae8 ; cstring='armorer'
0x1340540: mov    rcx,rbx
0x1340543: call   0x140070e90
0x1340548: jmp    0x1413414a7
0x134054d: mov    r8d,0xa
0x1340553: lea    rdx,[rip+0x45c55e]        # 0x14179cab8 ; cstring='blacksmith'
0x134055a: mov    rcx,rbx
0x134055d: call   0x140070e90
0x1340562: jmp    0x1413414a7
0x1340567: mov    r8d,0xc
0x134056d: lea    rdx,[rip+0x45c554]        # 0x14179cac8 ; cstring='metalcrafter'
0x1340574: mov    rcx,rbx
0x1340577: call   0x140070e90
0x134057c: jmp    0x1413414a7
0x1340581: mov    r8d,0x7
0x1340587: lea    rdx,[rip+0x45cec2]        # 0x14179d450 ; cstring='jeweler'
0x134058e: mov    rcx,rbx
0x1340591: call   0x140070e90
0x1340596: jmp    0x1413414a7
0x134059b: mov    r8d,0xa
0x13405a1: lea    rdx,[rip+0x45ceb0]        # 0x14179d458 ; cstring='gem cutter'
0x13405a8: mov    rcx,rbx
0x13405ab: call   0x140070e90
0x13405b0: jmp    0x1413414a7
0x13405b5: mov    r8d,0xa
0x13405bb: lea    rdx,[rip+0x45ce6e]        # 0x14179d430 ; cstring='gem setter'
0x13405c2: mov    rcx,rbx
0x13405c5: call   0x140070e90
0x13405ca: jmp    0x1413414a7
0x13405cf: lea    rax,[rip+0x300eda]        # 0x1416414b0 ; cstring='craftsman'
0x13405d6: lea    rdx,[rip+0x408b03]        # 0x1417490e0 ; cstring='craftsmen'
0x13405dd: test   r14b,r14b
0x13405e0: mov    r8d,0x9
0x13405e6: cmove  rdx,rax
0x13405ea: jmp    0x14134149c
0x13405ef: mov    r8d,0xb
0x13405f5: lea    rdx,[rip+0x45ce44]        # 0x14179d440 ; cstring='woodcrafter'
0x13405fc: mov    rcx,rbx
0x13405ff: call   0x140070e90
0x1340604: jmp    0x1413414a7
0x1340609: mov    r8d,0xa
0x134060f: lea    rdx,[rip+0x45ce62]        # 0x14179d478 ; cstring='papermaker'
0x1340616: mov    rcx,rbx
0x1340619: call   0x140070e90
0x134061e: jmp    0x1413414a7
0x1340623: mov    r8d,0xa
0x1340629: lea    rdx,[rip+0x45ce58]        # 0x14179d488 ; cstring='bookbinder'
0x1340630: mov    rcx,rbx
0x1340633: call   0x140070e90
0x1340638: jmp    0x1413414a7
0x134063d: mov    r8d,0x6
0x1340643: lea    rdx,[rip+0x45ce1a]        # 0x14179d464 ; cstring='potter'
0x134064a: mov    rcx,rbx
0x134064d: call   0x140070e90
0x1340652: jmp    0x1413414a7
0x1340657: mov    r8d,0x6
0x134065d: lea    rdx,[rip+0x45ce08]        # 0x14179d46c ; cstring='glazer'
0x1340664: mov    rcx,rbx
0x1340667: call   0x140070e90
0x134066c: jmp    0x1413414a7
0x1340671: mov    r8d,0xa
0x1340677: lea    rdx,[rip+0x45cd52]        # 0x14179d3d0 ; cstring='wax worker'
0x134067e: mov    rcx,rbx
0x1340681: call   0x140070e90
0x1340686: jmp    0x1413414a7
0x134068b: mov    r8d,0xc
0x1340691: lea    rdx,[rip+0x45cd48]        # 0x14179d3e0 ; cstring='stonecrafter'
0x1340698: mov    rcx,rbx
0x134069b: call   0x140070e90
0x13406a0: jmp    0x1413414a7
0x13406a5: mov    r8d,0xd
0x13406ab: lea    rdx,[rip+0x45ccfe]        # 0x14179d3b0 ; cstring='leatherworker'
0x13406b2: mov    rcx,rbx
0x13406b5: call   0x140070e90
0x13406ba: jmp    0x1413414a7
0x13406bf: mov    r8d,0xb
0x13406c5: lea    rdx,[rip+0x45ccf4]        # 0x14179d3c0 ; cstring='bone carver'
0x13406cc: mov    rcx,rbx
0x13406cf: call   0x140070e90
0x13406d4: jmp    0x1413414a7
0x13406d9: mov    r8d,0x6
0x13406df: lea    rdx,[rip+0x45cd2e]        # 0x14179d414 ; cstring='weaver'
0x13406e6: mov    rcx,rbx
0x13406e9: call   0x140070e90
0x13406ee: jmp    0x1413414a7
0x13406f3: mov    r8d,0x8
0x13406f9: lea    rdx,[rip+0x45cd20]        # 0x14179d420 ; cstring='clothier'
0x1340700: mov    rcx,rbx
0x1340703: call   0x140070e90
0x1340708: jmp    0x1413414a7
0x134070d: mov    r8d,0xa
0x1340713: lea    rdx,[rip+0x45ccd6]        # 0x14179d3f0 ; cstring='glassmaker'
0x134071a: mov    rcx,rbx
0x134071d: call   0x140070e90
0x1340722: jmp    0x1413414a7
0x1340727: mov    r8d,0x10
0x134072d: lea    rdx,[rip+0x45cccc]        # 0x14179d400 ; cstring='strand extractor'
0x1340734: mov    rcx,rbx
0x1340737: call   0x140070fd0
0x134073c: jmp    0x1413414a7
0x1340741: mov    r8d,0xe
0x1340747: lea    rdx,[rip+0x45cdb2]        # 0x14179d500 ; cstring='fishery worker'
0x134074e: mov    rcx,rbx
0x1340751: call   0x140070e90
0x1340756: jmp    0x1413414a7
0x134075b: lea    rax,[rip+0x45cd7e]        # 0x14179d4e0 ; cstring='fisherman'
0x1340762: lea    rdx,[rip+0x45cda7]        # 0x14179d510 ; cstring='fishermen'
0x1340769: test   r14b,r14b
0x134076c: mov    r8d,0x9
0x1340772: cmove  rdx,rax
0x1340776: jmp    0x14134149c
0x134077b: mov    r8d,0xe
0x1340781: lea    rdx,[rip+0x45cd68]        # 0x14179d4f0 ; cstring='fish dissector'
0x1340788: mov    rcx,rbx
0x134078b: call   0x140070e90
0x1340790: jmp    0x1413414a7
0x1340795: mov    r8d,0xc
0x134079b: lea    rdx,[rip+0x45cd96]        # 0x14179d538 ; cstring='fish cleaner'
0x13407a2: mov    rcx,rbx
0x13407a5: call   0x140070e90
0x13407aa: jmp    0x1413414a7
0x13407af: mov    r8d,0x6
0x13407b5: lea    rdx,[rip+0x45cd8c]        # 0x14179d548 ; cstring='farmer'
0x13407bc: mov    rcx,rbx
0x13407bf: call   0x140070e90
0x13407c4: jmp    0x1413414a7
0x13407c9: mov    r8d,0xb
0x13407cf: lea    rdx,[rip+0x45cd4a]        # 0x14179d520 ; cstring='cheesemaker'
0x13407d6: mov    rcx,rbx
0x13407d9: call   0x140070e90
0x13407de: jmp    0x1413414a7
0x13407e3: mov    r8d,0x6
0x13407e9: lea    rdx,[rip+0x45cd3c]        # 0x14179d52c ; cstring='milker'
0x13407f0: mov    rcx,rbx
0x13407f3: call   0x140070e90
0x13407f8: jmp    0x1413414a7
0x13407fd: mov    r8d,0x6
0x1340803: lea    rdx,[rip+0x45cc9e]        # 0x14179d4a8 ; cstring='gelder'
0x134080a: mov    rcx,rbx
0x134080d: call   0x140070e90
0x1340812: jmp    0x1413414a7
0x1340817: mov    r8d,0x7
0x134081d: lea    rdx,[rip+0x45cc8c]        # 0x14179d4b0 ; cstring='shearer'
0x1340824: mov    rcx,rbx
0x1340827: call   0x140070e90
0x134082c: jmp    0x1413414a7
0x1340831: mov    r8d,0x7
0x1340837: lea    rdx,[rip+0x45cc5a]        # 0x14179d498 ; cstring='spinner'
0x134083e: mov    rcx,rbx
0x1340841: call   0x140070e90
0x1340846: jmp    0x1413414a7
0x134084b: mov    r8d,0x4
0x1340851: lea    rdx,[rip+0x45cc48]        # 0x14179d4a0 ; cstring='cook'
0x1340858: mov    rcx,rbx
0x134085b: call   0x140070e90
0x1340860: jmp    0x1413414a7
0x1340865: mov    r8d,0x8
0x134086b: lea    rdx,[rip+0x45cc56]        # 0x14179d4c8 ; cstring='thresher'
0x1340872: mov    rcx,rbx
0x1340875: call   0x140070e90
0x134087a: jmp    0x1413414a7
0x134087f: mov    r8d,0x6
0x1340885: lea    rdx,[rip+0x45cc48]        # 0x14179d4d4 ; cstring='miller'
0x134088c: mov    rcx,rbx
0x134088f: call   0x140070e90
0x1340894: jmp    0x1413414a7
0x1340899: mov    r8d,0x7
0x134089f: lea    rdx,[rip+0x4106e2]        # 0x141750f88 ; cstring='butcher'
0x13408a6: mov    rcx,rbx
0x13408a9: call   0x140070e90
0x13408ae: jmp    0x1413414a7
0x13408b3: mov    r8d,0x6
0x13408b9: lea    rdx,[rip+0x45cbf8]        # 0x14179d4b8 ; cstring='tanner'
0x13408c0: mov    rcx,rbx
0x13408c3: call   0x140070e90
0x13408c8: jmp    0x1413414a7
0x13408cd: mov    r8d,0x4
0x13408d3: lea    rdx,[rip+0x45cbe6]        # 0x14179d4c0 ; cstring='dyer'
0x13408da: mov    rcx,rbx
0x13408dd: call   0x140070e90
0x13408e2: jmp    0x1413414a7
0x13408e7: mov    r8d,0x7
0x13408ed: lea    rdx,[rip+0x45cce4]        # 0x14179d5d8 ; cstring='presser'
0x13408f4: mov    rcx,rbx
0x13408f7: call   0x140070e90
0x13408fc: jmp    0x1413414a7
0x1340901: mov    r8d,0x9
0x1340907: lea    rdx,[rip+0x45ccd2]        # 0x14179d5e0 ; cstring='beekeeper'
0x134090e: mov    rcx,rbx
0x1340911: call   0x140070e90
0x1340916: jmp    0x1413414a7
0x134091b: mov    r8d,0x7
0x1340921: lea    rdx,[rip+0x45cc98]        # 0x14179d5c0 ; cstring='planter'
0x1340928: mov    rcx,rbx
0x134092b: call   0x140070e90
0x1340930: jmp    0x1413414a7
0x1340935: mov    r8d,0x9
0x134093b: lea    rdx,[rip+0x45cc86]        # 0x14179d5c8 ; cstring='herbalist'
0x1340942: mov    rcx,rbx
0x1340945: call   0x140070e90
0x134094a: jmp    0x1413414a7
0x134094f: mov    r8d,0x6
0x1340955: lea    rdx,[rip+0x45ccb0]        # 0x14179d60c ; cstring='brewer'
0x134095c: mov    rcx,rbx
0x134095f: call   0x140070e90
0x1340964: jmp    0x1413414a7
0x1340969: mov    r8d,0xa
0x134096f: lea    rdx,[rip+0x45cca2]        # 0x14179d618 ; cstring='soap maker'
0x1340976: mov    rcx,rbx
0x1340979: call   0x140070e90
0x134097e: jmp    0x1413414a7
0x1340983: mov    r8d,0xc
0x1340989: lea    rdx,[rip+0x45cc60]        # 0x14179d5f0 ; cstring='potash maker'
0x1340990: mov    rcx,rbx
0x1340993: call   0x140070e90
0x1340998: jmp    0x1413414a7
0x134099d: mov    r8d,0x9
0x13409a3: lea    rdx,[rip+0x45cc56]        # 0x14179d600 ; cstring='lye maker'
0x13409aa: mov    rcx,rbx
0x13409ad: call   0x140070e90
0x13409b2: jmp    0x1413414a7
0x13409b7: mov    r8d,0xb
0x13409bd: lea    rdx,[rip+0x45cbac]        # 0x14179d570 ; cstring='wood burner'
0x13409c4: mov    rcx,rbx
0x13409c7: call   0x140070e90
0x13409cc: jmp    0x1413414a7
0x13409d1: mov    r8d,0x8
0x13409d7: lea    rdx,[rip+0x45cba2]        # 0x14179d580 ; cstring='engineer'
0x13409de: mov    rcx,rbx
0x13409e1: call   0x140070e90
0x13409e6: jmp    0x1413414a7
0x13409eb: mov    r8d,0x8
0x13409f1: lea    rdx,[rip+0x45cb58]        # 0x14179d550 ; cstring='mechanic'
0x13409f8: mov    rcx,rbx
0x13409fb: call   0x140070e90
0x1340a00: jmp    0x1413414a7
0x1340a05: mov    r8d,0xe
0x1340a0b: lea    rdx,[rip+0x45cb4e]        # 0x14179d560 ; cstring='siege engineer'
0x1340a12: mov    rcx,rbx
0x1340a15: call   0x140070e90
0x1340a1a: jmp    0x1413414a7
0x1340a1f: mov    r8d,0xe
0x1340a25: lea    rdx,[rip+0x45cb74]        # 0x14179d5a0 ; cstring='siege operator'
0x1340a2c: mov    rcx,rbx
0x1340a2f: call   0x140070e90
0x1340a34: jmp    0x1413414a7
0x1340a39: mov    r8d,0xd
0x1340a3f: lea    rdx,[rip+0x45cb6a]        # 0x14179d5b0 ; cstring='pump operator'
0x1340a46: mov    rcx,rbx
0x1340a49: call   0x140070e90
0x1340a4e: jmp    0x1413414a7
0x1340a53: mov    r8d,0x5
0x1340a59: lea    rdx,[rip+0x3a5604]        # 0x1416e6064 ; cstring='clerk'
0x1340a60: mov    rcx,rbx
0x1340a63: call   0x140070e90
0x1340a68: jmp    0x1413414a7
0x1340a6d: mov    r8d,0xd
0x1340a73: lea    rdx,[rip+0x33ab36]        # 0x14167b5b0 ; cstring='administrator'
0x1340a7a: mov    rcx,rbx
0x1340a7d: call   0x140070e90
0x1340a82: jmp    0x1413414a7
0x1340a87: mov    r8d,0x6
0x1340a8d: lea    rdx,[rip+0x45caf8]        # 0x14179d58c ; cstring='trader'
0x1340a94: mov    rcx,rbx
0x1340a97: call   0x140070e90
0x1340a9c: jmp    0x1413414a7
0x1340aa1: mov    r8d,0x4
0x1340aa7: lea    rdx,[rip+0x380fd6]        # 0x1416c1a84 ; cstring='poet'
0x1340aae: mov    rcx,rbx
0x1340ab1: call   0x140070e90
0x1340ab6: jmp    0x1413414a7
0x1340abb: mov    r8d,0x4
0x1340ac1: lea    rdx,[rip+0x380fb4]        # 0x1416c1a7c ; cstring='bard'
0x1340ac8: mov    rcx,rbx
0x1340acb: call   0x140070e90
0x1340ad0: jmp    0x1413414a7
0x1340ad5: mov    r8d,0x6
0x1340adb: lea    rdx,[rip+0x380fba]        # 0x1416c1a9c ; cstring='dancer'
0x1340ae2: mov    rcx,rbx
0x1340ae5: call   0x140070e90
0x1340aea: jmp    0x1413414a7
0x1340aef: mov    r8d,0x9
0x1340af5: lea    rdx,[rip+0x3183a4]        # 0x141658ea0 ; cstring='performer'
0x1340afc: mov    rcx,rbx
0x1340aff: call   0x140070e90
0x1340b04: jmp    0x1413414a7
0x1340b09: mov    r8d,0x6
0x1340b0f: lea    rdx,[rip+0x31832a]        # 0x141658e40 ; cstring='scribe'
0x1340b16: mov    rcx,rbx
0x1340b19: call   0x140070e90
0x1340b1e: jmp    0x1413414a7
0x1340b23: mov    r8d,0xd
0x1340b29: lea    rdx,[rip+0x318380]        # 0x141658eb0 ; cstring='tavern keeper'
0x1340b30: mov    rcx,rbx
0x1340b33: call   0x140070e90
0x1340b38: jmp    0x1413414a7
0x1340b3d: mov    r8d,0x6
0x1340b43: lea    rdx,[rip+0x318376]        # 0x141658ec0 ; cstring='doctor'
0x1340b4a: mov    rcx,rbx
0x1340b4d: call   0x140070e90
0x1340b52: jmp    0x1413414a7
0x1340b57: mov    r8d,0xd
0x1340b5d: lea    rdx,[rip+0x31830c]        # 0x141658e70 ; cstring='diagnostician'
0x1340b64: mov    rcx,rbx
0x1340b67: call   0x140070e90
0x1340b6c: jmp    0x1413414a7
0x1340b71: mov    r8d,0xb
0x1340b77: lea    rdx,[rip+0x318312]        # 0x141658e90 ; cstring='bone doctor'
0x1340b7e: mov    rcx,rbx
0x1340b81: call   0x140070e90
0x1340b86: jmp    0x1413414a7
0x1340b8b: mov    r8d,0x7
0x1340b91: lea    rdx,[rip+0x45ca00]        # 0x14179d598 ; cstring='suturer'
0x1340b98: mov    rcx,rbx
0x1340b9b: call   0x140070e90
0x1340ba0: jmp    0x1413414a7
0x1340ba5: mov    r8d,0x7
0x1340bab: lea    rdx,[rip+0x3182b6]        # 0x141658e68 ; cstring='surgeon'
0x1340bb2: mov    rcx,rbx
0x1340bb5: call   0x140070e90
0x1340bba: jmp    0x1413414a7
0x1340bbf: mov    r8d,0x8
0x1340bc5: lea    rdx,[rip+0x45cafc]        # 0x14179d6c8 ; cstring='merchant'
0x1340bcc: mov    rcx,rbx
0x1340bcf: call   0x140070e90
0x1340bd4: jmp    0x1413414a7
0x1340bd9: mov    r8d,0x5
0x1340bdf: lea    rdx,[rip+0x45caee]        # 0x14179d6d4 ; cstring='drunk'
0x1340be6: mov    rcx,rbx
0x1340be9: call   0x140070e90
0x1340bee: jmp    0x1413414a7
0x1340bf3: lea    rax,[rip+0x45cabe]        # 0x14179d6b8 ; cstring='hammerman'
0x1340bfa: lea    rdx,[rip+0x45caa7]        # 0x14179d6a8 ; cstring='hammermen'
0x1340c01: test   r14b,r14b
0x1340c04: mov    r8d,0x9
0x1340c0a: cmove  rdx,rax
0x1340c0e: jmp    0x14134149c
0x1340c13: mov    r8d,0xb
0x1340c19: lea    rdx,[rip+0x45cae0]        # 0x14179d700 ; cstring='Hammer Lord'
0x1340c20: mov    rcx,rbx
0x1340c23: call   0x140070e90
0x1340c28: jmp    0x1413414a7
0x1340c2d: test   r14b,r14b
0x1340c30: lea    rax,[rip+0x45caa9]        # 0x14179d6e0 ; cstring='spearman'
0x1340c37: lea    rdx,[rip+0x45cad2]        # 0x14179d710 ; cstring='spearmen'
0x1340c3e: mov    r8d,0x8
0x1340c44: cmove  rdx,rax
0x1340c48: jmp    0x14134149c
0x1340c4d: mov    r8d,0xb
0x1340c53: lea    rdx,[rip+0x45ca96]        # 0x14179d6f0 ; cstring='Spearmaster'
0x1340c5a: mov    rcx,rbx
0x1340c5d: call   0x140070e90
0x1340c62: jmp    0x1413414a7
0x1340c67: test   r14b,r14b
0x1340c6a: lea    rax,[rip+0x45c9f7]        # 0x14179d668 ; cstring='crossbowman'
0x1340c71: lea    rdx,[rip+0x45c9e0]        # 0x14179d658 ; cstring='crossbowmen'
0x1340c78: mov    r8d,0xb
0x1340c7e: cmove  rdx,rax
0x1340c82: jmp    0x14134149c
0x1340c87: test   r14b,r14b
0x1340c8a: lea    rax,[rip+0x45c9af]        # 0x14179d640 ; cstring='Elite Crossbowmen'
0x1340c91: lea    rdx,[rip+0x45c990]        # 0x14179d628 ; cstring='Elite Crossbowman'
0x1340c98: mov    r8d,0x11
0x1340c9e: cmove  rdx,rax
0x1340ca2: jmp    0x14134149c
0x1340ca7: mov    r8d,0x8
0x1340cad: lea    rdx,[rip+0x45c9d4]        # 0x14179d688 ; cstring='wrestler'
0x1340cb4: mov    rcx,rbx
0x1340cb7: call   0x140070e90
0x1340cbc: jmp    0x1413414a7
0x1340cc1: mov    r8d,0xe
0x1340cc7: lea    rdx,[rip+0x45c9ca]        # 0x14179d698 ; cstring='Elite Wrestler'
0x1340cce: mov    rcx,rbx
0x1340cd1: call   0x140070e90
0x1340cd6: jmp    0x1413414a7
0x1340cdb: lea    rax,[rip+0x45c99a]        # 0x14179d67c ; cstring='axeman'
0x1340ce2: lea    rdx,[rip+0x45c98b]        # 0x14179d674 ; cstring='axemen'
0x1340ce9: test   r14b,r14b
0x1340cec: mov    r8d,0x6
0x1340cf2: cmove  rdx,rax
0x1340cf6: jmp    0x14134149c
0x1340cfb: mov    r8d,0x8
0x1340d01: lea    rdx,[rip+0x45c410]        # 0x14179d118 ; cstring='Axe Lord'
0x1340d08: mov    rcx,rbx
0x1340d0b: call   0x140070e90
0x1340d10: jmp    0x1413414a7
0x1340d15: lea    rax,[rip+0x45c3dc]        # 0x14179d0f8 ; cstring='swordsman'
0x1340d1c: lea    rdx,[rip+0x45c405]        # 0x14179d128 ; cstring='swordsmen'
0x1340d23: test   r14b,r14b
0x1340d26: mov    r8d,0x9
0x1340d2c: cmove  rdx,rax
0x1340d30: jmp    0x14134149c
0x1340d35: mov    r8d,0xb
0x1340d3b: lea    rdx,[rip+0x45c3c6]        # 0x14179d108 ; cstring='Swordmaster'
0x1340d42: mov    rcx,rbx
0x1340d45: call   0x140070e90
0x1340d4a: jmp    0x1413414a7
0x1340d4f: lea    rax,[rip+0x45c402]        # 0x14179d158 ; cstring='maceman'
0x1340d56: lea    rdx,[rip+0x45c3f3]        # 0x14179d150 ; cstring='macemen'
0x1340d5d: test   r14b,r14b
0x1340d60: mov    r8d,0x7
0x1340d66: cmove  rdx,rax
0x1340d6a: jmp    0x14134149c
0x1340d6f: mov    r8d,0x9
0x1340d75: lea    rdx,[rip+0x45c3bc]        # 0x14179d138 ; cstring='Mace Lord'
0x1340d7c: mov    rcx,rbx
0x1340d7f: call   0x140070e90
0x1340d84: jmp    0x1413414a7
0x1340d89: lea    rax,[rip+0x45c308]        # 0x14179d098 ; cstring='pikeman'
0x1340d90: lea    rdx,[rip+0x45c3b1]        # 0x14179d148 ; cstring='pikemen'
0x1340d97: test   r14b,r14b
0x1340d9a: mov    r8d,0x7
0x1340da0: cmove  rdx,rax
0x1340da4: jmp    0x14134149c
0x1340da9: mov    r8d,0xa
0x1340daf: lea    rdx,[rip+0x45c2ea]        # 0x14179d0a0 ; cstring='Pikemaster'
0x1340db6: mov    rcx,rbx
0x1340db9: call   0x140070e90
0x1340dbe: jmp    0x1413414a7
0x1340dc3: lea    rax,[rip+0x45c2c2]        # 0x14179d08c ; cstring='bowman'
0x1340dca: lea    rdx,[rip+0x45c2b3]        # 0x14179d084 ; cstring='bowmen'
0x1340dd1: test   r14b,r14b
0x1340dd4: mov    r8d,0x6
0x1340dda: cmove  rdx,rax
0x1340dde: jmp    0x14134149c
0x1340de3: test   r14b,r14b
0x1340de6: lea    rax,[rip+0x45c2fb]        # 0x14179d0e8 ; cstring='Elite Bowman'
0x1340ded: lea    rdx,[rip+0x45c2e4]        # 0x14179d0d8 ; cstring='Elite Bowmen'
0x1340df4: mov    r8d,0xc
0x1340dfa: cmove  rdx,rax
0x1340dfe: jmp    0x14134149c
0x1340e03: mov    r8d,0xa
0x1340e09: lea    rdx,[rip+0x45c2a0]        # 0x14179d0b0 ; cstring='blowgunner'
0x1340e10: mov    rcx,rbx
0x1340e13: call   0x140070e90
0x1340e18: jmp    0x1413414a7
0x1340e1d: mov    r8d,0x11
0x1340e23: lea    rdx,[rip+0x45c296]        # 0x14179d0c0 ; cstring='Master Blowgunner'
0x1340e2a: mov    rcx,rbx
0x1340e2d: call   0x140070e90
0x1340e32: jmp    0x1413414a7
0x1340e37: mov    r8d,0x6
0x1340e3d: lea    rdx,[rip+0x45c394]        # 0x14179d1d8 ; cstring='lasher'
0x1340e44: mov    rcx,rbx
0x1340e47: call   0x140070e90
0x1340e4c: jmp    0x1413414a7
0x1340e51: mov    r8d,0xd
0x1340e57: lea    rdx,[rip+0x45c382]        # 0x14179d1e0 ; cstring='Master Lasher'
0x1340e5e: mov    rcx,rbx
0x1340e61: call   0x140070e90
0x1340e66: jmp    0x1413414a7
0x1340e6b: mov    r8d,0x7
0x1340e71: lea    rdx,[rip+0x45c348]        # 0x14179d1c0 ; cstring='recruit'
0x1340e78: mov    rcx,rbx
0x1340e7b: call   0x140070e90
0x1340e80: jmp    0x1413414a7
0x1340e85: mov    r8d,0x7
0x1340e8b: lea    rdx,[rip+0x37b8fe]        # 0x1416bc790 ; cstring='hunting'
0x1340e92: mov    rcx,r15
0x1340e95: jmp    0x14134149f
0x1340e9a: mov    r8d,0x3
0x1340ea0: lea    rdx,[rip+0x31f58d]        # 0x141660434 ; cstring='war'
0x1340ea7: mov    rcx,r15
0x1340eaa: jmp    0x14134149f
0x1340eaf: mov    r8d,0xc
0x1340eb5: lea    rdx,[rip+0x45c30c]        # 0x14179d1c8 ; cstring='Master Thief'
0x1340ebc: mov    rcx,rbx
0x1340ebf: call   0x140070e90
0x1340ec4: jmp    0x1413414a7
0x1340ec9: mov    r8d,0x5
0x1340ecf: lea    rdx,[rip+0x38108e]        # 0x1416c1f64 ; cstring='thief'
0x1340ed6: mov    rcx,rbx
0x1340ed9: call   0x140070e90
0x1340ede: jmp    0x1413414a7
0x1340ee3: mov    r8d,0xe
0x1340ee9: lea    rdx,[rip+0x317f90]        # 0x141658e80 ; cstring='monster slayer'
0x1340ef0: mov    rcx,rbx
0x1340ef3: call   0x140070e90
0x1340ef8: jmp    0x1413414a7
0x1340efd: mov    r8d,0x5
0x1340f03: lea    rdx,[rip+0x34f8b2]        # 0x1416907bc ; cstring='scout'
0x1340f0a: mov    rcx,rbx
0x1340f0d: call   0x140070e90
0x1340f12: jmp    0x1413414a7
0x1340f17: mov    r8d,0xc
0x1340f1d: lea    rdx,[rip+0x45c2ec]        # 0x14179d210 ; cstring='beast hunter'
0x1340f24: mov    rcx,rbx
0x1340f27: call   0x140070e90
0x1340f2c: jmp    0x1413414a7
0x1340f31: mov    r8d,0x8
0x1340f37: lea    rdx,[rip+0x3c5512]        # 0x141706450 ; cstring='snatcher'
0x1340f3e: mov    rcx,rbx
0x1340f41: call   0x140070e90
0x1340f46: jmp    0x1413414a7
0x1340f4b: test   r14b,r14b
0x1340f4e: lea    rcx,[rip+0x34fd43]        # 0x141690c98 ; cstring='mercenaries'
0x1340f55: mov    r8d,0xb
0x1340f5b: lea    rdx,[rip+0x2c1cce]        # 0x141602c30 ; cstring='mercenary'
0x1340f62: mov    eax,0x9
0x1340f67: cmove  rdx,rcx
0x1340f6b: cmove  eax,r8d
0x1340f6f: mov    r8d,eax
0x1340f72: jmp    0x14134149c
0x1340f77: mov    r8d,0x4
0x1340f7d: lea    rdx,[rip+0x45c29c]        # 0x14179d220 ; cstring='sage'
0x1340f84: mov    rcx,rbx
0x1340f87: call   0x140070e90
0x1340f8c: jmp    0x1413414a7
0x1340f91: mov    r8d,0x7
0x1340f97: lea    rdx,[rip+0x317f2a]        # 0x141658ec8 ; cstring='scholar'
0x1340f9e: mov    rcx,rbx
0x1340fa1: call   0x140070e90
0x1340fa6: jmp    0x1413414a7
0x1340fab: mov    r8d,0xb
0x1340fb1: lea    rdx,[rip+0x45c238]        # 0x14179d1f0 ; cstring='philosopher'
0x1340fb8: mov    rcx,rbx
0x1340fbb: call   0x140070e90
0x1340fc0: jmp    0x1413414a7
0x1340fc5: mov    r8d,0xd
0x1340fcb: lea    rdx,[rip+0x45c22e]        # 0x14179d200 ; cstring='mathematician'
0x1340fd2: mov    rcx,rbx
0x1340fd5: call   0x140070e90
0x1340fda: jmp    0x1413414a7
0x1340fdf: mov    r8d,0x9
0x1340fe5: lea    rdx,[rip+0x45c18c]        # 0x14179d178 ; cstring='historian'
0x1340fec: mov    rcx,rbx
0x1340fef: call   0x140070e90
0x1340ff4: jmp    0x1413414a7
0x1340ff9: mov    r8d,0xa
0x1340fff: lea    rdx,[rip+0x45c182]        # 0x14179d188 ; cstring='astronomer'
0x1341006: mov    rcx,rbx
0x1341009: call   0x140070e90
0x134100e: jmp    0x1413414a7
0x1341013: mov    r8d,0xa
0x1341019: lea    rdx,[rip+0x45c140]        # 0x14179d160 ; cstring='naturalist'
0x1341020: mov    rcx,rbx
0x1341023: call   0x140070e90
0x1341028: jmp    0x1413414a7
0x134102d: mov    r8d,0x7
0x1341033: lea    rdx,[rip+0x45c136]        # 0x14179d170 ; cstring='chemist'
0x134103a: mov    rcx,rbx
0x134103d: call   0x140070e90
0x1341042: jmp    0x1413414a7
0x1341047: mov    r8d,0xa
0x134104d: lea    rdx,[rip+0x45c154]        # 0x14179d1a8 ; cstring='geographer'
0x1341054: mov    rcx,rbx
0x1341057: call   0x140070e90
0x134105c: jmp    0x1413414a7
0x1341061: mov    r8d,0x8
0x1341067: lea    rdx,[rip+0x34e6da]        # 0x14168f748 ; cstring='criminal'
0x134106e: mov    rcx,rbx
0x1341071: call   0x140070e90
0x1341076: jmp    0x1413414a7
0x134107b: mov    r8d,0x7
0x1341081: lea    rdx,[rip+0x45c130]        # 0x14179d1b8 ; cstring='peddler'
0x1341088: mov    rcx,rbx
0x134108b: call   0x140070e90
0x1341090: jmp    0x1413414a7
0x1341095: mov    r8d,0x7
0x134109b: lea    rdx,[rip+0x45c0f6]        # 0x14179d198 ; cstring='prophet'
0x13410a2: mov    rcx,rbx
0x13410a5: call   0x140070e90
0x13410aa: jmp    0x1413414a7
0x13410af: mov    r8d,0x7
0x13410b5: lea    rdx,[rip+0x45c0e4]        # 0x14179d1a0 ; cstring='pilgrim'
0x13410bc: mov    rcx,rbx
0x13410bf: call   0x140070e90
0x13410c4: jmp    0x1413414a7
0x13410c9: mov    r8d,0x4
0x13410cf: lea    rdx,[rip+0x45c1ba]        # 0x14179d290 ; cstring='monk'
0x13410d6: mov    rcx,rbx
0x13410d9: call   0x140070e90
0x13410de: jmp    0x1413414a7
0x13410e3: mov    r8d,0x9
0x13410e9: lea    rdx,[rip+0x45c1a8]        # 0x14179d298 ; cstring='messenger'
0x13410f0: mov    rcx,rbx
0x13410f3: call   0x140070e90
0x13410f8: jmp    0x1413414a7
0x13410fd: cmp    bp,0xffff
0x1341101: jne    0x141341192
0x1341107: test   di,di
0x134110a: js     0x141341174
0x134110c: mov    rcx,QWORD PTR [rip+0x11c7cdd]        # 0x142508df0
0x1341113: mov    rdx,QWORD PTR [rip+0x11c7cce]        # 0x142508de8
0x134111a: mov    rax,rcx
0x134111d: sub    rax,rdx
0x1341120: sar    rax,0x3
0x1341124: cmp    rdi,rax
0x1341127: jae    0x141341174
0x1341129: lea    r9,[rdi*8+0x0]
0x1341131: mov    rax,QWORD PTR [r9+rdx*1]
0x1341135: cmp    QWORD PTR [rax+0xd0],0x0
0x134113d: jbe    0x141341174
0x134113f: test   r14b,r14b
0x1341142: je     0x141341154
0x1341144: mov    rdx,QWORD PTR [rdx+r9*1]
0x1341148: add    rdx,0xe0
0x134114f: jmp    0x141341419
0x1341154: sub    rcx,rdx
0x1341157: sar    rcx,0x3
0x134115b: cmp    rdi,rcx
0x134115e: jae    0x141341475
0x1341164: mov    rdx,QWORD PTR [rdx+r9*1]
0x1341168: add    rdx,0xc0
0x134116f: jmp    0x141341419
0x1341174: mov    rcx,rbx
0x1341177: test   r14b,r14b
0x134117a: je     0x1413412bb
0x1341180: mov    r8d,0x8
0x1341186: lea    rdx,[rip+0x37b9e3]        # 0x1416bcb70 ; cstring='children'
0x134118d: jmp    0x14134149f
0x1341192: mov    rcx,QWORD PTR [rip+0x11c7c57]        # 0x142508df0
0x1341199: mov    rdx,QWORD PTR [rip+0x11c7c48]        # 0x142508de8
0x13411a0: test   di,di
0x13411a3: js     0x141341254
0x13411a9: mov    rax,rcx
0x13411ac: sub    rax,rdx
0x13411af: sar    rax,0x3
0x13411b3: cmp    rdi,rax
0x13411b6: jae    0x141341254
0x13411bc: test   bp,bp
0x13411bf: js     0x1413411ed
0x13411c1: mov    rax,QWORD PTR [rdx+rdi*8]
0x13411c5: mov    r8,QWORD PTR [rax+0x178]
0x13411cc: mov    rax,QWORD PTR [rax+0x180]
0x13411d3: sub    rax,r8
0x13411d6: sar    rax,0x3
0x13411da: cmp    rbp,rax
0x13411dd: jae    0x1413411ed
0x13411df: mov    rax,QWORD PTR [r8+rbp*8]
0x13411e3: cmp    QWORD PTR [rax+0x110],0x0
0x13411eb: ja     0x1413411f2
0x13411ed: mov    r8,rdi
0x13411f0: jmp    0x141341260
0x13411f2: test   r14b,r14b
0x13411f5: je     0x141341212
0x13411f7: mov    rax,QWORD PTR [rdx+rdi*8]
0x13411fb: mov    rax,QWORD PTR [rax+0x178]
0x1341202: mov    rdx,QWORD PTR [rax+rbp*8]
0x1341206: add    rdx,0x120
0x134120d: jmp    0x141341419
0x1341212: sub    rcx,rdx
0x1341215: sar    rcx,0x3
0x1341219: cmp    rdi,rcx
0x134121c: jae    0x141341475
0x1341222: mov    rax,QWORD PTR [rdx+rdi*8]
0x1341226: mov    rdx,QWORD PTR [rax+0x178]
0x134122d: mov    rax,QWORD PTR [rax+0x180]
0x1341234: sub    rax,rdx
0x1341237: sar    rax,0x3
0x134123b: cmp    rbp,rax
0x134123e: jae    0x141341475
0x1341244: mov    rdx,QWORD PTR [rdx+rbp*8]
0x1341248: add    rdx,0x100
0x134124f: jmp    0x141341419
0x1341254: mov    r8,rdi
0x1341257: test   di,di
0x134125a: js     0x141341174
0x1341260: mov    rax,rcx
0x1341263: sub    rax,rdx
0x1341266: sar    rax,0x3
0x134126a: cmp    r8,rax
0x134126d: jae    0x141341174
0x1341273: mov    rax,QWORD PTR [rdx+r8*8]
0x1341277: cmp    QWORD PTR [rax+0xd0],0x0
0x134127f: jbe    0x141341174
0x1341285: test   di,di
0x1341288: js     0x141341475
0x134128e: test   r14b,r14b
0x1341291: je     0x14134129f
0x1341293: lea    rdx,[rax+0xe0]
0x134129a: jmp    0x141341419
0x134129f: sub    rcx,rdx
0x13412a2: sar    rcx,0x3
0x13412a6: cmp    r8,rcx
0x13412a9: jae    0x141341475
0x13412af: lea    rdx,[rax+0xc0]
0x13412b6: jmp    0x141341419
0x13412bb: lea    rdx,[rip+0x31c38a]        # 0x14165d64c ; cstring='child'
0x13412c2: mov    r8d,0x5
0x13412c8: jmp    0x14134149f
0x13412cd: cmp    bp,0xffff
0x13412d1: jne    0x141341336
0x13412d3: mov    rdx,rdi
0x13412d6: test   di,di
0x13412d9: js     0x14134130a
0x13412db: mov    rcx,QWORD PTR [rip+0x11c7b0e]        # 0x142508df0
0x13412e2: mov    r8,QWORD PTR [rip+0x11c7aff]        # 0x142508de8
0x13412e9: mov    rax,rcx
0x13412ec: sub    rax,r8
0x13412ef: sar    rax,0x3
0x13412f3: cmp    rdx,rax
0x13412f6: jae    0x14134130a
0x13412f8: mov    rax,QWORD PTR [r8+rdi*8]
0x13412fc: cmp    QWORD PTR [rax+0x90],0x0
0x1341304: ja     0x1413413f8
0x134130a: mov    rcx,rbx
0x134130d: test   r14b,r14b
0x1341310: je     0x141341324
0x1341312: mov    r8d,0x6
0x1341318: lea    rdx,[rip+0x45bf5d]        # 0x14179d27c ; cstring='babies'
0x134131f: jmp    0x14134149f
0x1341324: mov    r8d,0x4
0x134132a: lea    rdx,[rip+0x359963]        # 0x14169ac94 ; cstring='baby'
0x1341331: jmp    0x14134149f
0x1341336: mov    rcx,QWORD PTR [rip+0x11c7ab3]        # 0x142508df0
0x134133d: mov    r8,QWORD PTR [rip+0x11c7aa4]        # 0x142508de8
0x1341344: test   di,di
0x1341347: js     0x1413413c2
0x1341349: mov    rax,rcx
0x134134c: sub    rax,r8
0x134134f: sar    rax,0x3
0x1341353: cmp    rdi,rax
0x1341356: jae    0x1413413c2
0x1341358: test   bp,bp
0x134135b: js     0x141341389
0x134135d: mov    rax,QWORD PTR [r8+rdi*8]
0x1341361: mov    rdx,QWORD PTR [rax+0x178]
0x1341368: mov    rax,QWORD PTR [rax+0x180]
0x134136f: sub    rax,rdx
0x1341372: sar    rax,0x3
0x1341376: cmp    rbp,rax
0x1341379: jae    0x141341389
0x134137b: mov    rax,QWORD PTR [rdx+rbp*8]
0x134137f: cmp    QWORD PTR [rax+0xd0],0x0
0x1341387: ja     0x14134138e
0x1341389: mov    rdx,rdi
0x134138c: jmp    0x1413413ce
0x134138e: xor    eax,eax
0x1341390: mov    BYTE PTR [rsp+0x28],r13b
0x1341395: test   r14b,r14b
0x1341398: lea    rcx,[rip+0x11c7a29]        # 0x142508dc8
0x134139f: movzx  r9d,bp
0x13413a3: movzx  r8d,di
0x13413a7: setne  al
0x13413aa: mov    rdx,rbx
0x13413ad: add    eax,0x6
0x13413b0: mov    DWORD PTR [rsp+0x20],eax
0x13413b4: call   0x1401464d0
0x13413b9: mov    BYTE PTR [r12],sil
0x13413bd: jmp    0x1413414a4
0x13413c2: mov    rdx,rdi
0x13413c5: test   di,di
0x13413c8: js     0x14134147b
0x13413ce: mov    rax,rcx
0x13413d1: sub    rax,r8
0x13413d4: sar    rax,0x3
0x13413d8: cmp    rdx,rax
0x13413db: jae    0x14134147b
0x13413e1: mov    rax,QWORD PTR [r8+rdx*8]
0x13413e5: cmp    QWORD PTR [rax+0x90],0x0
0x13413ed: jbe    0x14134147b
0x13413f3: test   di,di
0x13413f6: js     0x141341475
0x13413f8: test   r14b,r14b
0x13413fb: je     0x141341406
0x13413fd: lea    rdx,[rax+0xa0]
0x1341404: jmp    0x141341419
0x1341406: sub    rcx,r8
0x1341409: sar    rcx,0x3
0x134140d: cmp    rdx,rcx
0x1341410: jae    0x141341475
0x1341412: lea    rdx,[rax+0x80]
0x1341419: cmp    rbx,rdx
0x134141c: je     0x141341434
0x134141e: cmp    QWORD PTR [rdx+0x18],0xf
0x1341423: mov    r8,QWORD PTR [rdx+0x10]
0x1341427: jbe    0x14134142c
0x1341429: mov    rdx,QWORD PTR [rdx]
0x134142c: mov    rcx,rbx
0x134142f: call   0x140070e90
0x1341434: cmp    QWORD PTR [rbx+0x10],0x0
0x1341439: jbe    0x141341475
0x134143b: test   r13b,r13b
0x134143e: je     0x141341475
0x1341440: mov    rcx,QWORD PTR [rbx+0x18]
0x1341444: mov    rax,rbx
0x1341447: cmp    rcx,0xf
0x134144b: jbe    0x141341450
0x134144d: mov    rax,QWORD PTR [rbx]
0x1341450: cmp    BYTE PTR [rax],0x61
0x1341453: jl     0x141341475
0x1341455: mov    rax,rbx
0x1341458: cmp    rcx,0xf
0x134145c: jbe    0x141341461
0x134145e: mov    rax,QWORD PTR [rbx]
0x1341461: cmp    BYTE PTR [rax],0x7a
0x1341464: jg     0x141341475
0x1341466: mov    rax,rbx
0x1341469: cmp    rcx,0xf
0x134146d: jbe    0x141341472
0x134146f: mov    rax,QWORD PTR [rbx]
0x1341472: add    BYTE PTR [rax],0xe0
0x1341475: mov    BYTE PTR [r12],sil
0x1341479: jmp    0x1413414a4
0x134147b: test   r14b,r14b
0x134147e: je     0x14134148f
0x1341480: mov    r8d,0x6
0x1341486: lea    rdx,[rip+0x45bdef]        # 0x14179d27c ; cstring='babies'
0x134148d: jmp    0x14134149c
0x134148f: mov    r8d,0x4
0x1341495: lea    rdx,[rip+0x3597f8]        # 0x14169ac94 ; cstring='baby'
0x134149c: mov    rcx,rbx
0x134149f: call   0x140070e90
0x13414a4: xor    sil,sil
0x13414a7: test   r14b,r14b
0x13414aa: je     0x1413414c6
0x13414ac: test   sil,sil
0x13414af: je     0x1413414c6
0x13414b1: mov    r8d,0x1
0x13414b7: lea    rdx,[rip+0x2be00a]        # 0x1415ff4c8 ; cstring='s'
0x13414be: mov    rcx,rbx
0x13414c1: call   0x140070fd0
0x13414c6: test   r13b,r13b
0x13414c9: mov    r13,QWORD PTR [rsp+0x40]
0x13414ce: je     0x1413414d8
0x13414d0: mov    rcx,rbx
0x13414d3: call   0x1405440a0
0x13414d8: mov    rsi,QWORD PTR [rsp+0x78]
0x13414dd: mov    rbp,QWORD PTR [rsp+0x70]
0x13414e2: mov    r12,QWORD PTR [rsp+0x80]
0x13414ea: add    rsp,0x48
0x13414ee: pop    r15
0x13414f0: pop    r14
0x13414f2: pop    rdi
0x13414f3: pop    rbx
0x13414f4: ret
0x13414f5: nop    DWORD PTR [rax]
