; classic PE:6aea11a5:0272d000; knowledge-dance-form; RVA 0x4f2150..0x4f6438; code ends 0x4f5f04
0x004f2150: mov    QWORD PTR [rsp+0x18],rbx
0x004f2155: push   rbp
0x004f2156: push   rsi
0x004f2157: push   rdi
0x004f2158: push   r12
0x004f215a: push   r13
0x004f215c: push   r14
0x004f215e: push   r15
0x004f2160: lea    rbp,[rsp-0x150]
0x004f2168: sub    rsp,0x250
0x004f216f: mov    rax,QWORD PTR [rip+0x13c5eca]        # 0x1418b8040
0x004f2176: xor    rax,rsp
0x004f2179: mov    QWORD PTR [rbp+0x140],rax
0x004f2180: mov    r13,rdx
0x004f2183: mov    QWORD PTR [rbp+0xc0],rdx
0x004f218a: mov    r12,rcx
0x004f218d: mov    QWORD PTR [rsp+0x50],rcx
0x004f2192: lea    rcx,[rbp+0x120]
0x004f2199: call   0x140070c50
0x004f219e: nop
0x004f219f: lea    rcx,[r12+0x8]
0x004f21a4: xor    r9d,r9d
0x004f21a7: mov    r8b,0x1
0x004f21aa: lea    rdx,[rbp+0x120]
0x004f21b1: call   0x140aaafe0
0x004f21b6: lea    rdx,[rbp+0x120]
0x004f21bd: mov    rcx,r13
0x004f21c0: call   0x1400bb2d0
0x004f21c5: lea    rdx,[rip+0x116e200]        # 0x1416603cc ; literal=" is a "
0x004f21cc: mov    rcx,r13
0x004f21cf: call   0x140070b20
0x004f21d4: movsxd rax,DWORD PTR [r12+0x88]
0x004f21dc: lea    r15,[rip+0xffffffffffb0de1d]        # 0x140000000
0x004f21e3: cmp    eax,0x5
0x004f21e6: ja     0x1404f230a
0x004f21ec: mov    ecx,DWORD PTR [r15+rax*4+0x4f5f04]
0x004f21f4: add    rcx,r15
0x004f21f7: jmp    rcx
0x004f21f9: lea    rdx,[rip+0x116e1d4]        # 0x1416603d4 ; literal="sacred"
0x004f2200: mov    rcx,r13
0x004f2203: call   0x140070b20
0x004f2208: mov    eax,DWORD PTR [r12+0x98]
0x004f2210: test   eax,eax
0x004f2212: je     0x1404f2229
0x004f2214: cmp    eax,0x2
0x004f2217: jne    0x1404f230a
0x004f221d: lea    rdx,[rip+0x116e1c0]        # 0x1416603e4 ; literal=" group"
0x004f2224: jmp    0x1404f2302
0x004f2229: lea    rdx,[rip+0x116e1ac]        # 0x1416603dc ; literal=" solo"
0x004f2230: jmp    0x1404f2302
0x004f2235: mov    eax,DWORD PTR [r12+0x98]
0x004f223d: test   eax,eax
0x004f223f: je     0x1404f2261
0x004f2241: cmp    eax,0x2
0x004f2244: jne    0x1404f2270
0x004f2246: lea    rdx,[rip+0x116e1a7]        # 0x1416603f4 ; literal="group "
0x004f224d: mov    rcx,r13
0x004f2250: call   0x140070b20
0x004f2255: lea    rdx,[rip+0x116e1a4]        # 0x141660400 ; literal="celebration"
0x004f225c: jmp    0x1404f2302
0x004f2261: lea    rdx,[rip+0x116e184]        # 0x1416603ec ; literal="solo "
0x004f2268: mov    rcx,r13
0x004f226b: call   0x140070b20
0x004f2270: lea    rdx,[rip+0x116e189]        # 0x141660400 ; literal="celebration"
0x004f2277: jmp    0x1404f2302
0x004f227c: lea    rdx,[rip+0x116e18d]        # 0x141660410 ; literal="participation"
0x004f2283: jmp    0x1404f2302
0x004f2285: lea    rdx,[rip+0x116e194]        # 0x141660420 ; literal="social"
0x004f228c: mov    rcx,r13
0x004f228f: call   0x140070b20
0x004f2294: mov    ecx,DWORD PTR [r12+0x98]
0x004f229c: sub    ecx,0x1
0x004f229f: je     0x1404f22f2
0x004f22a1: cmp    ecx,0x1
0x004f22a4: jne    0x1404f230a
0x004f22a6: lea    rdx,[rip+0x116e137]        # 0x1416603e4 ; literal=" group"
0x004f22ad: jmp    0x1404f2302
0x004f22af: mov    eax,DWORD PTR [r12+0x98]
0x004f22b7: test   eax,eax
0x004f22b9: je     0x1404f22c9
0x004f22bb: cmp    eax,0x2
0x004f22be: jne    0x1404f22d8
0x004f22c0: lea    rdx,[rip+0x116e12d]        # 0x1416603f4 ; literal="group "
0x004f22c7: jmp    0x1404f22d0
0x004f22c9: lea    rdx,[rip+0x116e11c]        # 0x1416603ec ; literal="solo "
0x004f22d0: mov    rcx,r13
0x004f22d3: call   0x140070b20
0x004f22d8: lea    rdx,[rip+0x1111ea1]        # 0x141604180 ; literal="performance"
0x004f22df: mov    rcx,r13
0x004f22e2: call   0x140070b20
0x004f22e7: cmp    DWORD PTR [r12+0x98],0x1
0x004f22f0: jne    0x1404f230a
0x004f22f2: lea    rdx,[rip+0x116e12f]        # 0x141660428 ; literal=" partner"
0x004f22f9: jmp    0x1404f2302
0x004f22fb: lea    rdx,[rip+0x116e132]        # 0x141660434 ; literal="war"
0x004f2302: mov    rcx,r13
0x004f2305: call   0x140070b20
0x004f230a: lea    rdx,[rip+0x110d5b3]        # 0x1415ff8c4 ; literal=" dance"
0x004f2311: mov    rcx,r13
0x004f2314: call   0x140070b20
0x004f2319: cmp    DWORD PTR [r12+0x98],0x1
0x004f2322: jne    0x1404f233b
0x004f2324: cmp    DWORD PTR [r12+0xa0],0x1
0x004f232d: jne    0x1404f233b
0x004f232f: lea    rdx,[rip+0x116e102]        # 0x141660438 ; literal=" for a single pair"
0x004f2336: jmp    0x1404f2404
0x004f233b: cmp    DWORD PTR [r12+0xa0],0x2
0x004f2344: jl     0x1404f240c
0x004f234a: lea    rdx,[rip+0x114d347]        # 0x14163f698 ; literal=" for "
0x004f2351: mov    rcx,r13
0x004f2354: call   0x140070b20
0x004f2359: lea    rcx,[rbp+0xa0]
0x004f2360: call   0x140070c50
0x004f2365: nop
0x004f2366: lea    rdx,[rbp+0xa0]
0x004f236d: mov    ecx,DWORD PTR [r12+0x9c]
0x004f2375: call   0x140545040
0x004f237a: lea    rdx,[rbp+0xa0]
0x004f2381: mov    rcx,r13
0x004f2384: call   0x1400bb2d0
0x004f2389: nop
0x004f238a: lea    rcx,[rbp+0xa0]
0x004f2391: call   0x140070e10
0x004f2396: lea    rdx,[rip+0x11113f7]        # 0x141603794 ; literal=" to "
0x004f239d: mov    rcx,r13
0x004f23a0: call   0x140070b20
0x004f23a5: lea    rcx,[rbp+0xa0]
0x004f23ac: call   0x140070c50
0x004f23b1: nop
0x004f23b2: lea    rdx,[rbp+0xa0]
0x004f23b9: mov    ecx,DWORD PTR [r12+0xa0]
0x004f23c1: call   0x140545040
0x004f23c6: lea    rdx,[rbp+0xa0]
0x004f23cd: mov    rcx,r13
0x004f23d0: call   0x1400bb2d0
0x004f23d5: nop
0x004f23d6: lea    rcx,[rbp+0xa0]
0x004f23dd: call   0x140070e10
0x004f23e2: mov    ecx,DWORD PTR [r12+0x98]
0x004f23ea: sub    ecx,0x1
0x004f23ed: je     0x1404f23fd
0x004f23ef: cmp    ecx,0x1
0x004f23f2: jne    0x1404f240c
0x004f23f4: lea    rdx,[rip+0x116e05d]        # 0x141660458 ; literal=" dancers"
0x004f23fb: jmp    0x1404f2404
0x004f23fd: lea    rdx,[rip+0x116e048]        # 0x14166044c ; literal=" pairs"
0x004f2404: mov    rcx,r13
0x004f2407: call   0x140070b20
0x004f240c: mov    edx,DWORD PTR [r12+0x8c]
0x004f2414: xor    r14d,r14d
0x004f2417: cmp    edx,0xffffffff
0x004f241a: je     0x1404f2468
0x004f241c: lea    rcx,[rip+0x1efb755]        # 0x1423edb78
0x004f2423: call   0x14007f0b0
0x004f2428: mov    ecx,r14d
0x004f242b: test   rax,rax
0x004f242e: je     0x1404f2437
0x004f2430: cmp    WORD PTR [rax],0x8
0x004f2434: sete   cl
0x004f2437: lea    rax,[rip+0x116e052]        # 0x141660490 ; literal=" originating in "
0x004f243e: lea    rdx,[rip+0x116e023]        # 0x141660468 ; literal=" which grew out of the performances of "
0x004f2445: test   ecx,ecx
0x004f2447: cmove  rdx,rax
0x004f244b: mov    rcx,r13
0x004f244e: call   0x140070b20
0x004f2453: xor    r9d,r9d
0x004f2456: mov    r8d,DWORD PTR [r12+0x8c]
0x004f245e: mov    rdx,r13
0x004f2461: call   0x140ba73e0
0x004f2466: jmp    0x1404f24b3
0x004f2468: cmp    DWORD PTR [r12+0x90],0xffffffff
0x004f2471: je     0x1404f24b3
0x004f2473: lea    rcx,[rbp-0x30]
0x004f2477: call   0x140073640
0x004f247c: lea    rdx,[rip+0x116e025]        # 0x1416604a8 ; literal=" originally devised by "
0x004f2483: mov    rcx,r13
0x004f2486: call   0x140070b20
0x004f248b: mov    WORD PTR [rsp+0x28],r14w
0x004f2491: mov    WORD PTR [rsp+0x20],0x1
0x004f2498: lea    r9,[rbp-0x30]
0x004f249c: mov    r8d,DWORD PTR [r12+0x90]
0x004f24a4: mov    rdx,r13
0x004f24a7: lea    rcx,[rip+0x2023b8a]        # 0x142516038
0x004f24ae: call   0x140ba79f0
0x004f24b3: lea    rdx,[rip+0x11221c6]        # 0x141614680 ; literal=".  "
0x004f24ba: mov    rcx,r13
0x004f24bd: call   0x140070b20
0x004f24c2: test   BYTE PTR [r12+0x94],0x1
0x004f24cb: lea    rax,[rip+0x116e05e]        # 0x141660530 ; literal="The form guides dancers during improvised performances.  "
0x004f24d2: lea    rdx,[rip+0x116dfe7]        # 0x1416604c0 ; literal="The rules of the form are applied by choreographers to produce individual dances which can be performed.  "
0x004f24d9: cmove  rdx,rax
0x004f24dd: mov    rcx,r13
0x004f24e0: call   0x140070b20
0x004f24e5: mov    rsi,r14
0x004f24e8: mov    QWORD PTR [rbp-0x60],r14
0x004f24ec: mov    edx,DWORD PTR [r12+0x84]
0x004f24f4: lea    rdi,[rip+0x116e0b5]        # 0x1416605b0 ; literal=" as the dancers act out "
0x004f24fb: cmp    edx,0xffffffff
0x004f24fe: je     0x1404f2610
0x004f2504: lea    rcx,[rip+0x2011b2d]        # 0x142504038
0x004f250b: call   0x140073b30
0x004f2510: mov    rbx,rax
0x004f2513: test   rax,rax
0x004f2516: je     0x1404f2772
0x004f251c: cmp    DWORD PTR [rax+0x68],0xc
0x004f2520: jne    0x1404f2772
0x004f2526: mov    edx,DWORD PTR [rax+0x6c]
0x004f2529: lea    rcx,[rip+0x2011d48]        # 0x142504278
0x004f2530: call   0x140073b30
0x004f2535: mov    rsi,rax
0x004f2538: mov    QWORD PTR [rbp-0x60],rax
0x004f253c: test   rax,rax
0x004f253f: je     0x1404f2772
0x004f2545: lea    rdx,[rip+0x116e024]        # 0x141660570 ; literal="The dance is accompanied by "
0x004f254c: mov    rcx,r13
0x004f254f: call   0x140070b20
0x004f2554: lea    rdx,[rbx+0x8]
0x004f2558: mov    rcx,r13
0x004f255b: call   0x1400bb2d0
0x004f2560: test   BYTE PTR [r12+0xd8],0x1
0x004f2569: je     0x1404f2772
0x004f256f: lea    rdx,[rip+0x116e01a]        # 0x141660590 ; literal=" as the dancer acts out "
0x004f2576: cmp    DWORD PTR [r12+0x98],r14d
0x004f257e: cmovne rdx,rdi
0x004f2582: mov    rcx,r13
0x004f2585: call   0x140070b20
0x004f258a: mov    edx,DWORD PTR [rsi+0xf8]
0x004f2590: cmp    edx,0xffffffff
0x004f2593: jne    0x1404f26d9
0x004f2599: mov    edx,DWORD PTR [rsi+0xf4]
0x004f259f: cmp    edx,0xffffffff
0x004f25a2: je     0x1404f2772
0x004f25a8: lea    rcx,[rip+0x2011c99]        # 0x142504248
0x004f25af: call   0x140073b30
0x004f25b4: mov    rbx,rax
0x004f25b7: test   rax,rax
0x004f25ba: je     0x1404f2772
0x004f25c0: test   BYTE PTR [rax+0x8c],0x2
0x004f25c7: je     0x1404f25d8
0x004f25c9: lea    rdx,[rip+0x116e000]        # 0x1416605d0 ; literal="a composition of "
0x004f25d0: mov    rcx,r13
0x004f25d3: call   0x140070b20
0x004f25d8: lea    rcx,[rbp+0xa0]
0x004f25df: call   0x140070c50
0x004f25e4: nop
0x004f25e5: lea    rcx,[rbx+0x8]
0x004f25e9: xor    r9d,r9d
0x004f25ec: mov    r8b,0x1
0x004f25ef: lea    rdx,[rbp+0xa0]
0x004f25f6: call   0x140aaafe0
0x004f25fb: lea    rdx,[rbp+0xa0]
0x004f2602: mov    rcx,r13
0x004f2605: call   0x1400bb2d0
0x004f260a: nop
0x004f260b: jmp    0x1404f2766
0x004f2610: mov    edx,DWORD PTR [r12+0x80]
0x004f2618: cmp    edx,0xffffffff
0x004f261b: je     0x1404f2772
0x004f2621: lea    rcx,[rip+0x2011c50]        # 0x142504278
0x004f2628: call   0x140073b30
0x004f262d: mov    rsi,rax
0x004f2630: mov    QWORD PTR [rbp-0x60],rax
0x004f2634: test   rax,rax
0x004f2637: je     0x1404f2772
0x004f263d: lea    rdx,[rip+0x116df2c]        # 0x141660570 ; literal="The dance is accompanied by "
0x004f2644: mov    rcx,r13
0x004f2647: call   0x140070b20
0x004f264c: test   BYTE PTR [rsi+0x120],0x1
0x004f2653: je     0x1404f2664
0x004f2655: lea    rdx,[rip+0x116df74]        # 0x1416605d0 ; literal="a composition of "
0x004f265c: mov    rcx,r13
0x004f265f: call   0x140070b20
0x004f2664: lea    rcx,[rbp+0xa0]
0x004f266b: call   0x140070c50
0x004f2670: nop
0x004f2671: lea    rcx,[rsi+0x8]
0x004f2675: xor    r9d,r9d
0x004f2678: mov    r8b,0x1
0x004f267b: lea    rdx,[rbp+0xa0]
0x004f2682: call   0x140aaafe0
0x004f2687: lea    rdx,[rbp+0xa0]
0x004f268e: mov    rcx,r13
0x004f2691: call   0x1400bb2d0
0x004f2696: nop
0x004f2697: lea    rcx,[rbp+0xa0]
0x004f269e: call   0x140070e10
0x004f26a3: test   BYTE PTR [r12+0xd8],0x1
0x004f26ac: je     0x1404f2772
0x004f26b2: lea    rdx,[rip+0x116ded7]        # 0x141660590 ; literal=" as the dancer acts out "
0x004f26b9: cmp    DWORD PTR [r12+0x98],0x0
0x004f26c2: cmovne rdx,rdi
0x004f26c6: mov    rcx,r13
0x004f26c9: call   0x140070b20
0x004f26ce: mov    edx,DWORD PTR [rsi+0xf8]
0x004f26d4: cmp    edx,0xffffffff
0x004f26d7: je     0x1404f26fc
0x004f26d9: lea    rcx,[rip+0x2011958]        # 0x142504038
0x004f26e0: call   0x140073b30
0x004f26e5: test   rax,rax
0x004f26e8: je     0x1404f2772
0x004f26ee: lea    rdx,[rax+0x8]
0x004f26f2: mov    rcx,r13
0x004f26f5: call   0x1400bb2d0
0x004f26fa: jmp    0x1404f2772
0x004f26fc: mov    edx,DWORD PTR [rsi+0xf4]
0x004f2702: cmp    edx,0xffffffff
0x004f2705: je     0x1404f2772
0x004f2707: lea    rcx,[rip+0x2011b3a]        # 0x142504248
0x004f270e: call   0x140073b30
0x004f2713: mov    rbx,rax
0x004f2716: test   rax,rax
0x004f2719: je     0x1404f2772
0x004f271b: test   BYTE PTR [rax+0x8c],0x2
0x004f2722: je     0x1404f2733
0x004f2724: lea    rdx,[rip+0x116dea5]        # 0x1416605d0 ; literal="a composition of "
0x004f272b: mov    rcx,r13
0x004f272e: call   0x140070b20
0x004f2733: lea    rcx,[rbp+0xa0]
0x004f273a: call   0x140070c50
0x004f273f: nop
0x004f2740: lea    rcx,[rbx+0x8]
0x004f2744: xor    r9d,r9d
0x004f2747: mov    r8b,0x1
0x004f274a: lea    rdx,[rbp+0xa0]
0x004f2751: call   0x140aaafe0
0x004f2756: lea    rdx,[rbp+0xa0]
0x004f275d: mov    rcx,r13
0x004f2760: call   0x1400bb2d0
0x004f2765: nop
0x004f2766: lea    rcx,[rbp+0xa0]
0x004f276d: call   0x140070e10
0x004f2772: cmp    DWORD PTR [r12+0xdc],0xffffffff
0x004f277b: jne    0x1404f2788
0x004f277d: cmp    DWORD PTR [r12+0xe0],0xffffffff
0x004f2786: je     0x1404f27a5
0x004f2788: mov    rcx,r13
0x004f278b: cmp    DWORD PTR [r12+0x98],0x0
0x004f2794: lea    rdx,[rip+0x116ddf5]        # 0x141660590 ; literal=" as the dancer acts out "
0x004f279b: je     0x1404f27a0
0x004f279d: mov    rdx,rdi
0x004f27a0: call   0x140070b20
0x004f27a5: mov    edx,DWORD PTR [r12+0xdc]
0x004f27ad: cmp    edx,0xffffffff
0x004f27b0: je     0x1404f28f6
0x004f27b6: lea    rcx,[rip+0x202387b]        # 0x142516038
0x004f27bd: call   0x14007eff0
0x004f27c2: mov    rbx,rax
0x004f27c5: test   rax,rax
0x004f27c8: je     0x1404f281f
0x004f27ca: lea    rcx,[rbp+0xa0]
0x004f27d1: call   0x140070c50
0x004f27d6: nop
0x004f27d7: lea    rcx,[rbp-0x30]
0x004f27db: call   0x140073640
0x004f27e0: mov    rcx,QWORD PTR [rbx]
0x004f27e3: mov    r10,QWORD PTR [rcx+0xd8]
0x004f27ea: mov    BYTE PTR [rsp+0x20],0x0
0x004f27ef: mov    r9b,0x1
0x004f27f2: lea    r8,[rbp-0x30]
0x004f27f6: lea    rdx,[rbp+0xa0]
0x004f27fd: mov    rcx,rbx
0x004f2800: call   r10
0x004f2803: lea    rdx,[rbp+0xa0]
0x004f280a: mov    rcx,r13
0x004f280d: call   0x1400bb2d0
0x004f2812: nop
0x004f2813: lea    rcx,[rbp+0xa0]
0x004f281a: call   0x140070e10
0x004f281f: mov    edi,0x1
0x004f2824: lea    rdx,[rip+0x1121e55]        # 0x141614680 ; literal=".  "
0x004f282b: mov    rcx,r13
0x004f282e: call   0x140070b20
0x004f2833: xor    dl,dl
0x004f2835: lea    r8,[rip+0x116e2ec]        # 0x141660b28 ; literal="The dancers perform "
0x004f283c: lea    rbx,[rip+0x116e3bd]        # 0x141660c00 ; literal="turning counterclockwise"
0x004f2843: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f284c: jne    0x1404f28a5
0x004f284e: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f2857: jne    0x1404f28a5
0x004f2859: test   rsi,rsi
0x004f285c: je     0x1404f2b6d
0x004f2862: mov    ecx,DWORD PTR [rsi+0xe8]
0x004f2868: lea    eax,[rcx+0x1]
0x004f286b: cmp    eax,0x1
0x004f286e: jbe    0x1404f2878
0x004f2870: cmp    ecx,0x4
0x004f2873: mov    ecx,r14d
0x004f2876: jne    0x1404f287a
0x004f2878: mov    ecx,edi
0x004f287a: movzx  eax,dl
0x004f287d: test   ecx,ecx
0x004f287f: cmovne eax,edi
0x004f2882: cmp    DWORD PTR [rsi+0x104],0xffffffff
0x004f2889: jne    0x1404f2894
0x004f288b: cmp    DWORD PTR [rsi+0xe8],0xffffffff
0x004f2892: je     0x1404f289a
0x004f2894: test   al,al
0x004f2896: mov    eax,edi
0x004f2898: je     0x1404f289d
0x004f289a: mov    eax,r14d
0x004f289d: test   eax,eax
0x004f289f: je     0x1404f2b6d
0x004f28a5: lea    rdx,[rip+0x116dd3c]        # 0x1416605e8 ; literal="The dancer performs "
0x004f28ac: cmp    DWORD PTR [r12+0x98],0x0
0x004f28b5: cmovne rdx,r8
0x004f28b9: mov    rcx,r13
0x004f28bc: call   0x140070b20
0x004f28c1: mov    ecx,DWORD PTR [r12+0xa4]
0x004f28c9: test   ecx,ecx
0x004f28cb: je     0x1404f2968
0x004f28d1: sub    ecx,0x1
0x004f28d4: je     0x1404f295f
0x004f28da: sub    ecx,0x1
0x004f28dd: je     0x1404f2956
0x004f28df: sub    ecx,0x1
0x004f28e2: je     0x1404f294d
0x004f28e4: cmp    ecx,0x1
0x004f28e7: jne    0x1404f2977
0x004f28ed: lea    rdx,[rip+0x116e2a4]        # 0x141660b98 ; literal="loosely mingled"
0x004f28f4: jmp    0x1404f296f
0x004f28f6: cmp    DWORD PTR [r12+0xe0],0xffffffff
0x004f28ff: je     0x1404f281f
0x004f2905: lea    rdx,[rip+0x110c624]        # 0x1415fef30 ; literal="the story of "
0x004f290c: mov    rcx,r13
0x004f290f: call   0x140070b20
0x004f2914: lea    rcx,[rbp-0x30]
0x004f2918: call   0x140073640
0x004f291d: mov    WORD PTR [rsp+0x28],r14w
0x004f2923: mov    edi,0x1
0x004f2928: mov    WORD PTR [rsp+0x20],di
0x004f292d: lea    r9,[rbp-0x30]
0x004f2931: mov    r8d,DWORD PTR [r12+0xe0]
0x004f2939: mov    rdx,r13
0x004f293c: lea    rcx,[rip+0x20236f5]        # 0x142516038
0x004f2943: call   0x140ba79f0
0x004f2948: jmp    0x1404f2824
0x004f294d: lea    rdx,[rip+0x116e22c]        # 0x141660b80 ; literal="in a double circle"
0x004f2954: jmp    0x1404f296f
0x004f2956: lea    rdx,[rip+0x116e213]        # 0x141660b70 ; literal="in a circle"
0x004f295d: jmp    0x1404f296f
0x004f295f: lea    rdx,[rip+0x116e1f2]        # 0x141660b58 ; literal="in several lines"
0x004f2966: jmp    0x1404f296f
0x004f2968: lea    rdx,[rip+0x116e1d1]        # 0x141660b40 ; literal="in a single line"
0x004f296f: mov    rcx,r13
0x004f2972: call   0x140070b20
0x004f2977: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f2980: je     0x1404f2a00
0x004f2982: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f298b: je     0x1404f299c
0x004f298d: lea    rdx,[rip+0x110bfd8]        # 0x1415fe96c ; literal=" "
0x004f2994: mov    rcx,r13
0x004f2997: call   0x140070b20
0x004f299c: mov    ecx,DWORD PTR [r12+0xa8]
0x004f29a4: test   ecx,ecx
0x004f29a6: je     0x1404f29df
0x004f29a8: sub    ecx,0x1
0x004f29ab: je     0x1404f29c9
0x004f29ad: sub    ecx,0x1
0x004f29b0: je     0x1404f29c0
0x004f29b2: cmp    ecx,0x1
0x004f29b5: jne    0x1404f2a00
0x004f29b7: lea    rdx,[rip+0x116e282]        # 0x141660c40 ; literal="along an intricate path"
0x004f29be: jmp    0x1404f29f8
0x004f29c0: lea    rdx,[rip+0x116e259]        # 0x141660c20 ; literal="along an improvised path"
0x004f29c7: jmp    0x1404f29f8
0x004f29c9: lea    rdx,[rip+0x116e210]        # 0x141660be0 ; literal="along a counterclockwise circle"
0x004f29d0: cmp    DWORD PTR [r12+0x98],0x0
0x004f29d9: cmovne rdx,rbx
0x004f29dd: jmp    0x1404f29f8
0x004f29df: cmp    DWORD PTR [r12+0x98],0x0
0x004f29e8: lea    rdx,[rip+0x116e1b9]        # 0x141660ba8 ; literal="along a clockwise circle"
0x004f29ef: je     0x1404f29f8
0x004f29f1: lea    rdx,[rip+0x116e1d0]        # 0x141660bc8 ; literal="turning clockwise"
0x004f29f8: mov    rcx,r13
0x004f29fb: call   0x140070b20
0x004f2a00: test   rsi,rsi
0x004f2a03: je     0x1404f2b5e
0x004f2a09: cmp    DWORD PTR [rsi+0x104],0xffffffff
0x004f2a10: jne    0x1404f2a1e
0x004f2a12: cmp    DWORD PTR [rsi+0xe8],0xffffffff
0x004f2a19: mov    eax,r14d
0x004f2a1c: je     0x1404f2a20
0x004f2a1e: mov    eax,edi
0x004f2a20: test   eax,eax
0x004f2a22: je     0x1404f2b5e
0x004f2a28: cmp    DWORD PTR [r12+0xa4],0xffffffff
0x004f2a31: jne    0x1404f2a3e
0x004f2a33: cmp    DWORD PTR [r12+0xa8],0xffffffff
0x004f2a3c: je     0x1404f2a4d
0x004f2a3e: lea    rdx,[rip+0x116e213]        # 0x141660c58 ; literal=", moving "
0x004f2a45: mov    rcx,r13
0x004f2a48: call   0x140070b20
0x004f2a4d: mov    eax,DWORD PTR [rsi+0xe8]
0x004f2a53: dec    eax
0x004f2a55: cmp    eax,0x20
0x004f2a58: ja     0x1404f2aae
0x004f2a5a: cdqe
0x004f2a5c: movzx  eax,BYTE PTR [r15+rax*1+0x4f5f38]
0x004f2a65: mov    ecx,DWORD PTR [r15+rax*4+0x4f5f1c]
0x004f2a6d: add    rcx,r15
0x004f2a70: jmp    rcx
0x004f2a72: lea    rdx,[rip+0x116e1ef]        # 0x141660c68 ; literal="very slowly "
0x004f2a79: jmp    0x1404f2aa6
0x004f2a7b: lea    rdx,[rip+0x116e1f6]        # 0x141660c78 ; literal="slowly "
0x004f2a82: jmp    0x1404f2aa6
0x004f2a84: lea    rdx,[rip+0x116e1f5]        # 0x141660c80 ; literal="slower and slower "
0x004f2a8b: jmp    0x1404f2aa6
0x004f2a8d: lea    rdx,[rip+0x116e204]        # 0x141660c98 ; literal="faster and faster "
0x004f2a94: jmp    0x1404f2aa6
0x004f2a96: lea    rdx,[rip+0x116e213]        # 0x141660cb0 ; literal="quickly "
0x004f2a9d: jmp    0x1404f2aa6
0x004f2a9f: lea    rdx,[rip+0x116e21a]        # 0x141660cc0 ; literal="very quickly "
0x004f2aa6: mov    rcx,r13
0x004f2aa9: call   0x140070b20
0x004f2aae: mov    edx,DWORD PTR [rsi+0x104]
0x004f2ab4: lea    rcx,[rip+0x201184d]        # 0x142504308
0x004f2abb: call   0x140073b30
0x004f2ac0: mov    rbx,rax
0x004f2ac3: test   rax,rax
0x004f2ac6: je     0x1404f2b4f
0x004f2acc: movsxd rax,DWORD PTR [rsi+0x108]
0x004f2ad3: test   eax,eax
0x004f2ad5: js     0x1404f2b17
0x004f2ad7: mov    rcx,QWORD PTR [rbx+0x28]
0x004f2adb: sub    rcx,QWORD PTR [rbx+0x20]
0x004f2adf: sar    rcx,0x3
0x004f2ae3: cmp    rax,rcx
0x004f2ae6: jae    0x1404f2b17
0x004f2ae8: lea    rdx,[rip+0x116e1e1]        # 0x141660cd0 ; literal="to the music's "
0x004f2aef: mov    rcx,r13
0x004f2af2: call   0x140070b20
0x004f2af7: movsxd rax,DWORD PTR [rsi+0x108]
0x004f2afe: mov    rdx,QWORD PTR [rbx+0x20]
0x004f2b02: mov    rdx,QWORD PTR [rdx+rax*8]
0x004f2b06: mov    rcx,r13
0x004f2b09: call   0x1400bb2d0
0x004f2b0e: lea    rdx,[rip+0x116e1cb]        # 0x141660ce0 ; literal=" rhythm"
0x004f2b15: jmp    0x1404f2b56
0x004f2b17: movsxd rax,DWORD PTR [rsi+0x10c]
0x004f2b1e: test   eax,eax
0x004f2b20: js     0x1404f2b4f
0x004f2b22: mov    rcx,QWORD PTR [rbx+0x10]
0x004f2b26: sub    rcx,QWORD PTR [rbx+0x8]
0x004f2b2a: sar    rcx,0x3
0x004f2b2e: cmp    rax,rcx
0x004f2b31: jae    0x1404f2b4f
0x004f2b33: lea    rdx,[rip+0x116e196]        # 0x141660cd0 ; literal="to the music's "
0x004f2b3a: mov    rcx,r13
0x004f2b3d: call   0x140070b20
0x004f2b42: movsxd rax,DWORD PTR [rsi+0x10c]
0x004f2b49: mov    rdx,QWORD PTR [rbx+0x8]
0x004f2b4d: jmp    0x1404f2b02
0x004f2b4f: lea    rdx,[rip+0x116e192]        # 0x141660ce8 ; literal="with the music"
0x004f2b56: mov    rcx,r13
0x004f2b59: call   0x140070b20
0x004f2b5e: lea    rdx,[rip+0x1121b1b]        # 0x141614680 ; literal=".  "
0x004f2b65: mov    rcx,r13
0x004f2b68: call   0x140070b20
0x004f2b6d: cmp    DWORD PTR [r12+0xb0],0xffffffff
0x004f2b76: je     0x1404f2d48
0x004f2b7c: lea    rdx,[rip+0x116e175]        # 0x141660cf8 ; literal="The partners "
0x004f2b83: mov    rcx,r13
0x004f2b86: call   0x140070b20
0x004f2b8b: mov    ecx,DWORD PTR [r12+0xb0]
0x004f2b93: test   ecx,ecx
0x004f2b95: je     0x1404f2bb3
0x004f2b97: sub    ecx,0x1
0x004f2b9a: je     0x1404f2baa
0x004f2b9c: cmp    ecx,0x1
0x004f2b9f: jne    0x1404f2bc2
0x004f2ba1: lea    rdx,[rip+0x116e188]        # 0x141660d30 ; literal="rarely make contact"
0x004f2ba8: jmp    0x1404f2bba
0x004f2baa: lea    rdx,[rip+0x116e167]        # 0x141660d18 ; literal="maintain open contact"
0x004f2bb1: jmp    0x1404f2bba
0x004f2bb3: lea    rdx,[rip+0x116e14e]        # 0x141660d08 ; literal="dance closely"
0x004f2bba: mov    rcx,r13
0x004f2bbd: call   0x140070b20
0x004f2bc2: lea    rdx,[rip+0x116e17f]        # 0x141660d48 ; literal=", communicating intent "
0x004f2bc9: mov    rcx,r13
0x004f2bcc: call   0x140070b20
0x004f2bd1: movsxd rax,DWORD PTR [r12+0xb4]
0x004f2bd9: cmp    eax,0x5
0x004f2bdc: ja     0x1404f2d39
0x004f2be2: mov    ecx,DWORD PTR [r15+rax*4+0x4f5f5c]
0x004f2bea: add    rcx,r15
0x004f2bed: jmp    rcx
0x004f2bef: lea    rdx,[rip+0x116e16a]        # 0x141660d60 ; literal="by pushing together"
0x004f2bf6: mov    rcx,r13
0x004f2bf9: call   0x140070b20
0x004f2bfe: cmp    DWORD PTR [r12+0xb8],0x0
0x004f2c07: jne    0x1404f2c18
0x004f2c09: lea    rdx,[rip+0x116e168]        # 0x141660d78 ; literal=" constantly"
0x004f2c10: mov    rcx,r13
0x004f2c13: call   0x140070b20
0x004f2c18: cmp    DWORD PTR [r12+0xb8],0x1
0x004f2c21: jne    0x1404f2d39
0x004f2c27: lea    rdx,[rip+0x116e15a]        # 0x141660d88 ; literal=" briefly"
0x004f2c2e: jmp    0x1404f2d31
0x004f2c33: lea    rdx,[rip+0x116e15e]        # 0x141660d98 ; literal="by pulling away"
0x004f2c3a: jmp    0x1404f2bf6
0x004f2c3c: cmp    DWORD PTR [r12+0xb8],0x0
0x004f2c45: jne    0x1404f2c56
0x004f2c47: lea    rdx,[rip+0x116e15a]        # 0x141660da8 ; literal="constantly "
0x004f2c4e: mov    rcx,r13
0x004f2c51: call   0x140070b20
0x004f2c56: cmp    DWORD PTR [r12+0xb8],0x1
0x004f2c5f: jne    0x1404f2c70
0x004f2c61: lea    rdx,[rip+0x116dbc8]        # 0x141660830 ; literal="briefly "
0x004f2c68: mov    rcx,r13
0x004f2c6b: call   0x140070b20
0x004f2c70: lea    rdx,[rip+0x116dbc9]        # 0x141660840 ; literal="through touch"
0x004f2c77: jmp    0x1404f2d31
0x004f2c7c: cmp    DWORD PTR [r12+0xb8],0x0
0x004f2c85: jne    0x1404f2c96
0x004f2c87: lea    rdx,[rip+0x116e11a]        # 0x141660da8 ; literal="constantly "
0x004f2c8e: mov    rcx,r13
0x004f2c91: call   0x140070b20
0x004f2c96: cmp    DWORD PTR [r12+0xb8],0x1
0x004f2c9f: jne    0x1404f2cb0
0x004f2ca1: lea    rdx,[rip+0x116db88]        # 0x141660830 ; literal="briefly "
0x004f2ca8: mov    rcx,r13
0x004f2cab: call   0x140070b20
0x004f2cb0: lea    rdx,[rip+0x116db99]        # 0x141660850 ; literal="through a light touch"
0x004f2cb7: jmp    0x1404f2d31
0x004f2cb9: cmp    DWORD PTR [r12+0xb8],0x0
0x004f2cc2: jne    0x1404f2cd3
0x004f2cc4: lea    rdx,[rip+0x116e0dd]        # 0x141660da8 ; literal="constantly "
0x004f2ccb: mov    rcx,r13
0x004f2cce: call   0x140070b20
0x004f2cd3: cmp    DWORD PTR [r12+0xb8],0x1
0x004f2cdc: jne    0x1404f2ced
0x004f2cde: lea    rdx,[rip+0x116db4b]        # 0x141660830 ; literal="briefly "
0x004f2ce5: mov    rcx,r13
0x004f2ce8: call   0x140070b20
0x004f2ced: lea    rdx,[rip+0x116db74]        # 0x141660868 ; literal="through visual cues"
0x004f2cf4: jmp    0x1404f2d31
0x004f2cf6: cmp    DWORD PTR [r12+0xb8],0x0
0x004f2cff: jne    0x1404f2d10
0x004f2d01: lea    rdx,[rip+0x116e0a0]        # 0x141660da8 ; literal="constantly "
0x004f2d08: mov    rcx,r13
0x004f2d0b: call   0x140070b20
0x004f2d10: cmp    DWORD PTR [r12+0xb8],0x1
0x004f2d19: jne    0x1404f2d2a
0x004f2d1b: lea    rdx,[rip+0x116db0e]        # 0x141660830 ; literal="briefly "
0x004f2d22: mov    rcx,r13
0x004f2d25: call   0x140070b20
0x004f2d2a: lea    rdx,[rip+0x116db4f]        # 0x141660880 ; literal="through spoken cues"
0x004f2d31: mov    rcx,r13
0x004f2d34: call   0x140070b20
0x004f2d39: lea    rdx,[rip+0x1121940]        # 0x141614680 ; literal=".  "
0x004f2d40: mov    rcx,r13
0x004f2d43: call   0x140070b20
0x004f2d48: mov    rcx,QWORD PTR [r12+0xc8]
0x004f2d50: mov    r10,QWORD PTR [r12+0xc0]
0x004f2d58: mov    rax,rcx
0x004f2d5b: sub    rax,r10
0x004f2d5e: sar    rax,0x2
0x004f2d62: test   rax,rax
0x004f2d65: je     0x1404f2ede
0x004f2d6b: mov    edi,r14d
0x004f2d6e: mov    QWORD PTR [rsp+0x40],r10
0x004f2d73: mov    QWORD PTR [rsp+0x48],rcx
0x004f2d78: lea    r8,[rsp+0x48]
0x004f2d7d: lea    rdx,[rsp+0x30]
0x004f2d82: lea    rcx,[rsp+0x40]
0x004f2d87: call   0x1400703e0
0x004f2d8c: cmp    BYTE PTR [rax],dil
0x004f2d8f: jge    0x1404f2ede
0x004f2d95: mov    rdx,r10
0x004f2d98: mov    r8,r10
0x004f2d9b: nop    DWORD PTR [rax+rax*1+0x0]
0x004f2da0: mov    ecx,DWORD PTR [r10]
0x004f2da3: test   ecx,ecx
0x004f2da5: je     0x1404f2db6
0x004f2da7: sub    ecx,0x1
0x004f2daa: je     0x1404f2db6
0x004f2dac: sub    ecx,0x1
0x004f2daf: je     0x1404f2db6
0x004f2db1: cmp    ecx,0x1
0x004f2db4: jne    0x1404f2dbb
0x004f2db6: inc    edi
0x004f2db8: mov    rdx,r8
0x004f2dbb: lea    r10,[rdx+0x4]
0x004f2dbf: mov    QWORD PTR [rsp+0x40],r10
0x004f2dc4: lea    r8,[rsp+0x48]
0x004f2dc9: lea    rdx,[rsp+0x30]
0x004f2dce: lea    rcx,[rsp+0x40]
0x004f2dd3: call   0x1400703e0
0x004f2dd8: mov    rdx,r10
0x004f2ddb: mov    r8,r10
0x004f2dde: cmp    BYTE PTR [rax],0x0
0x004f2de1: jl     0x1404f2da0
0x004f2de3: test   edi,edi
0x004f2de5: jle    0x1404f2ede
0x004f2deb: lea    rdx,[rip+0x116daa6]        # 0x141660898 ; literal="There are partner changes throughout the dance "
0x004f2df2: mov    rcx,r13
0x004f2df5: call   0x140070b20
0x004f2dfa: mov    rbx,QWORD PTR [r12+0xc0]
0x004f2e02: mov    QWORD PTR [rsp+0x40],rbx
0x004f2e07: mov    rax,QWORD PTR [r12+0xc8]
0x004f2e0f: mov    QWORD PTR [rsp+0x48],rax
0x004f2e14: lea    r8,[rsp+0x48]
0x004f2e19: lea    rdx,[rsp+0x30]
0x004f2e1e: lea    rcx,[rsp+0x40]
0x004f2e23: call   0x1400703e0
0x004f2e28: cmp    BYTE PTR [rax],0x0
0x004f2e2b: jge    0x1404f2ecf
0x004f2e31: mov    ecx,DWORD PTR [rbx]
0x004f2e33: mov    edx,ecx
0x004f2e35: test   ecx,ecx
0x004f2e37: je     0x1404f2e48
0x004f2e39: sub    edx,0x1
0x004f2e3c: je     0x1404f2e48
0x004f2e3e: sub    edx,0x1
0x004f2e41: je     0x1404f2e48
0x004f2e43: cmp    edx,0x1
0x004f2e46: jne    0x1404f2ea9
0x004f2e48: dec    edi
0x004f2e4a: test   ecx,ecx
0x004f2e4c: je     0x1404f2e78
0x004f2e4e: sub    ecx,0x1
0x004f2e51: je     0x1404f2e6f
0x004f2e53: sub    ecx,0x1
0x004f2e56: je     0x1404f2e66
0x004f2e58: cmp    ecx,0x1
0x004f2e5b: jne    0x1404f2e87
0x004f2e5d: lea    rdx,[rip+0x116dafc]        # 0x141660960 ; literal="with the lead turning out counterclockwise"
0x004f2e64: jmp    0x1404f2e7f
0x004f2e66: lea    rdx,[rip+0x116dacb]        # 0x141660938 ; literal="with the lead turning out clockwise"
0x004f2e6d: jmp    0x1404f2e7f
0x004f2e6f: lea    rdx,[rip+0x116da8a]        # 0x141660900 ; literal="with the lead advancing against the main line of motion"
0x004f2e76: jmp    0x1404f2e7f
0x004f2e78: lea    rdx,[rip+0x116da49]        # 0x1416608c8 ; literal="with the lead advancing along the main line of motion"
0x004f2e7f: mov    rcx,r13
0x004f2e82: call   0x140070b20
0x004f2e87: cmp    edi,0x2
0x004f2e8a: jl     0x1404f2e95
0x004f2e8c: lea    rdx,[rip+0x1121371]        # 0x141614204 ; literal=","
0x004f2e93: jmp    0x1404f2ea1
0x004f2e95: cmp    edi,0x1
0x004f2e98: jne    0x1404f2ea9
0x004f2e9a: lea    rdx,[rip+0x110c49f]        # 0x1415ff340 ; literal=" and "
0x004f2ea1: mov    rcx,r13
0x004f2ea4: call   0x140070b20
0x004f2ea9: add    rbx,0x4
0x004f2ead: mov    QWORD PTR [rsp+0x40],rbx
0x004f2eb2: lea    r8,[rsp+0x48]
0x004f2eb7: lea    rdx,[rsp+0x30]
0x004f2ebc: lea    rcx,[rsp+0x40]
0x004f2ec1: call   0x1400703e0
0x004f2ec6: cmp    BYTE PTR [rax],0x0
0x004f2ec9: jl     0x1404f2e31
0x004f2ecf: lea    rdx,[rip+0x11217aa]        # 0x141614680 ; literal=".  "
0x004f2ed6: mov    rcx,r13
0x004f2ed9: call   0x140070b20
0x004f2ede: xorps  xmm0,xmm0
0x004f2ee1: movdqu XMMWORD PTR [rbp+0xa0],xmm0
0x004f2ee9: mov    QWORD PTR [rbp+0xb0],r14
0x004f2ef0: movdqu XMMWORD PTR [rbp-0x80],xmm0
0x004f2ef5: mov    QWORD PTR [rbp-0x70],r14
0x004f2ef9: mov    r10,QWORD PTR [r12+0x160]
0x004f2f01: mov    QWORD PTR [rsp+0x40],r10
0x004f2f06: mov    rax,QWORD PTR [r12+0x168]
0x004f2f0e: mov    QWORD PTR [rsp+0x48],rax
0x004f2f13: lea    r8,[rsp+0x48]
0x004f2f18: lea    rdx,[rsp+0x30]
0x004f2f1d: lea    rcx,[rsp+0x40]
0x004f2f22: call   0x1400703e0
0x004f2f27: cmp    BYTE PTR [rax],0x0
0x004f2f2a: jge    0x1404f2fa1
0x004f2f2c: mov    rdx,r10
0x004f2f2f: mov    rbx,r10
0x004f2f32: mov    rdi,r10
0x004f2f35: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x004f2f40: mov    rax,QWORD PTR [r10]
0x004f2f43: mov    ecx,DWORD PTR [rax+0x80]
0x004f2f49: test   cl,0x2
0x004f2f4c: je     0x1404f2f5f
0x004f2f4e: mov    rdx,r10
0x004f2f51: lea    rcx,[rbp+0xa0]
0x004f2f58: call   0x1400baf40
0x004f2f5d: jmp    0x1404f2f76
0x004f2f5f: mov    rbx,rdx
0x004f2f62: test   cl,0x4
0x004f2f65: je     0x1404f2f76
0x004f2f67: mov    rdx,r10
0x004f2f6a: lea    rcx,[rbp-0x80]
0x004f2f6e: call   0x1400baf40
0x004f2f73: mov    rbx,rdi
0x004f2f76: lea    r10,[rbx+0x8]
0x004f2f7a: mov    QWORD PTR [rsp+0x40],r10
0x004f2f7f: lea    r8,[rsp+0x48]
0x004f2f84: lea    rdx,[rsp+0x30]
0x004f2f89: lea    rcx,[rsp+0x40]
0x004f2f8e: call   0x1400703e0
0x004f2f93: mov    rdx,r10
0x004f2f96: mov    rbx,r10
0x004f2f99: mov    rdi,r10
0x004f2f9c: cmp    BYTE PTR [rax],0x0
0x004f2f9f: jl     0x1404f2f40
0x004f2fa1: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f2fa8: mov    rax,rdi
0x004f2fab: mov    rbx,QWORD PTR [rbp+0xa0]
0x004f2fb2: sub    rax,rbx
0x004f2fb5: sar    rax,0x3
0x004f2fb9: mov    ecx,0xffffffff
0x004f2fbe: mov    rdx,QWORD PTR [rbp-0x78]
0x004f2fc2: mov    r15,QWORD PTR [rbp-0x80]
0x004f2fc6: test   rax,rax
0x004f2fc9: jne    0x1404f300b
0x004f2fcb: mov    rax,rdx
0x004f2fce: sub    rax,r15
0x004f2fd1: sar    rax,0x3
0x004f2fd5: test   rax,rax
0x004f2fd8: jne    0x1404f300b
0x004f2fda: mov    rax,QWORD PTR [r12+0xf0]
0x004f2fe2: sub    rax,QWORD PTR [r12+0xe8]
0x004f2fea: sar    rax,0x2
0x004f2fee: test   rax,rax
0x004f2ff1: jne    0x1404f300b
0x004f2ff3: cmp    DWORD PTR [r12+0xac],ecx
0x004f2ffb: jne    0x1404f300b
0x004f2ffd: cmp    DWORD PTR [r12+0xe4],ecx
0x004f3005: je     0x1404f3ef0
0x004f300b: cmp    DWORD PTR [r12+0xe4],ecx
0x004f3013: je     0x1404f3056
0x004f3015: lea    rdx,[rip+0x116d974]        # 0x141660990 ; literal="The dancers imitate the movement of the "
0x004f301c: mov    rcx,r13
0x004f301f: call   0x140070b20
0x004f3024: mov    BYTE PTR [rsp+0x28],0x0
0x004f3029: mov    WORD PTR [rsp+0x20],0xffff
0x004f3030: xor    r9d,r9d
0x004f3033: mov    r8d,DWORD PTR [r12+0xe4]
0x004f303b: mov    rdx,r13
0x004f303e: call   0x140ba99b0
0x004f3043: lea    rdx,[rip+0x1121636]        # 0x141614680 ; literal=".  "
0x004f304a: mov    rcx,r13
0x004f304d: call   0x140070b20
0x004f3052: mov    rdx,QWORD PTR [rbp-0x78]
0x004f3056: mov    rax,rdi
0x004f3059: sub    rax,rbx
0x004f305c: sar    rax,0x3
0x004f3060: test   rax,rax
0x004f3063: jne    0x1404f3078
0x004f3065: mov    rax,rdx
0x004f3068: sub    rax,r15
0x004f306b: sar    rax,0x3
0x004f306f: test   rax,rax
0x004f3072: je     0x1404f31b1
0x004f3078: lea    rdx,[rip+0x116d941]        # 0x1416609c0 ; literal="This dance is a refined artform, with "
0x004f307f: mov    rcx,r13
0x004f3082: call   0x140070b20
0x004f3087: mov    rax,rdi
0x004f308a: sub    rax,rbx
0x004f308d: sar    rax,0x3
0x004f3091: test   rax,rax
0x004f3094: je     0x1404f312b
0x004f309a: lea    rcx,[rbp+0x100]
0x004f30a1: call   0x140070c50
0x004f30a6: nop
0x004f30a7: mov    rcx,rdi
0x004f30aa: sub    rcx,rbx
0x004f30ad: sar    rcx,0x3
0x004f30b1: lea    rdx,[rbp+0x100]
0x004f30b8: call   0x140545040
0x004f30bd: lea    rdx,[rbp+0x100]
0x004f30c4: mov    rcx,r13
0x004f30c7: call   0x1400bb2d0
0x004f30cc: lea    rdx,[rip+0x116d915]        # 0x1416609e8 ; literal=" special position"
0x004f30d3: mov    rcx,r13
0x004f30d6: call   0x140070b20
0x004f30db: mov    rax,rdi
0x004f30de: sub    rax,rbx
0x004f30e1: sar    rax,0x3
0x004f30e5: cmp    rax,0x2
0x004f30e9: jb     0x1404f30fa
0x004f30eb: lea    rdx,[rip+0x110c3d6]        # 0x1415ff4c8 ; literal="s"
0x004f30f2: mov    rcx,r13
0x004f30f5: call   0x140070b20
0x004f30fa: mov    r14,QWORD PTR [rbp-0x78]
0x004f30fe: mov    rax,r14
0x004f3101: sub    rax,r15
0x004f3104: sar    rax,0x3
0x004f3108: test   rax,rax
0x004f310b: je     0x1404f311d
0x004f310d: lea    rdx,[rip+0x110c22c]        # 0x1415ff340 ; literal=" and "
0x004f3114: mov    rcx,r13
0x004f3117: call   0x140070b20
0x004f311c: nop
0x004f311d: lea    rcx,[rbp+0x100]
0x004f3124: call   0x140070e10
0x004f3129: jmp    0x1404f312f
0x004f312b: mov    r14,QWORD PTR [rbp-0x78]
0x004f312f: mov    rbx,r14
0x004f3132: sub    rbx,r15
0x004f3135: sar    rbx,0x3
0x004f3139: test   rbx,rbx
0x004f313c: je     0x1404f3199
0x004f313e: lea    rcx,[rbp+0x100]
0x004f3145: call   0x140070c50
0x004f314a: nop
0x004f314b: lea    rdx,[rbp+0x100]
0x004f3152: mov    ecx,ebx
0x004f3154: call   0x140545040
0x004f3159: lea    rdx,[rbp+0x100]
0x004f3160: mov    rcx,r13
0x004f3163: call   0x1400bb2d0
0x004f3168: lea    rdx,[rip+0x116d891]        # 0x141660a00 ; literal=" specific move"
0x004f316f: mov    rcx,r13
0x004f3172: call   0x140070b20
0x004f3177: cmp    rbx,0x2
0x004f317b: jb     0x1404f318d
0x004f317d: lea    rdx,[rip+0x110c344]        # 0x1415ff4c8 ; literal="s"
0x004f3184: mov    rcx,r13
0x004f3187: call   0x140070b20
0x004f318c: nop
0x004f318d: lea    rcx,[rbp+0x100]
0x004f3194: call   0x140070e10
0x004f3199: lea    rdx,[rip+0x116d870]        # 0x141660a10 ; literal=" to be mastered.  "
0x004f31a0: mov    rcx,r13
0x004f31a3: call   0x140070b20
0x004f31a8: mov    rbx,QWORD PTR [rbp+0xa0]
0x004f31af: jmp    0x1404f31b5
0x004f31b1: mov    r14,QWORD PTR [rbp-0x78]
0x004f31b5: cmp    DWORD PTR [r12+0xac],0xffffffff
0x004f31be: je     0x1404f31ff
0x004f31c0: lea    rdx,[rip+0x116d861]        # 0x141660a28 ; literal="The entire dance has a basic movement "
0x004f31c7: mov    rcx,r13
0x004f31ca: call   0x140070b20
0x004f31cf: movsxd rcx,DWORD PTR [r12+0xac]
0x004f31d7: mov    rax,QWORD PTR [r12+0x160]
0x004f31df: mov    r9,r14
0x004f31e2: sub    r9,r15
0x004f31e5: sar    r9,0x3
0x004f31e9: mov    r8,rdi
0x004f31ec: sub    r8,rbx
0x004f31ef: sar    r8,0x3
0x004f31f3: mov    rdx,QWORD PTR [rax+rcx*8]
0x004f31f7: mov    rcx,r13
0x004f31fa: call   0x1404f1320
0x004f31ff: mov    r10,QWORD PTR [r12+0xe8]
0x004f3207: mov    r9,QWORD PTR [r12+0xf0]
0x004f320f: sub    r9,r10
0x004f3212: sar    r9,0x2
0x004f3216: test   r9,r9
0x004f3219: je     0x1404f3ee4
0x004f321f: xor    r12d,r12d
0x004f3222: xor    esi,esi
0x004f3224: xor    r14d,r14d
0x004f3227: xor    r13d,r13d
0x004f322a: xor    r8d,r8d
0x004f322d: mov    rcx,r10
0x004f3230: xor    edx,edx
0x004f3232: mov    r11,QWORD PTR [rsp+0x50]
0x004f3237: lea    r15,[rip+0xffffffffffb0cdc2]        # 0x140000000
0x004f323e: xchg   ax,ax
0x004f3240: cmp    DWORD PTR [rcx+rdx*1],0x5
0x004f3244: jne    0x1404f327f
0x004f3246: mov    rax,QWORD PTR [r11+0x100]
0x004f324d: movsxd rcx,DWORD PTR [rdx+rax*1]
0x004f3251: cmp    ecx,0xffffffff
0x004f3254: je     0x1404f327a
0x004f3256: cmp    ecx,0x2d
0x004f3259: ja     0x1404f3275
0x004f325b: movzx  eax,BYTE PTR [r15+rcx*1+0x4f5f80]
0x004f3264: mov    ecx,DWORD PTR [r15+rax*4+0x4f5f74]
0x004f326c: add    rcx,r15
0x004f326f: jmp    rcx
0x004f3271: inc    esi
0x004f3273: jmp    0x1404f3282
0x004f3275: inc    r14d
0x004f3278: jmp    0x1404f3282
0x004f327a: inc    r13d
0x004f327d: jmp    0x1404f3282
0x004f327f: inc    r12d
0x004f3282: inc    r8d
0x004f3285: add    rdx,0x4
0x004f3289: mov    rcx,r10
0x004f328c: movsxd rax,r8d
0x004f328f: cmp    rax,r9
0x004f3292: jb     0x1404f3240
0x004f3294: mov    DWORD PTR [rsp+0x34],r13d
0x004f3299: mov    DWORD PTR [rsp+0x5c],r14d
0x004f329e: mov    DWORD PTR [rsp+0x60],r12d
0x004f32a3: test   r12d,r12d
0x004f32a6: mov    r15,QWORD PTR [rbp-0x80]
0x004f32aa: jg     0x1404f32be
0x004f32ac: test   r13d,r13d
0x004f32af: jg     0x1404f32be
0x004f32b1: test   r14d,r14d
0x004f32b4: jg     0x1404f32be
0x004f32b6: test   esi,esi
0x004f32b8: jle    0x1404f3ed6
0x004f32be: lea    rdx,[rip+0x116d78b]        # 0x141660a50 ; literal="The"
0x004f32c5: mov    rbx,QWORD PTR [rbp+0xc0]
0x004f32cc: mov    rcx,rbx
0x004f32cf: call   0x140070b20
0x004f32d4: test   r12d,r12d
0x004f32d7: jne    0x1404f32f2
0x004f32d9: test   r13d,r13d
0x004f32dc: jne    0x1404f32f2
0x004f32de: test   r14d,r14d
0x004f32e1: jne    0x1404f32f2
0x004f32e3: lea    rdx,[rip+0x116d76e]        # 0x141660a58 ; literal=" dance is"
0x004f32ea: mov    rcx,rbx
0x004f32ed: call   0x140070b20
0x004f32f2: xor    edi,edi
0x004f32f4: mov    rcx,QWORD PTR [rsp+0x50]
0x004f32f9: mov    rdx,QWORD PTR [rcx+0xe8]
0x004f3300: mov    rax,QWORD PTR [rcx+0xf0]
0x004f3307: sub    rax,rdx
0x004f330a: sar    rax,0x2
0x004f330e: test   rax,rax
0x004f3311: je     0x1404f356f
0x004f3317: xor    ebx,ebx
0x004f3319: mov    r15,QWORD PTR [rbp+0xc0]
0x004f3320: cmp    DWORD PTR [rdx+rbx*1],0x5
0x004f3324: jne    0x1404f353a
0x004f332a: mov    rax,QWORD PTR [rcx+0x100]
0x004f3331: movsxd rcx,DWORD PTR [rbx+rax*1]
0x004f3335: cmp    ecx,0xffffffff
0x004f3338: je     0x1404f353a
0x004f333e: cmp    ecx,0x2d
0x004f3341: ja     0x1404f353a
0x004f3347: lea    rdx,[rip+0xffffffffffb0ccb2]        # 0x140000000
0x004f334e: mov    ecx,DWORD PTR [rdx+rcx*4+0x4f5fb0]
0x004f3355: add    rcx,rdx
0x004f3358: jmp    rcx
0x004f335a: lea    rdx,[rip+0x116ceaf]        # 0x141660210 ; literal=" graceful"
0x004f3361: jmp    0x1404f34ff
0x004f3366: lea    rdx,[rip+0x116ceb3]        # 0x141660220 ; literal=" serene"
0x004f336d: jmp    0x1404f34ff
0x004f3372: lea    rdx,[rip+0x116ceaf]        # 0x141660228 ; literal=" calm"
0x004f3379: jmp    0x1404f34ff
0x004f337e: lea    rdx,[rip+0x116ceab]        # 0x141660230 ; literal=" grotesque"
0x004f3385: jmp    0x1404f34ff
0x004f338a: lea    rdx,[rip+0x116ceab]        # 0x14166023c ; literal=" crude"
0x004f3391: jmp    0x1404f34ff
0x004f3396: lea    rdx,[rip+0x116ceab]        # 0x141660248 ; literal=" refined"
0x004f339d: jmp    0x1404f34ff
0x004f33a2: lea    rdx,[rip+0x116ceaf]        # 0x141660258 ; literal=" understated"
0x004f33a9: jmp    0x1404f34ff
0x004f33ae: lea    rdx,[rip+0x116ceb3]        # 0x141660268 ; literal=" delicate"
0x004f33b5: jmp    0x1404f34ff
0x004f33ba: lea    rdx,[rip+0x116ceb7]        # 0x141660278 ; literal=" elaborate"
0x004f33c1: jmp    0x1404f34ff
0x004f33c6: lea    rdx,[rip+0x116cebb]        # 0x141660288 ; literal=" expressive"
0x004f33cd: jmp    0x1404f34ff
0x004f33d2: lea    rdx,[rip+0x116cebf]        # 0x141660298 ; literal=" strong"
0x004f33d9: jmp    0x1404f34ff
0x004f33de: lea    rdx,[rip+0x116cec3]        # 0x1416602a8 ; literal=" weightless"
0x004f33e5: jmp    0x1404f34ff
0x004f33ea: lea    rdx,[rip+0x116cec3]        # 0x1416602b4 ; literal=" fluid"
0x004f33f1: jmp    0x1404f34ff
0x004f33f6: lea    rdx,[rip+0x116cec3]        # 0x1416602c0 ; literal=" undulating"
0x004f33fd: jmp    0x1404f34ff
0x004f3402: lea    rdx,[rip+0x116cec3]        # 0x1416602cc ; literal=" soft"
0x004f3409: jmp    0x1404f34ff
0x004f340e: lea    rdx,[rip+0x116cec3]        # 0x1416602d8 ; literal=" jerking"
0x004f3415: jmp    0x1404f34ff
0x004f341a: lea    rdx,[rip+0x116cec7]        # 0x1416602e8 ; literal=" sharp-edged"
0x004f3421: jmp    0x1404f34ff
0x004f3426: lea    rdx,[rip+0x116cecb]        # 0x1416602f8 ; literal=" straight-lined"
0x004f342d: jmp    0x1404f34ff
0x004f3432: lea    rdx,[rip+0x116cb7f]        # 0x14165ffb8 ; literal=" energetic"
0x004f3439: jmp    0x1404f34ff
0x004f343e: lea    rdx,[rip+0x116cb83]        # 0x14165ffc8 ; literal=" passionate"
0x004f3445: jmp    0x1404f34ff
0x004f344a: lea    rdx,[rip+0x116cb87]        # 0x14165ffd8 ; literal=" vivacious"
0x004f3451: jmp    0x1404f34ff
0x004f3456: lea    rdx,[rip+0x116cb8b]        # 0x14165ffe8 ; literal=" joyous"
0x004f345d: jmp    0x1404f34ff
0x004f3462: lea    rdx,[rip+0x116cb87]        # 0x14165fff0 ; literal=" proud"
0x004f3469: jmp    0x1404f34ff
0x004f346e: lea    rdx,[rip+0x116cb83]        # 0x14165fff8 ; literal=" flamboyant"
0x004f3475: jmp    0x1404f34ff
0x004f347a: lea    rdx,[rip+0x116cb87]        # 0x141660008 ; literal=" lively"
0x004f3481: jmp    0x1404f34ff
0x004f3483: lea    rdx,[rip+0x116cb86]        # 0x141660010 ; literal=" spirited"
0x004f348a: jmp    0x1404f34ff
0x004f348c: lea    rdx,[rip+0x116cb8d]        # 0x141660020 ; literal=" vigorous"
0x004f3493: jmp    0x1404f34ff
0x004f3495: lea    rdx,[rip+0x116cb94]        # 0x141660030 ; literal=" intense"
0x004f349c: jmp    0x1404f34ff
0x004f349e: lea    rdx,[rip+0x116cb9b]        # 0x141660040 ; literal=" aggressive"
0x004f34a5: jmp    0x1404f34ff
0x004f34a7: lea    rdx,[rip+0x116cba2]        # 0x141660050 ; literal=" powerful"
0x004f34ae: jmp    0x1404f34ff
0x004f34b0: lea    rdx,[rip+0x116cba9]        # 0x141660060 ; literal=" sluggish"
0x004f34b7: jmp    0x1404f34ff
0x004f34b9: lea    rdx,[rip+0x116cbb0]        # 0x141660070 ; literal=" relaxed"
0x004f34c0: jmp    0x1404f34ff
0x004f34c2: lea    rdx,[rip+0x116cbb7]        # 0x141660080 ; literal=" passive"
0x004f34c9: jmp    0x1404f34ff
0x004f34cb: lea    rdx,[rip+0x116cbbe]        # 0x141660090 ; literal=" subtle"
0x004f34d2: jmp    0x1404f34ff
0x004f34d4: lea    rdx,[rip+0x116cbbd]        # 0x141660098 ; literal=" sensual"
0x004f34db: jmp    0x1404f34ff
0x004f34dd: lea    rdx,[rip+0x116cbc4]        # 0x1416600a8 ; literal=" debauched"
0x004f34e4: jmp    0x1404f34ff
0x004f34e6: lea    rdx,[rip+0x116cbcb]        # 0x1416600b8 ; literal=" twisting"
0x004f34ed: jmp    0x1404f34ff
0x004f34ef: lea    rdx,[rip+0x116cbd2]        # 0x1416600c8 ; literal=" sprightly"
0x004f34f6: jmp    0x1404f34ff
0x004f34f8: lea    rdx,[rip+0x116cbd9]        # 0x1416600d8 ; literal=" sinuous"
0x004f34ff: mov    rcx,r15
0x004f3502: call   0x140070b20
0x004f3507: test   r12d,r12d
0x004f350a: jne    0x1404f353a
0x004f350c: test   r13d,r13d
0x004f350f: jne    0x1404f353a
0x004f3511: test   r14d,r14d
0x004f3514: jne    0x1404f353a
0x004f3516: cmp    esi,0x3
0x004f3519: jl     0x1404f3524
0x004f351b: lea    rdx,[rip+0x1120ce2]        # 0x141614204 ; literal=","
0x004f3522: jmp    0x1404f3530
0x004f3524: cmp    esi,0x2
0x004f3527: jne    0x1404f3538
0x004f3529: lea    rdx,[rip+0x111155c]        # 0x141604a8c ; literal=" and"
0x004f3530: mov    rcx,r15
0x004f3533: call   0x140070b20
0x004f3538: dec    esi
0x004f353a: inc    edi
0x004f353c: add    rbx,0x4
0x004f3540: mov    rax,QWORD PTR [rsp+0x50]
0x004f3545: mov    rdx,QWORD PTR [rax+0xe8]
0x004f354c: mov    rcx,QWORD PTR [rax+0xf0]
0x004f3553: sub    rcx,rdx
0x004f3556: sar    rcx,0x2
0x004f355a: movsxd rax,edi
0x004f355d: cmp    rax,rcx
0x004f3560: mov    rcx,QWORD PTR [rsp+0x50]
0x004f3565: jb     0x1404f3320
0x004f356b: mov    r15,QWORD PTR [rbp-0x80]
0x004f356f: test   r12d,r12d
0x004f3572: jg     0x1404f3582
0x004f3574: test   r13d,r13d
0x004f3577: jg     0x1404f3582
0x004f3579: test   r14d,r14d
0x004f357c: jle    0x1404f3eac
0x004f3582: lea    rdx,[rip+0x116d4df]        # 0x141660a68 ; literal=" dance is punctuated by "
0x004f3589: mov    rdi,QWORD PTR [rbp+0xc0]
0x004f3590: mov    rcx,rdi
0x004f3593: call   0x140070b20
0x004f3598: xor    r13d,r13d
0x004f359b: mov    DWORD PTR [rsp+0x48],r13d
0x004f35a0: mov    rax,QWORD PTR [rsp+0x50]
0x004f35a5: mov    rdx,QWORD PTR [rax+0xe8]
0x004f35ac: mov    rax,QWORD PTR [rax+0xf0]
0x004f35b3: sub    rax,rdx
0x004f35b6: sar    rax,0x2
0x004f35ba: test   rax,rax
0x004f35bd: je     0x1404f3c33
0x004f35c3: xor    r14d,r14d
0x004f35c6: mov    ebx,DWORD PTR [rbp+0xc0]
0x004f35cc: mov    r15,QWORD PTR [rsp+0x50]
0x004f35d1: cmp    DWORD PTR [rdx+r14*4],0x5
0x004f35d6: je     0x1404f3bf9
0x004f35dc: dec    r12d
0x004f35df: mov    rax,QWORD PTR [r15+0x130]
0x004f35e6: test   BYTE PTR [rax+r14*4],0xc0
0x004f35eb: je     0x1404f35fc
0x004f35ed: lea    rdx,[rip+0x110ba84]        # 0x1415ff078 ; literal="the "
0x004f35f4: mov    rcx,rdi
0x004f35f7: call   0x140070b20
0x004f35fc: mov    rax,QWORD PTR [r15+0x100]
0x004f3603: movsxd rcx,DWORD PTR [rax+r14*4]
0x004f3607: lea    rsi,[rip+0xffffffffffb0c9f2]        # 0x140000000
0x004f360e: cmp    ecx,0x2d
0x004f3611: ja     0x1404f3824
0x004f3617: mov    ecx,DWORD PTR [rsi+rcx*4+0x4f6068]
0x004f361e: add    rcx,rsi
0x004f3621: jmp    rcx
0x004f3623: lea    rdx,[rip+0x116d45e]        # 0x141660a88 ; literal="graceful"
0x004f362a: jmp    0x1404f381c
0x004f362f: lea    rdx,[rip+0x116d45e]        # 0x141660a94 ; literal="serene"
0x004f3636: jmp    0x1404f381c
0x004f363b: lea    rdx,[rip+0x116d45a]        # 0x141660a9c ; literal="calm"
0x004f3642: jmp    0x1404f381c
0x004f3647: lea    rdx,[rip+0x116d45a]        # 0x141660aa8 ; literal="grotesque"
0x004f364e: jmp    0x1404f381c
0x004f3653: lea    rdx,[rip+0x116d45a]        # 0x141660ab4 ; literal="crude"
0x004f365a: jmp    0x1404f381c
0x004f365f: lea    rdx,[rip+0x116d45a]        # 0x141660ac0 ; literal="refined"
0x004f3666: jmp    0x1404f381c
0x004f366b: lea    rdx,[rip+0x116d456]        # 0x141660ac8 ; literal="understated"
0x004f3672: jmp    0x1404f381c
0x004f3677: lea    rdx,[rip+0x116d45a]        # 0x141660ad8 ; literal="delicate"
0x004f367e: jmp    0x1404f381c
0x004f3683: lea    rdx,[rip+0x116d45e]        # 0x141660ae8 ; literal="elaborate"
0x004f368a: jmp    0x1404f381c
0x004f368f: lea    rdx,[rip+0x116d462]        # 0x141660af8 ; literal="expressive"
0x004f3696: jmp    0x1404f381c
0x004f369b: lea    rdx,[rip+0x116d462]        # 0x141660b04 ; literal="strong"
0x004f36a2: jmp    0x1404f381c
0x004f36a7: lea    rdx,[rip+0x116d45e]        # 0x141660b0c ; literal="large"
0x004f36ae: jmp    0x1404f381c
0x004f36b3: lea    rdx,[rip+0x116d45e]        # 0x141660b18 ; literal="weightless"
0x004f36ba: jmp    0x1404f381c
0x004f36bf: lea    rdx,[rip+0x116d8de]        # 0x141660fa4 ; literal="fluid"
0x004f36c6: jmp    0x1404f381c
0x004f36cb: lea    rdx,[rip+0x116d8de]        # 0x141660fb0 ; literal="undulating"
0x004f36d2: jmp    0x1404f381c
0x004f36d7: lea    rdx,[rip+0x116d8de]        # 0x141660fbc ; literal="soft"
0x004f36de: jmp    0x1404f381c
0x004f36e3: lea    rdx,[rip+0x116d8de]        # 0x141660fc8 ; literal="jerking"
0x004f36ea: jmp    0x1404f381c
0x004f36ef: lea    rdx,[rip+0x116d8da]        # 0x141660fd0 ; literal="sharp-edged"
0x004f36f6: jmp    0x1404f381c
0x004f36fb: lea    rdx,[rip+0x116d8de]        # 0x141660fe0 ; literal="straight-lined"
0x004f3702: jmp    0x1404f381c
0x004f3707: lea    rdx,[rip+0x116d8e2]        # 0x141660ff0 ; literal="high"
0x004f370e: jmp    0x1404f381c
0x004f3713: lea    rdx,[rip+0x116d8de]        # 0x141660ff8 ; literal="low"
0x004f371a: jmp    0x1404f381c
0x004f371f: lea    rdx,[rip+0x116d8da]        # 0x141661000 ; literal="loudly percussive"
0x004f3726: jmp    0x1404f381c
0x004f372b: lea    rdx,[rip+0x116d8e6]        # 0x141661018 ; literal="softly percussive"
0x004f3732: jmp    0x1404f381c
0x004f3737: lea    rdx,[rip+0x116d8f2]        # 0x141661030 ; literal="aborted"
0x004f373e: jmp    0x1404f381c
0x004f3743: lea    rdx,[rip+0x116d8ee]        # 0x141661038 ; literal="partially realized"
0x004f374a: jmp    0x1404f381c
0x004f374f: lea    rdx,[rip+0x116d8fa]        # 0x141661050 ; literal="energetic"
0x004f3756: jmp    0x1404f381c
0x004f375b: lea    rdx,[rip+0x1125fbe]        # 0x141619720 ; literal="passionate"
0x004f3762: jmp    0x1404f381c
0x004f3767: lea    rdx,[rip+0x116d8f2]        # 0x141661060 ; literal="vivacious"
0x004f376e: jmp    0x1404f381c
0x004f3773: lea    rdx,[rip+0x116d8f2]        # 0x14166106c ; literal="joyous"
0x004f377a: jmp    0x1404f381c
0x004f377f: lea    rdx,[rip+0x1125f7e]        # 0x141619704 ; literal="proud"
0x004f3786: jmp    0x1404f381c
0x004f378b: lea    rdx,[rip+0x116d8e6]        # 0x141661078 ; literal="flamboyant"
0x004f3792: jmp    0x1404f381c
0x004f3797: lea    rdx,[rip+0x116d8e6]        # 0x141661084 ; literal="lively"
0x004f379e: jmp    0x1404f381c
0x004f37a0: lea    rdx,[rip+0x116d8e9]        # 0x141661090 ; literal="spirited"
0x004f37a7: jmp    0x1404f381c
0x004f37a9: lea    rdx,[rip+0x116d8f0]        # 0x1416610a0 ; literal="vigorous"
0x004f37b0: jmp    0x1404f381c
0x004f37b2: lea    rdx,[rip+0x116d8f7]        # 0x1416610b0 ; literal="intense"
0x004f37b9: jmp    0x1404f381c
0x004f37bb: lea    rdx,[rip+0x116d8f6]        # 0x1416610b8 ; literal="aggressive"
0x004f37c2: jmp    0x1404f381c
0x004f37c4: lea    rdx,[rip+0x116d8fd]        # 0x1416610c8 ; literal="powerful"
0x004f37cb: jmp    0x1404f381c
0x004f37cd: lea    rdx,[rip+0x116d904]        # 0x1416610d8 ; literal="sluggish"
0x004f37d4: jmp    0x1404f381c
0x004f37d6: lea    rdx,[rip+0x116d90b]        # 0x1416610e8 ; literal="relaxed"
0x004f37dd: jmp    0x1404f381c
0x004f37df: lea    rdx,[rip+0x116d90a]        # 0x1416610f0 ; literal="passive"
0x004f37e6: jmp    0x1404f381c
0x004f37e8: lea    rdx,[rip+0x116d909]        # 0x1416610f8 ; literal="subtle"
0x004f37ef: jmp    0x1404f381c
0x004f37f1: lea    rdx,[rip+0x116d908]        # 0x141661100 ; literal="sensual"
0x004f37f8: jmp    0x1404f381c
0x004f37fa: lea    rdx,[rip+0x116d907]        # 0x141661108 ; literal="debauched"
0x004f3801: jmp    0x1404f381c
0x004f3803: lea    rdx,[rip+0x116d90e]        # 0x141661118 ; literal="twisting"
0x004f380a: jmp    0x1404f381c
0x004f380c: lea    rdx,[rip+0x116d915]        # 0x141661128 ; literal="sprightly"
0x004f3813: jmp    0x1404f381c
0x004f3815: lea    rdx,[rip+0x116d91c]        # 0x141661138 ; literal="sinuous"
0x004f381c: mov    rcx,rdi
0x004f381f: call   0x140070b20
0x004f3824: mov    rax,QWORD PTR [r15+0x100]
0x004f382b: cmp    DWORD PTR [rax+r14*4],0xffffffff
0x004f3830: je     0x1404f3841
0x004f3832: lea    rdx,[rip+0x110b133]        # 0x1415fe96c ; literal=" "
0x004f3839: mov    rcx,rdi
0x004f383c: call   0x140070b20
0x004f3841: mov    rcx,QWORD PTR [r15+0xe8]
0x004f3848: mov    edx,DWORD PTR [rcx+r14*4]
0x004f384c: sub    edx,0x6
0x004f384f: je     0x1404f3882
0x004f3851: sub    edx,0x7
0x004f3854: je     0x1404f3864
0x004f3856: sub    edx,0x1
0x004f3859: je     0x1404f3864
0x004f385b: cmp    edx,0x1
0x004f385e: jne    0x1404f3931
0x004f3864: mov    rax,QWORD PTR [r15+0x118]
0x004f386b: cmp    DWORD PTR [rax+r14*4],0x2
0x004f3870: jne    0x1404f3931
0x004f3876: lea    rdx,[rip+0x116d56b]        # 0x141660de8 ; literal="repeated "
0x004f387d: jmp    0x1404f3929
0x004f3882: mov    rax,QWORD PTR [r15+0x118]
0x004f3889: cmp    DWORD PTR [rax+r14*4],0x0
0x004f388e: jge    0x1404f389f
0x004f3890: lea    rdx,[rip+0x116d8a9]        # 0x141661140 ; literal="counterclockwise "
0x004f3897: mov    rcx,rdi
0x004f389a: call   0x140070b20
0x004f389f: mov    rax,QWORD PTR [r15+0x118]
0x004f38a6: cmp    DWORD PTR [rax+r14*4],0x0
0x004f38ab: jle    0x1404f38bc
0x004f38ad: lea    rdx,[rip+0x116d504]        # 0x141660db8 ; literal="clockwise "
0x004f38b4: mov    rcx,rdi
0x004f38b7: call   0x140070b20
0x004f38bc: mov    rax,QWORD PTR [r15+0x118]
0x004f38c3: mov    ecx,DWORD PTR [rax+r14*4]
0x004f38c7: neg    ecx
0x004f38c9: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f38ce: cmp    ecx,0x2d
0x004f38d1: jne    0x1404f38e2
0x004f38d3: lea    rdx,[rip+0x116d4ee]        # 0x141660dc8 ; literal="eighth "
0x004f38da: mov    rcx,rdi
0x004f38dd: call   0x140070b20
0x004f38e2: mov    rax,QWORD PTR [r15+0x118]
0x004f38e9: mov    ecx,DWORD PTR [rax+r14*4]
0x004f38ed: neg    ecx
0x004f38ef: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f38f4: cmp    ecx,0x5a
0x004f38f7: jne    0x1404f3908
0x004f38f9: lea    rdx,[rip+0x116d4d0]        # 0x141660dd0 ; literal="quarter "
0x004f3900: mov    rcx,rdi
0x004f3903: call   0x140070b20
0x004f3908: mov    rax,QWORD PTR [r15+0x118]
0x004f390f: mov    ecx,DWORD PTR [rax+r14*4]
0x004f3913: neg    ecx
0x004f3915: cmovs  ecx,DWORD PTR [rax+r14*4]
0x004f391a: cmp    ecx,0xb4
0x004f3920: jne    0x1404f3931
0x004f3922: lea    rdx,[rip+0x116d4b3]        # 0x141660ddc ; literal="half "
0x004f3929: mov    rcx,rdi
0x004f392c: call   0x140070b20
0x004f3931: mov    rax,QWORD PTR [r15+0xe8]
0x004f3938: mov    ecx,DWORD PTR [rax+r14*4]
0x004f393c: add    ecx,0xfffffffa
0x004f393f: cmp    ecx,0x1b
0x004f3942: ja     0x1404f3a80
0x004f3948: movsxd rax,ecx
0x004f394b: mov    ecx,DWORD PTR [rsi+rax*4+0x4f6120]
0x004f3952: add    rcx,rsi
0x004f3955: jmp    rcx
0x004f3957: lea    rdx,[rip+0x116d496]        # 0x141660df4 ; literal="turns"
0x004f395e: jmp    0x1404f3a78
0x004f3963: lea    rdx,[rip+0x116d496]        # 0x141660e00 ; literal="facial expressions"
0x004f396a: jmp    0x1404f3a78
0x004f396f: lea    rdx,[rip+0x116d4a2]        # 0x141660e18 ; literal="hand gestures"
0x004f3976: jmp    0x1404f3a78
0x004f397b: lea    rdx,[rip+0x116d4a6]        # 0x141660e28 ; literal="straight walks"
0x004f3982: jmp    0x1404f3a78
0x004f3987: lea    rdx,[rip+0x116d4aa]        # 0x141660e38 ; literal="curved walks"
0x004f398e: jmp    0x1404f3a78
0x004f3993: lea    rdx,[rip+0x116d4ae]        # 0x141660e48 ; literal="runs"
0x004f399a: jmp    0x1404f3a78
0x004f399f: lea    rdx,[rip+0x116d4aa]        # 0x141660e50 ; literal="leaps"
0x004f39a6: jmp    0x1404f3a78
0x004f39ab: lea    rdx,[rip+0x116d4a6]        # 0x141660e58 ; literal="kicks"
0x004f39b2: jmp    0x1404f3a78
0x004f39b7: lea    rdx,[rip+0x116d4a2]        # 0x141660e60 ; literal="left kicks"
0x004f39be: jmp    0x1404f3a78
0x004f39c3: lea    rdx,[rip+0x116d4a6]        # 0x141660e70 ; literal="right kicks"
0x004f39ca: jmp    0x1404f3a78
0x004f39cf: lea    rdx,[rip+0x116d4aa]        # 0x141660e80 ; literal="leg lifts"
0x004f39d6: jmp    0x1404f3a78
0x004f39db: lea    rdx,[rip+0x116d4ae]        # 0x141660e90 ; literal="left leg lifts"
0x004f39e2: jmp    0x1404f3a78
0x004f39e7: lea    rdx,[rip+0x116d4b2]        # 0x141660ea0 ; literal="right leg lifts"
0x004f39ee: jmp    0x1404f3a78
0x004f39f3: lea    rdx,[rip+0x116d4b6]        # 0x141660eb0 ; literal="body level"
0x004f39fa: jmp    0x1404f3a78
0x004f39fc: lea    rdx,[rip+0x116d4bd]        # 0x141660ec0 ; literal="body level changes"
0x004f3a03: jmp    0x1404f3a78
0x004f3a05: lea    rdx,[rip+0x116d4cc]        # 0x141660ed8 ; literal="arm carriage"
0x004f3a0c: jmp    0x1404f3a78
0x004f3a0e: lea    rdx,[rip+0x116d4d3]        # 0x141660ee8 ; literal="raised left arms"
0x004f3a15: jmp    0x1404f3a78
0x004f3a17: lea    rdx,[rip+0x116d4e2]        # 0x141660f00 ; literal="raised right arms"
0x004f3a1e: jmp    0x1404f3a78
0x004f3a20: lea    rdx,[rip+0x116d4f1]        # 0x141660f18 ; literal="raised arms"
0x004f3a27: jmp    0x1404f3a78
0x004f3a29: lea    rdx,[rip+0x116d4f4]        # 0x141660f24 ; literal="spins"
0x004f3a30: jmp    0x1404f3a78
0x004f3a32: lea    rdx,[rip+0x116d4f7]        # 0x141660f30 ; literal="independent body movement"
0x004f3a39: jmp    0x1404f3a78
0x004f3a3b: lea    rdx,[rip+0x116d50a]        # 0x141660f4c ; literal="sway"
0x004f3a42: jmp    0x1404f3a78
0x004f3a44: lea    rdx,[rip+0x116d50d]        # 0x141660f58 ; literal="forward bends"
0x004f3a4b: jmp    0x1404f3a78
0x004f3a4d: lea    rdx,[rip+0x116d514]        # 0x141660f68 ; literal="backward bends"
0x004f3a54: jmp    0x1404f3a78
0x004f3a56: lea    rdx,[rip+0x116d51b]        # 0x141660f78 ; literal="leftward bends"
0x004f3a5d: jmp    0x1404f3a78
0x004f3a5f: lea    rdx,[rip+0x116d522]        # 0x141660f88 ; literal="rightward bends"
0x004f3a66: jmp    0x1404f3a78
0x004f3a68: lea    rdx,[rip+0x116d529]        # 0x141660f98 ; literal="footwork"
0x004f3a6f: jmp    0x1404f3a78
0x004f3a71: lea    rdx,[rip+0x116d718]        # 0x141661190 ; literal="movement along the line of dance"
0x004f3a78: mov    rcx,rdi
0x004f3a7b: call   0x140070b20
0x004f3a80: mov    rax,QWORD PTR [r15+0x130]
0x004f3a87: mov    edx,DWORD PTR [rax+r14*4]
0x004f3a8b: mov    ecx,edx
0x004f3a8d: shr    ecx,0x2
0x004f3a90: and    ecx,0x1
0x004f3a93: test   dl,0x8
0x004f3a96: lea    eax,[rcx+0x1]
0x004f3a99: cmove  eax,ecx
0x004f3a9c: test   dl,0x10
0x004f3a9f: lea    ecx,[rax+0x1]
0x004f3aa2: cmove  ecx,eax
0x004f3aa5: test   dl,0x20
0x004f3aa8: lea    esi,[rcx+0x1]
0x004f3aab: cmove  esi,ecx
0x004f3aae: test   esi,esi
0x004f3ab0: je     0x1404f3b8f
0x004f3ab6: xor    edi,edi
0x004f3ab8: mov    r15,QWORD PTR [rbp+0xc0]
0x004f3abf: mov    r13,QWORD PTR [rsp+0x50]
0x004f3ac4: mov    ecx,edi
0x004f3ac6: test   edi,edi
0x004f3ac8: je     0x1404f3aee
0x004f3aca: sub    ecx,0x1
0x004f3acd: je     0x1404f3ae7
0x004f3acf: sub    ecx,0x1
0x004f3ad2: je     0x1404f3ae0
0x004f3ad4: cmp    ecx,0x1
0x004f3ad7: jne    0x1404f3af3
0x004f3ad9: mov    ebx,0x20
0x004f3ade: jmp    0x1404f3af3
0x004f3ae0: mov    ebx,0x10
0x004f3ae5: jmp    0x1404f3af3
0x004f3ae7: mov    ebx,0x8
0x004f3aec: jmp    0x1404f3af3
0x004f3aee: mov    ebx,0x4
0x004f3af3: mov    rax,QWORD PTR [r13+0x130]
0x004f3afa: test   DWORD PTR [rax+r14*4],ebx
0x004f3afe: je     0x1404f3b62
0x004f3b00: dec    esi
0x004f3b02: cmp    ebx,0x4
0x004f3b05: je     0x1404f3b31
0x004f3b07: cmp    ebx,0x8
0x004f3b0a: je     0x1404f3b28
0x004f3b0c: cmp    ebx,0x10
0x004f3b0f: je     0x1404f3b1f
0x004f3b11: cmp    ebx,0x20
0x004f3b14: jne    0x1404f3b40
0x004f3b16: lea    rdx,[rip+0x116c85b]        # 0x141660378 ; literal=" shadowed"
0x004f3b1d: jmp    0x1404f3b38
0x004f3b1f: lea    rdx,[rip+0x116c832]        # 0x141660358 ; literal=" performed in succession"
0x004f3b26: jmp    0x1404f3b38
0x004f3b28: lea    rdx,[rip+0x116cce1]        # 0x141660810 ; literal=" performed in retrograde"
0x004f3b2f: jmp    0x1404f3b38
0x004f3b31: lea    rdx,[rip+0x116ccc8]        # 0x141660800 ; literal=" mirrored"
0x004f3b38: mov    rcx,r15
0x004f3b3b: call   0x140070b20
0x004f3b40: cmp    esi,0x2
0x004f3b43: jl     0x1404f3b4e
0x004f3b45: lea    rdx,[rip+0x11206b8]        # 0x141614204 ; literal=","
0x004f3b4c: jmp    0x1404f3b5a
0x004f3b4e: cmp    esi,0x1
0x004f3b51: jne    0x1404f3b62
0x004f3b53: lea    rdx,[rip+0x1110f32]        # 0x141604a8c ; literal=" and"
0x004f3b5a: mov    rcx,r15
0x004f3b5d: call   0x140070b20
0x004f3b62: inc    edi
0x004f3b64: cmp    edi,0x4
0x004f3b67: jl     0x1404f3ac4
0x004f3b6d: mov    r8d,0x11
0x004f3b73: lea    rdx,[rip+0x116c80e]        # 0x141660388 ; literal=" by group members"
0x004f3b7a: mov    rdi,r15
0x004f3b7d: mov    rcx,r15
0x004f3b80: call   0x140070fd0
0x004f3b85: mov    r13d,DWORD PTR [rsp+0x48]
0x004f3b8a: mov    r15,QWORD PTR [rsp+0x50]
0x004f3b8f: mov    rax,QWORD PTR [r15+0x130]
0x004f3b96: mov    ecx,DWORD PTR [rax+r14*4]
0x004f3b9a: test   cl,0x40
0x004f3b9d: je     0x1404f3bb6
0x004f3b9f: mov    r8d,0xc
0x004f3ba5: lea    rdx,[rip+0x116d60c]        # 0x1416611b8 ; literal=" of the lead"
0x004f3bac: mov    rcx,rdi
0x004f3baf: call   0x140070fd0
0x004f3bb4: jmp    0x1404f3bc9
0x004f3bb6: test   cl,cl
0x004f3bb8: jns    0x1404f3bc9
0x004f3bba: lea    rdx,[rip+0x116d607]        # 0x1416611c8 ; literal=" of the follower"
0x004f3bc1: mov    rcx,rdi
0x004f3bc4: call   0x140070b20
0x004f3bc9: cmp    r12d,0x2
0x004f3bcd: jl     0x1404f3bde
0x004f3bcf: mov    r8d,0x2
0x004f3bd5: lea    rdx,[rip+0x110b72c]        # 0x1415ff308 ; literal=", "
0x004f3bdc: jmp    0x1404f3bf1
0x004f3bde: cmp    r12d,0x1
0x004f3be2: jne    0x1404f3bf9
0x004f3be4: mov    r8d,0x5
0x004f3bea: lea    rdx,[rip+0x110b74f]        # 0x1415ff340 ; literal=" and "
0x004f3bf1: mov    rcx,rdi
0x004f3bf4: call   0x140070fd0
0x004f3bf9: inc    r13d
0x004f3bfc: mov    DWORD PTR [rsp+0x48],r13d
0x004f3c01: inc    r14
0x004f3c04: mov    rdx,QWORD PTR [r15+0xe8]
0x004f3c0b: mov    rcx,QWORD PTR [r15+0xf0]
0x004f3c12: sub    rcx,rdx
0x004f3c15: sar    rcx,0x2
0x004f3c19: movsxd rax,r13d
0x004f3c1c: cmp    rax,rcx
0x004f3c1f: jb     0x1404f35d1
0x004f3c25: mov    r15,QWORD PTR [rbp-0x80]
0x004f3c29: mov    r12d,DWORD PTR [rsp+0x60]
0x004f3c2e: mov    r14d,DWORD PTR [rsp+0x5c]
0x004f3c33: mov    esi,DWORD PTR [rsp+0x34]
0x004f3c37: test   r14d,r14d
0x004f3c3a: jg     0x1404f3c44
0x004f3c3c: test   esi,esi
0x004f3c3e: jle    0x1404f3eac
0x004f3c44: test   r12d,r12d
0x004f3c47: jle    0x1404f3c5e
0x004f3c49: mov    r8d,0x7
0x004f3c4f: lea    rdx,[rip+0x116d58a]        # 0x1416611e0 ; literal=", with "
0x004f3c56: mov    rcx,rdi
0x004f3c59: call   0x140070fd0
0x004f3c5e: mov    r13,QWORD PTR [rsp+0x50]
0x004f3c63: test   r14d,r14d
0x004f3c66: jle    0x1404f3d19
0x004f3c6c: xor    edi,edi
0x004f3c6e: mov    rdx,QWORD PTR [r13+0xe8]
0x004f3c75: mov    rax,QWORD PTR [r13+0xf0]
0x004f3c7c: sub    rax,rdx
0x004f3c7f: sar    rax,0x2
0x004f3c83: test   rax,rax
0x004f3c86: je     0x1404f3cfd
0x004f3c88: xor    ebx,ebx
0x004f3c8a: mov    rsi,QWORD PTR [rbp+0xc0]
0x004f3c91: cmp    DWORD PTR [rdx+rbx*1],0x5
0x004f3c95: jne    0x1404f3cd6
0x004f3c97: mov    rax,QWORD PTR [r13+0x100]
0x004f3c9e: mov    ecx,DWORD PTR [rbx+rax*1]
0x004f3ca1: cmp    ecx,0xffffffff
0x004f3ca4: je     0x1404f3cd6
0x004f3ca6: sub    ecx,0xb
0x004f3ca9: je     0x1404f3cc7
0x004f3cab: sub    ecx,0xc
0x004f3cae: je     0x1404f3cbe
0x004f3cb0: cmp    ecx,0x1
0x004f3cb3: jne    0x1404f3cd6
0x004f3cb5: lea    rdx,[rip+0x116d544]        # 0x141661200 ; literal="partially realized "
0x004f3cbc: jmp    0x1404f3cce
0x004f3cbe: lea    rdx,[rip+0x116d52b]        # 0x1416611f0 ; literal="aborted "
0x004f3cc5: jmp    0x1404f3cce
0x004f3cc7: lea    rdx,[rip+0x116d51a]        # 0x1416611e8 ; literal="large "
0x004f3cce: mov    rcx,rsi
0x004f3cd1: call   0x140070b20
0x004f3cd6: inc    edi
0x004f3cd8: add    rbx,0x4
0x004f3cdc: mov    rdx,QWORD PTR [r13+0xe8]
0x004f3ce3: mov    rcx,QWORD PTR [r13+0xf0]
0x004f3cea: sub    rcx,rdx
0x004f3ced: sar    rcx,0x2
0x004f3cf1: movsxd rax,edi
0x004f3cf4: cmp    rax,rcx
0x004f3cf7: jb     0x1404f3c91
0x004f3cf9: mov    esi,DWORD PTR [rsp+0x34]
0x004f3cfd: mov    r8d,0x5
0x004f3d03: lea    rdx,[rip+0x116d50a]        # 0x141661214 ; literal="moves"
0x004f3d0a: mov    rdi,QWORD PTR [rbp+0xc0]
0x004f3d11: mov    rcx,rdi
0x004f3d14: call   0x140070fd0
0x004f3d19: test   esi,esi
0x004f3d1b: jle    0x1404f3eac
0x004f3d21: test   r14d,r14d
0x004f3d24: jle    0x1404f3d3b
0x004f3d26: mov    r8d,0x5
0x004f3d2c: lea    rdx,[rip+0x110b60d]        # 0x1415ff340 ; literal=" and "
0x004f3d33: mov    rcx,rdi
0x004f3d36: call   0x140070fd0
0x004f3d3b: mov    r8d,0x9
0x004f3d41: lea    rdx,[rip+0x116d4d8]        # 0x141661220 ; literal="movement "
0x004f3d48: mov    rcx,rdi
0x004f3d4b: call   0x140070fd0
0x004f3d50: xor    r14d,r14d
0x004f3d53: xor    edx,edx
0x004f3d55: mov    r9,QWORD PTR [r13+0xe8]
0x004f3d5c: mov    r8,QWORD PTR [r13+0xf0]
0x004f3d63: sub    r8,r9
0x004f3d66: sar    r8,0x2
0x004f3d6a: test   r8,r8
0x004f3d6d: je     0x1404f3d91
0x004f3d6f: xor    ecx,ecx
0x004f3d71: cmp    DWORD PTR [r9+rcx*1],0x5
0x004f3d76: jne    0x1404f3d83
0x004f3d78: mov    rax,QWORD PTR [r13+0x130]
0x004f3d7f: or     r14d,DWORD PTR [rcx+rax*1]
0x004f3d83: inc    edx
0x004f3d85: add    rcx,0x4
0x004f3d89: movsxd rax,edx
0x004f3d8c: cmp    rax,r8
0x004f3d8f: jb     0x1404f3d71
0x004f3d91: mov    ecx,r14d
0x004f3d94: shr    ecx,0x2
0x004f3d97: and    ecx,0x1
0x004f3d9a: test   r14b,0x8
0x004f3d9e: lea    eax,[rcx+0x1]
0x004f3da1: cmove  eax,ecx
0x004f3da4: test   r14b,0x10
0x004f3da8: lea    ecx,[rax+0x1]
0x004f3dab: cmove  ecx,eax
0x004f3dae: test   r14b,0x20
0x004f3db2: lea    esi,[rcx+0x1]
0x004f3db5: cmove  esi,ecx
0x004f3db8: test   esi,esi
0x004f3dba: je     0x1404f3eac
0x004f3dc0: xor    edi,edi
0x004f3dc2: mov    ebx,DWORD PTR [rbp+0xc0]
0x004f3dc8: mov    r15,QWORD PTR [rbp+0xc0]
0x004f3dcf: nop
0x004f3dd0: mov    ecx,edi
0x004f3dd2: test   edi,edi
0x004f3dd4: je     0x1404f3dfa
0x004f3dd6: sub    ecx,0x1
0x004f3dd9: je     0x1404f3df3
0x004f3ddb: sub    ecx,0x1
0x004f3dde: je     0x1404f3dec
0x004f3de0: cmp    ecx,0x1
0x004f3de3: jne    0x1404f3dff
0x004f3de5: mov    ebx,0x20
0x004f3dea: jmp    0x1404f3dff
0x004f3dec: mov    ebx,0x10
0x004f3df1: jmp    0x1404f3dff
0x004f3df3: mov    ebx,0x8
0x004f3df8: jmp    0x1404f3dff
0x004f3dfa: mov    ebx,0x4
0x004f3dff: test   r14d,ebx
0x004f3e02: je     0x1404f3e88
0x004f3e08: dec    esi
0x004f3e0a: cmp    ebx,0x4
0x004f3e0d: je     0x1404f3e45
0x004f3e0f: cmp    ebx,0x8
0x004f3e12: je     0x1404f3e36
0x004f3e14: cmp    ebx,0x10
0x004f3e17: je     0x1404f3e27
0x004f3e19: cmp    ebx,0x20
0x004f3e1c: jne    0x1404f3e5a
0x004f3e1e: lea    rdx,[rip+0x116d44b]        # 0x141661270 ; literal="shadowed"
0x004f3e25: jmp    0x1404f3e4c
0x004f3e27: mov    r8d,0x17
0x004f3e2d: lea    rdx,[rip+0x116d424]        # 0x141661258 ; literal="performed in succession"
0x004f3e34: jmp    0x1404f3e52
0x004f3e36: mov    r8d,0x17
0x004f3e3c: lea    rdx,[rip+0x116d3fd]        # 0x141661240 ; literal="performed in retrograde"
0x004f3e43: jmp    0x1404f3e52
0x004f3e45: lea    rdx,[rip+0x116d3e4]        # 0x141661230 ; literal="mirrored"
0x004f3e4c: mov    r8d,0x8
0x004f3e52: mov    rcx,r15
0x004f3e55: call   0x140070fd0
0x004f3e5a: cmp    esi,0x2
0x004f3e5d: jl     0x1404f3e6e
0x004f3e5f: mov    r8d,0x2
0x004f3e65: lea    rdx,[rip+0x110b49c]        # 0x1415ff308 ; literal=", "
0x004f3e6c: jmp    0x1404f3e80
0x004f3e6e: cmp    esi,0x1
0x004f3e71: jne    0x1404f3e88
0x004f3e73: mov    r8d,0x5
0x004f3e79: lea    rdx,[rip+0x110b4c0]        # 0x1415ff340 ; literal=" and "
0x004f3e80: mov    rcx,r15
0x004f3e83: call   0x140070fd0
0x004f3e88: inc    edi
0x004f3e8a: cmp    edi,0x4
0x004f3e8d: jl     0x1404f3dd0
0x004f3e93: mov    r8d,0x11
0x004f3e99: lea    rdx,[rip+0x116c4e8]        # 0x141660388 ; literal=" by group members"
0x004f3ea0: mov    rcx,r15
0x004f3ea3: call   0x140070fd0
0x004f3ea8: mov    r15,QWORD PTR [rbp-0x80]
0x004f3eac: mov    r8d,0x3
0x004f3eb2: lea    rdx,[rip+0x11207c7]        # 0x141614680 ; literal=".  "
0x004f3eb9: mov    r13,QWORD PTR [rbp+0xc0]
0x004f3ec0: mov    rcx,r13
0x004f3ec3: call   0x140070fd0
0x004f3ec8: mov    r12,QWORD PTR [rsp+0x50]
0x004f3ecd: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f3ed4: jmp    0x1404f3ee0
0x004f3ed6: mov    r13,QWORD PTR [rbp+0xc0]
0x004f3edd: mov    r12,r11
0x004f3ee0: mov    rsi,QWORD PTR [rbp-0x60]
0x004f3ee4: mov    rdx,QWORD PTR [rbp-0x78]
0x004f3ee8: xor    r14d,r14d
0x004f3eeb: mov    ecx,0xffffffff
0x004f3ef0: mov    rax,QWORD PTR [r12+0x150]
0x004f3ef8: sub    rax,QWORD PTR [r12+0x148]
0x004f3f00: sar    rax,0x3
0x004f3f04: test   rax,rax
0x004f3f07: je     0x1404f5de0
0x004f3f0d: mov    r10d,r14d
0x004f3f10: mov    DWORD PTR [rsp+0x68],r14d
0x004f3f15: mov    DWORD PTR [rbp-0x68],r14d
0x004f3f19: mov    DWORD PTR [rsp+0x5c],r14d
0x004f3f1e: mov    DWORD PTR [rsp+0x60],r14d
0x004f3f23: mov    DWORD PTR [rsp+0x48],r14d
0x004f3f28: mov    r9d,ecx
0x004f3f2b: mov    DWORD PTR [rsp+0x58],ecx
0x004f3f2f: mov    ebx,ecx
0x004f3f31: mov    DWORD PTR [rsp+0x34],ecx
0x004f3f35: test   rsi,rsi
0x004f3f38: je     0x1404f3f94
0x004f3f3a: mov    r8d,r14d
0x004f3f3d: mov    rax,QWORD PTR [rsi+0x88]
0x004f3f44: mov    rcx,QWORD PTR [rsi+0x90]
0x004f3f4b: nop    DWORD PTR [rax+rax*1+0x0]
0x004f3f50: cmp    rax,rcx
0x004f3f53: jae    0x1404f3f82
0x004f3f55: mov    rdx,QWORD PTR [rax]
0x004f3f58: cmp    DWORD PTR [rdx],0xa
0x004f3f5b: jne    0x1404f3f79
0x004f3f5d: inc    r10d
0x004f3f60: cmp    r9d,0xffffffff
0x004f3f64: jne    0x1404f3f72
0x004f3f66: mov    r9d,r8d
0x004f3f69: add    rax,0x8
0x004f3f6d: inc    r8d
0x004f3f70: jmp    0x1404f3f50
0x004f3f72: cmp    ebx,0xffffffff
0x004f3f75: cmove  ebx,r8d
0x004f3f79: add    rax,0x8
0x004f3f7d: inc    r8d
0x004f3f80: jmp    0x1404f3f50
0x004f3f82: mov    DWORD PTR [rsp+0x68],r10d
0x004f3f87: mov    DWORD PTR [rsp+0x58],r9d
0x004f3f8c: mov    DWORD PTR [rsp+0x34],ebx
0x004f3f90: mov    rdx,QWORD PTR [rbp-0x78]
0x004f3f94: mov    DWORD PTR [rsp+0x78],r14d
0x004f3f99: mov    rsi,QWORD PTR [r12+0x148]
0x004f3fa1: mov    r14,QWORD PTR [r12+0x150]
0x004f3fa9: mov    QWORD PTR [rsp+0x40],r14
0x004f3fae: mov    rax,rdx
0x004f3fb1: sub    rax,r15
0x004f3fb4: sar    rax,0x3
0x004f3fb8: mov    QWORD PTR [rbp-0x40],rax
0x004f3fbc: mov    rax,rdi
0x004f3fbf: sub    rax,QWORD PTR [rbp+0xa0]
0x004f3fc6: sar    rax,0x3
0x004f3fca: mov    QWORD PTR [rbp-0x38],rax
0x004f3fce: xchg   ax,ax
0x004f3fd0: cmp    rsi,r14
0x004f3fd3: jae    0x1404f5ddc
0x004f3fd9: mov    r9,QWORD PTR [rsi]
0x004f3fdc: mov    r10,QWORD PTR [r9+0x58]
0x004f3fe0: sub    r10,QWORD PTR [r9+0x50]
0x004f3fe4: sar    r10,0x2
0x004f3fe8: mov    r8,QWORD PTR [r9+0x30]
0x004f3fec: sub    r8,QWORD PTR [r9+0x28]
0x004f3ff0: sar    r8,0x2
0x004f3ff4: cmp    DWORD PTR [r9+0x10],0xffffffff
0x004f3ff9: sete   al
0x004f3ffc: xor    edi,edi
0x004f3ffe: mov    edx,edi
0x004f4000: movzx  ecx,al
0x004f4003: cmp    DWORD PTR [r9+0x18],0xffffffff
0x004f4008: cmove  edx,ecx
0x004f400b: mov    ecx,edi
0x004f400d: movzx  eax,dl
0x004f4010: test   r8,r8
0x004f4013: cmove  ecx,eax
0x004f4016: mov    edx,edi
0x004f4018: movzx  eax,cl
0x004f401b: cmp    DWORD PTR [r9+0x14],0xffffffff
0x004f4020: cmove  edx,eax
0x004f4023: mov    r8d,edi
0x004f4026: movzx  eax,dl
0x004f4029: test   r10,r10
0x004f402c: cmove  r8d,eax
0x004f4030: mov    ecx,edi
0x004f4032: movzx  eax,r8b
0x004f4036: cmp    DWORD PTR [r9+0x4c],0xffffffff
0x004f403b: cmove  ecx,eax
0x004f403e: test   cl,cl
0x004f4040: jne    0x1404f5dc3
0x004f4046: mov    r8d,0x3
0x004f404c: lea    rdx,[rip+0x1120059]        # 0x1416140ac ; literal="[B]"
0x004f4053: mov    rcx,r13
0x004f4056: call   0x140070fd0
0x004f405b: mov    rdx,QWORD PTR [rbp-0x60]
0x004f405f: test   rdx,rdx
0x004f4062: je     0x1404f43d0
0x004f4068: mov    rax,QWORD PTR [rsi]
0x004f406b: movsxd rcx,DWORD PTR [rax+0xb0]
0x004f4072: cmp    ecx,0xffffffff
0x004f4075: je     0x1404f43d0
0x004f407b: mov    rax,QWORD PTR [rdx+0x88]
0x004f4082: mov    rdi,QWORD PTR [rax+rcx*8]
0x004f4086: mov    rcx,r13
0x004f4089: cmp    DWORD PTR [rsp+0x78],0x0
0x004f408e: jne    0x1404f409f
0x004f4090: mov    r8d,0x1a
0x004f4096: lea    rdx,[rip+0x116d1e3]        # 0x141661280 ; literal="The dance begins with the "
0x004f409d: jmp    0x1404f40ac
0x004f409f: mov    r8d,0x28
0x004f40a5: lea    rdx,[rip+0x116d1f4]        # 0x1416612a0 ; literal="The dance enters a new section with the "
0x004f40ac: call   0x140070fd0
0x004f40b1: cmp    DWORD PTR [rdi],0x0
0x004f40b4: jne    0x1404f40d1
0x004f40b6: cmp    DWORD PTR [rbp-0x68],0x1
0x004f40ba: jl     0x1404f40d1
0x004f40bc: mov    r8d,0x5
0x004f40c2: lea    rdx,[rip+0x116d203]        # 0x1416612cc ; literal="next "
0x004f40c9: mov    rcx,r13
0x004f40cc: call   0x140070fd0
0x004f40d1: cmp    DWORD PTR [rdi],0x5
0x004f40d4: jne    0x1404f40f2
0x004f40d6: cmp    DWORD PTR [rsp+0x5c],0x1
0x004f40db: jl     0x1404f40f2
0x004f40dd: mov    r8d,0x5
0x004f40e3: lea    rdx,[rip+0x116d1e2]        # 0x1416612cc ; literal="next "
0x004f40ea: mov    rcx,r13
0x004f40ed: call   0x140070fd0
0x004f40f2: cmp    DWORD PTR [rdi],0x6
0x004f40f5: jne    0x1404f4113
0x004f40f7: cmp    DWORD PTR [rsp+0x60],0x1
0x004f40fc: jl     0x1404f4113
0x004f40fe: mov    r8d,0x5
0x004f4104: lea    rdx,[rip+0x116d1c1]        # 0x1416612cc ; literal="next "
0x004f410b: mov    rcx,r13
0x004f410e: call   0x140070fd0
0x004f4113: cmp    DWORD PTR [rdi],0x9
0x004f4116: jne    0x1404f4134
0x004f4118: cmp    DWORD PTR [rsp+0x48],0x1
0x004f411d: jl     0x1404f4134
0x004f411f: mov    r8d,0x5
0x004f4125: lea    rdx,[rip+0x116d1a0]        # 0x1416612cc ; literal="next "
0x004f412c: mov    rcx,r13
0x004f412f: call   0x140070fd0
0x004f4134: movsxd rax,DWORD PTR [rdi]
0x004f4137: cmp    eax,0xb
0x004f413a: ja     0x1404f43b6
0x004f4140: lea    rdx,[rip+0xffffffffffb0beb9]        # 0x140000000
0x004f4147: mov    ecx,DWORD PTR [rdx+rax*4+0x4f6190]
0x004f414e: add    rcx,rdx
0x004f4151: jmp    rcx
0x004f4153: mov    r8d,0x7
0x004f4159: lea    rdx,[rip+0x116d178]        # 0x1416612d8 ; literal="passage"
0x004f4160: mov    rcx,r13
0x004f4163: call   0x140070fd0
0x004f4168: cmp    DWORD PTR [rdi+0x10],0x2
0x004f416c: jl     0x1404f417d
0x004f416e: lea    rdx,[rip+0x110b353]        # 0x1415ff4c8 ; literal="s"
0x004f4175: mov    rcx,r13
0x004f4178: call   0x140070b20
0x004f417d: inc    DWORD PTR [rbp-0x68]
0x004f4180: jmp    0x1404f43b6
0x004f4185: mov    r8d,0xc
0x004f418b: lea    rdx,[rip+0x116d14e]        # 0x1416612e0 ; literal="introduction"
0x004f4192: mov    rcx,r13
0x004f4195: call   0x140070fd0
0x004f419a: jmp    0x1404f43b6
0x004f419f: mov    r8d,0xa
0x004f41a5: lea    rdx,[rip+0x116d144]        # 0x1416612f0 ; literal="exposition"
0x004f41ac: mov    rcx,r13
0x004f41af: call   0x140070fd0
0x004f41b4: mov    eax,DWORD PTR [rdi+0x4]
0x004f41b7: cmp    eax,DWORD PTR [rsp+0x58]
0x004f41bb: jne    0x1404f41df
0x004f41bd: mov    rcx,r13
0x004f41c0: cmp    DWORD PTR [rsp+0x68],0x1
0x004f41c5: jne    0x1404f41d3
0x004f41c7: lea    rdx,[rip+0x110afca]        # 0x1415ff198 ; literal=" of the theme"
0x004f41ce: jmp    0x1404f43b1
0x004f41d3: lea    rdx,[rip+0x110aff6]        # 0x1415ff1d0 ; literal=" of the first theme"
0x004f41da: jmp    0x1404f43b1
0x004f41df: cmp    eax,ebx
0x004f41e1: jne    0x1404f43b6
0x004f41e7: lea    rdx,[rip+0x110afca]        # 0x1415ff1b8 ; literal=" of the second theme"
0x004f41ee: jmp    0x1404f43ae
0x004f41f3: mov    r8d,0xe
0x004f41f9: lea    rdx,[rip+0x116d100]        # 0x141661300 ; literal="recapitulation"
0x004f4200: mov    rcx,r13
0x004f4203: call   0x140070fd0
0x004f4208: mov    eax,DWORD PTR [rdi+0x4]
0x004f420b: cmp    eax,DWORD PTR [rsp+0x58]
0x004f420f: jne    0x1404f41df
0x004f4211: mov    rcx,r13
0x004f4214: cmp    DWORD PTR [rsp+0x68],0x1
0x004f4219: jne    0x1404f41d3
0x004f421b: lea    rdx,[rip+0x110af76]        # 0x1415ff198 ; literal=" of the theme"
0x004f4222: jmp    0x1404f43b1
0x004f4227: mov    r8d,0x9
0x004f422d: lea    rdx,[rip+0x116d0dc]        # 0x141661310 ; literal="synthesis"
0x004f4234: mov    rcx,r13
0x004f4237: call   0x140070fd0
0x004f423c: mov    eax,DWORD PTR [rdi+0x4]
0x004f423f: cmp    eax,DWORD PTR [rsp+0x58]
0x004f4243: jne    0x1404f43b6
0x004f4249: cmp    eax,ebx
0x004f424b: jne    0x1404f43b6
0x004f4251: lea    rdx,[rip+0x110afc8]        # 0x1415ff220 ; literal=" of the two themes"
0x004f4258: jmp    0x1404f43ae
0x004f425d: mov    r8d,0x5
0x004f4263: lea    rdx,[rip+0x116d0b2]        # 0x14166131c ; literal="verse"
0x004f426a: mov    rcx,r13
0x004f426d: call   0x140070fd0
0x004f4272: cmp    DWORD PTR [rdi+0x10],0x2
0x004f4276: jl     0x1404f4287
0x004f4278: lea    rdx,[rip+0x110b249]        # 0x1415ff4c8 ; literal="s"
0x004f427f: mov    rcx,r13
0x004f4282: call   0x140070b20
0x004f4287: inc    DWORD PTR [rsp+0x5c]
0x004f428b: jmp    0x1404f43b6
0x004f4290: mov    r8d,0x6
0x004f4296: lea    rdx,[rip+0x116d087]        # 0x141661324 ; literal="chorus"
0x004f429d: mov    rcx,r13
0x004f42a0: call   0x140070fd0
0x004f42a5: inc    DWORD PTR [rsp+0x60]
0x004f42a9: jmp    0x1404f43b6
0x004f42ae: mov    r8d,0x6
0x004f42b4: lea    rdx,[rip+0x116d071]        # 0x14166132c ; literal="finale"
0x004f42bb: mov    rcx,r13
0x004f42be: call   0x140070fd0
0x004f42c3: jmp    0x1404f43b6
0x004f42c8: mov    r8d,0x4
0x004f42ce: lea    rdx,[rip+0x116d05f]        # 0x141661334 ; literal="coda"
0x004f42d5: mov    rcx,r13
0x004f42d8: call   0x140070fd0
0x004f42dd: jmp    0x1404f43b6
0x004f42e2: mov    r8d,0xe
0x004f42e8: lea    rdx,[rip+0x116d051]        # 0x141661340 ; literal="bridge-passage"
0x004f42ef: mov    rcx,r13
0x004f42f2: call   0x140070fd0
0x004f42f7: cmp    DWORD PTR [rdi+0x10],0x2
0x004f42fb: jl     0x1404f430c
0x004f42fd: lea    rdx,[rip+0x110b1c4]        # 0x1415ff4c8 ; literal="s"
0x004f4304: mov    rcx,r13
0x004f4307: call   0x140070b20
0x004f430c: inc    DWORD PTR [rsp+0x48]
0x004f4310: jmp    0x1404f43b6
0x004f4315: cmp    ebx,0xffffffff
0x004f4318: je     0x1404f4345
0x004f431a: mov    rax,QWORD PTR [rsi]
0x004f431d: mov    ecx,DWORD PTR [rax+0xb0]
0x004f4323: cmp    ecx,DWORD PTR [rsp+0x58]
0x004f4327: jne    0x1404f4332
0x004f4329: lea    rdx,[rip+0x110af88]        # 0x1415ff2b8 ; literal="first "
0x004f4330: jmp    0x1404f433d
0x004f4332: cmp    ecx,ebx
0x004f4334: jne    0x1404f4345
0x004f4336: lea    rdx,[rip+0x110af73]        # 0x1415ff2b0 ; literal="second "
0x004f433d: mov    rcx,r13
0x004f4340: call   0x140070b20
0x004f4345: mov    r8d,0x5
0x004f434b: lea    rdx,[rip+0x110af86]        # 0x1415ff2d8 ; literal="theme"
0x004f4352: mov    rcx,r13
0x004f4355: call   0x140070fd0
0x004f435a: cmp    DWORD PTR [rdi+0x10],0x2
0x004f435e: jl     0x1404f43b6
0x004f4360: lea    rdx,[rip+0x110b161]        # 0x1415ff4c8 ; literal="s"
0x004f4367: jmp    0x1404f43ae
0x004f4369: mov    r8d,0xa
0x004f436f: lea    rdx,[rip+0x116cfda]        # 0x141661350 ; literal="variations"
0x004f4376: mov    rcx,r13
0x004f4379: call   0x140070fd0
0x004f437e: mov    eax,DWORD PTR [rdi+0x4]
0x004f4381: cmp    eax,DWORD PTR [rsp+0x58]
0x004f4385: jne    0x1404f43a3
0x004f4387: mov    rcx,r13
0x004f438a: cmp    DWORD PTR [rsp+0x68],0x1
0x004f438f: jne    0x1404f439a
0x004f4391: lea    rdx,[rip+0x110af60]        # 0x1415ff2f8 ; literal=" on the theme"
0x004f4398: jmp    0x1404f43b1
0x004f439a: lea    rdx,[rip+0x110af3f]        # 0x1415ff2e0 ; literal=" on the first theme"
0x004f43a1: jmp    0x1404f43b1
0x004f43a3: cmp    eax,ebx
0x004f43a5: jne    0x1404f43b6
0x004f43a7: lea    rdx,[rip+0x110af62]        # 0x1415ff310 ; literal=" on the second theme"
0x004f43ae: mov    rcx,r13
0x004f43b1: call   0x140070b20
0x004f43b6: mov    r8d,0x10
0x004f43bc: lea    rdx,[rip+0x116cf9d]        # 0x141661360 ; literal=" of the music.  "
0x004f43c3: mov    rcx,r13
0x004f43c6: call   0x140070fd0
0x004f43cb: jmp    0x1404f4471
0x004f43d0: xorps  xmm0,xmm0
0x004f43d3: movups XMMWORD PTR [rbp+0xc0],xmm0
0x004f43da: mov    QWORD PTR [rbp+0xd0],rdi
0x004f43e1: mov    QWORD PTR [rbp+0xd8],0xf
0x004f43ec: mov    BYTE PTR [rbp+0xc0],dil
0x004f43f3: mov    ecx,DWORD PTR [rsp+0x78]
0x004f43f7: inc    ecx
0x004f43f9: xor    r8d,r8d
0x004f43fc: lea    rdx,[rbp+0xc0]
0x004f4403: call   0x140545850
0x004f4408: lea    rcx,[rbp+0xc0]
0x004f440f: call   0x140543d60
0x004f4414: mov    r8d,0x4
0x004f441a: lea    rdx,[rip+0x110f813]        # 0x141603c34 ; literal="The "
0x004f4421: mov    rcx,r13
0x004f4424: call   0x140070fd0
0x004f4429: lea    rdx,[rbp+0xc0]
0x004f4430: cmp    QWORD PTR [rbp+0xd8],0xf
0x004f4438: cmova  rdx,QWORD PTR [rbp+0xc0]
0x004f4440: mov    r8,QWORD PTR [rbp+0xd0]
0x004f4447: mov    rcx,r13
0x004f444a: call   0x140070fd0
0x004f444f: mov    r8d,0x17
0x004f4455: lea    rdx,[rip+0x116cf1c]        # 0x141661378 ; literal=" section is distinct.  "
0x004f445c: mov    rcx,r13
0x004f445f: call   0x140070fd0
0x004f4464: nop
0x004f4465: lea    rcx,[rbp+0xc0]
0x004f446c: call   0x140070e10
0x004f4471: mov    rax,QWORD PTR [rsi]
0x004f4474: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f4478: jne    0x1404f44b3
0x004f447a: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f447e: jne    0x1404f44b3
0x004f4480: test   rdi,rdi
0x004f4483: je     0x1404f47ae
0x004f4489: cmp    DWORD PTR [rdi+0x24],0xffffffff
0x004f448d: jne    0x1404f44a6
0x004f448f: mov    ecx,DWORD PTR [rdi+0xa8]
0x004f4495: lea    eax,[rcx+0x1]
0x004f4498: cmp    eax,0x1
0x004f449b: jbe    0x1404f44a2
0x004f449d: cmp    ecx,0x4
0x004f44a0: jne    0x1404f44a6
0x004f44a2: xor    eax,eax
0x004f44a4: jmp    0x1404f44ab
0x004f44a6: mov    eax,0x1
0x004f44ab: test   eax,eax
0x004f44ad: je     0x1404f47ae
0x004f44b3: mov    r8d,0x14
0x004f44b9: mov    rcx,r13
0x004f44bc: cmp    DWORD PTR [r12+0x98],0x0
0x004f44c5: lea    rdx,[rip+0x116c11c]        # 0x1416605e8 ; literal="The dancer performs "
0x004f44cc: je     0x1404f44d5
0x004f44ce: lea    rdx,[rip+0x116c653]        # 0x141660b28 ; literal="The dancers perform "
0x004f44d5: call   0x140070fd0
0x004f44da: mov    rcx,QWORD PTR [rsi]
0x004f44dd: mov    edx,DWORD PTR [rcx+0xc]
0x004f44e0: test   edx,edx
0x004f44e2: je     0x1404f452e
0x004f44e4: sub    edx,0x1
0x004f44e7: je     0x1404f4525
0x004f44e9: sub    edx,0x1
0x004f44ec: je     0x1404f4516
0x004f44ee: sub    edx,0x1
0x004f44f1: je     0x1404f4507
0x004f44f3: cmp    edx,0x1
0x004f44f6: jne    0x1404f4543
0x004f44f8: mov    r8d,0xf
0x004f44fe: lea    rdx,[rip+0x116c693]        # 0x141660b98 ; literal="loosely mingled"
0x004f4505: jmp    0x1404f453b
0x004f4507: mov    r8d,0x12
0x004f450d: lea    rdx,[rip+0x116c66c]        # 0x141660b80 ; literal="in a double circle"
0x004f4514: jmp    0x1404f453b
0x004f4516: mov    r8d,0xb
0x004f451c: lea    rdx,[rip+0x116c64d]        # 0x141660b70 ; literal="in a circle"
0x004f4523: jmp    0x1404f453b
0x004f4525: lea    rdx,[rip+0x116c62c]        # 0x141660b58 ; literal="in several lines"
0x004f452c: jmp    0x1404f4535
0x004f452e: lea    rdx,[rip+0x116c60b]        # 0x141660b40 ; literal="in a single line"
0x004f4535: mov    r8d,0x10
0x004f453b: mov    rcx,r13
0x004f453e: call   0x140070fd0
0x004f4543: mov    rax,QWORD PTR [rsi]
0x004f4546: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f454a: je     0x1404f45fd
0x004f4550: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f4554: je     0x1404f456b
0x004f4556: mov    r8d,0x1
0x004f455c: lea    rdx,[rip+0x110a409]        # 0x1415fe96c ; literal=" "
0x004f4563: mov    rcx,r13
0x004f4566: call   0x140070fd0
0x004f456b: mov    rcx,QWORD PTR [rsi]
0x004f456e: mov    edx,DWORD PTR [rcx+0x10]
0x004f4571: test   edx,edx
0x004f4573: je     0x1404f45ce
0x004f4575: sub    edx,0x1
0x004f4578: je     0x1404f45a2
0x004f457a: sub    edx,0x1
0x004f457d: je     0x1404f4593
0x004f457f: cmp    edx,0x1
0x004f4582: jne    0x1404f45fd
0x004f4584: mov    r8d,0x17
0x004f458a: lea    rdx,[rip+0x116c6af]        # 0x141660c40 ; literal="along an intricate path"
0x004f4591: jmp    0x1404f45f5
0x004f4593: mov    r8d,0x18
0x004f4599: lea    rdx,[rip+0x116c680]        # 0x141660c20 ; literal="along an improvised path"
0x004f45a0: jmp    0x1404f45f5
0x004f45a2: mov    rcx,r13
0x004f45a5: cmp    DWORD PTR [r12+0x98],0x0
0x004f45ae: jne    0x1404f45bf
0x004f45b0: mov    r8d,0x1f
0x004f45b6: lea    rdx,[rip+0x116c623]        # 0x141660be0 ; literal="along a counterclockwise circle"
0x004f45bd: jmp    0x1404f45f8
0x004f45bf: mov    r8d,0x18
0x004f45c5: lea    rdx,[rip+0x116c634]        # 0x141660c00 ; literal="turning counterclockwise"
0x004f45cc: jmp    0x1404f45f8
0x004f45ce: cmp    DWORD PTR [r12+0x98],0x0
0x004f45d7: jne    0x1404f45e8
0x004f45d9: mov    r8d,0x18
0x004f45df: lea    rdx,[rip+0x116c5c2]        # 0x141660ba8 ; literal="along a clockwise circle"
0x004f45e6: jmp    0x1404f45f5
0x004f45e8: mov    r8d,0x11
0x004f45ee: lea    rdx,[rip+0x116c5d3]        # 0x141660bc8 ; literal="turning clockwise"
0x004f45f5: mov    rcx,r13
0x004f45f8: call   0x140070fd0
0x004f45fd: test   rdi,rdi
0x004f4600: je     0x1404f4799
0x004f4606: cmp    DWORD PTR [rdi+0x24],0xffffffff
0x004f460a: jne    0x1404f4623
0x004f460c: mov    ecx,DWORD PTR [rdi+0xa8]
0x004f4612: lea    eax,[rcx+0x1]
0x004f4615: cmp    eax,0x1
0x004f4618: jbe    0x1404f461f
0x004f461a: cmp    ecx,0x4
0x004f461d: jne    0x1404f4623
0x004f461f: xor    eax,eax
0x004f4621: jmp    0x1404f4628
0x004f4623: mov    eax,0x1
0x004f4628: test   eax,eax
0x004f462a: je     0x1404f4799
0x004f4630: mov    rax,QWORD PTR [rsi]
0x004f4633: cmp    DWORD PTR [rax+0xc],0xffffffff
0x004f4637: jne    0x1404f463f
0x004f4639: cmp    DWORD PTR [rax+0x10],0xffffffff
0x004f463d: je     0x1404f4654
0x004f463f: mov    r8d,0x9
0x004f4645: lea    rdx,[rip+0x116c60c]        # 0x141660c58 ; literal=", moving "
0x004f464c: mov    rcx,r13
0x004f464f: call   0x140070fd0
0x004f4654: mov    eax,DWORD PTR [rdi+0xa8]
0x004f465a: dec    eax
0x004f465c: cmp    eax,0x20
0x004f465f: ja     0x1404f46de
0x004f4661: cdqe
0x004f4663: lea    rdx,[rip+0xffffffffffb0b996]        # 0x140000000
0x004f466a: movzx  eax,BYTE PTR [rdx+rax*1+0x4f61dc]
0x004f4672: mov    ecx,DWORD PTR [rdx+rax*4+0x4f61c0]
0x004f4679: add    rcx,rdx
0x004f467c: jmp    rcx
0x004f467e: mov    r8d,0xc
0x004f4684: lea    rdx,[rip+0x116c5dd]        # 0x141660c68 ; literal="very slowly "
0x004f468b: jmp    0x1404f46d6
0x004f468d: mov    r8d,0x7
0x004f4693: lea    rdx,[rip+0x116c5de]        # 0x141660c78 ; literal="slowly "
0x004f469a: jmp    0x1404f46d6
0x004f469c: mov    r8d,0x12
0x004f46a2: lea    rdx,[rip+0x116c5d7]        # 0x141660c80 ; literal="slower and slower "
0x004f46a9: jmp    0x1404f46d6
0x004f46ab: mov    r8d,0x12
0x004f46b1: lea    rdx,[rip+0x116c5e0]        # 0x141660c98 ; literal="faster and faster "
0x004f46b8: jmp    0x1404f46d6
0x004f46ba: mov    r8d,0x8
0x004f46c0: lea    rdx,[rip+0x116c5e9]        # 0x141660cb0 ; literal="quickly "
0x004f46c7: jmp    0x1404f46d6
0x004f46c9: mov    r8d,0xd
0x004f46cf: lea    rdx,[rip+0x116c5ea]        # 0x141660cc0 ; literal="very quickly "
0x004f46d6: mov    rcx,r13
0x004f46d9: call   0x140070fd0
0x004f46de: mov    r11d,DWORD PTR [rdi+0x24]
0x004f46e2: mov    r9,QWORD PTR [rip+0x200fc27]        # 0x142504310
0x004f46e9: mov    rbx,QWORD PTR [rip+0x200fc18]        # 0x142504308
0x004f46f0: sub    r9,rbx
0x004f46f3: sar    r9,0x3
0x004f46f7: test   r9d,r9d
0x004f46fa: je     0x1404f4768
0x004f46fc: xor    r10d,r10d
0x004f46ff: cmp    r9d,0x40
0x004f4703: jle    0x1404f4734
0x004f4705: data16 data16 nop WORD PTR [rax+rax*1+0x0]
0x004f4710: mov    r8d,r9d
0x004f4713: shr    r8d,1
0x004f4716: lea    edx,[r8+r10*1]
0x004f471a: movsxd rax,edx
0x004f471d: mov    rcx,QWORD PTR [rbx+rax*8]
0x004f4721: cmp    r11d,DWORD PTR [rcx]
0x004f4724: cmovl  edx,r10d
0x004f4728: mov    r10d,edx
0x004f472b: sub    r9d,r8d
0x004f472e: cmp    r9d,0x40
0x004f4732: jg     0x1404f4710
0x004f4734: lea    eax,[r10+r9*1]
0x004f4738: cmp    eax,0xffffffff
0x004f473b: je     0x1404f4768
0x004f473d: cmp    r10d,eax
0x004f4740: jge    0x1404f4768
0x004f4742: movsxd rcx,r10d
0x004f4745: movsxd rdx,eax
0x004f4748: nop    DWORD PTR [rax+rax*1+0x0]
0x004f4750: mov    rax,QWORD PTR [rbx+rcx*8]
0x004f4754: cmp    r11d,DWORD PTR [rax]
0x004f4757: je     0x1404f4802
0x004f475d: inc    r10d
0x004f4760: inc    rcx
0x004f4763: cmp    rcx,rdx
0x004f4766: jl     0x1404f4750
0x004f4768: mov    eax,0xffffffff
0x004f476d: mov    QWORD PTR [rbp-0x48],0x0
0x004f4775: mov    DWORD PTR [rbp-0x50],eax
0x004f4778: movaps xmm0,XMMWORD PTR [rbp-0x50]
0x004f477c: movdqa XMMWORD PTR [rbp+0xc0],xmm0
0x004f4784: lea    rdx,[rip+0x116c55d]        # 0x141660ce8 ; literal="with the music"
0x004f478b: mov    r8d,0xe
0x004f4791: mov    rcx,r13
0x004f4794: call   0x140070fd0
0x004f4799: mov    r8d,0x3
0x004f479f: lea    rdx,[rip+0x111feda]        # 0x141614680 ; literal=".  "
0x004f47a6: mov    rcx,r13
0x004f47a9: call   0x140070fd0
0x004f47ae: mov    rax,QWORD PTR [rsi]
0x004f47b1: cmp    DWORD PTR [rax+0x18],0xffffffff
0x004f47b5: je     0x1404f4b1f
0x004f47bb: mov    r8d,0xd
0x004f47c1: lea    rdx,[rip+0x116c530]        # 0x141660cf8 ; literal="The partners "
0x004f47c8: mov    rcx,r13
0x004f47cb: call   0x140070fd0
0x004f47d0: mov    rcx,QWORD PTR [rsi]
0x004f47d3: mov    edx,DWORD PTR [rcx+0x18]
0x004f47d6: test   edx,edx
0x004f47d8: je     0x1404f48f2
0x004f47de: sub    edx,0x1
0x004f47e1: je     0x1404f48e3
0x004f47e7: cmp    edx,0x1
0x004f47ea: jne    0x1404f4907
0x004f47f0: mov    r8d,0x13
0x004f47f6: lea    rdx,[rip+0x116c533]        # 0x141660d30 ; literal="rarely make contact"
0x004f47fd: jmp    0x1404f48ff
0x004f4802: mov    DWORD PTR [rbp+0x100],r10d
0x004f4809: movsxd rax,r10d
0x004f480c: mov    rbx,QWORD PTR [rbx+rax*8]
0x004f4810: mov    QWORD PTR [rbp+0x108],rbx
0x004f4817: mov    eax,0xffffffff
0x004f481c: mov    DWORD PTR [rbp-0x50],eax
0x004f481f: mov    QWORD PTR [rbp-0x48],0x0
0x004f4827: movaps xmm0,XMMWORD PTR [rbp+0x100]
0x004f482e: test   rbx,rbx
0x004f4831: je     0x1404f4784
0x004f4837: movsxd rax,DWORD PTR [rdi+0x28]
0x004f483b: test   eax,eax
0x004f483d: js     0x1404f4899
0x004f483f: mov    rcx,QWORD PTR [rbx+0x28]
0x004f4843: sub    rcx,QWORD PTR [rbx+0x20]
0x004f4847: sar    rcx,0x3
0x004f484b: cmp    rax,rcx
0x004f484e: jae    0x1404f4899
0x004f4850: mov    r8d,0x7
0x004f4856: lea    rdx,[rip+0x116cb33]        # 0x141661390 ; literal="to the "
0x004f485d: mov    rcx,r13
0x004f4860: call   0x140070fd0
0x004f4865: movsxd rcx,DWORD PTR [rdi+0x28]
0x004f4869: mov    rax,QWORD PTR [rbx+0x20]
0x004f486d: mov    rdx,QWORD PTR [rax+rcx*8]
0x004f4871: cmp    QWORD PTR [rdx+0x18],0xf
0x004f4876: mov    r8,QWORD PTR [rdx+0x10]
0x004f487a: jbe    0x1404f487f
0x004f487c: mov    rdx,QWORD PTR [rdx]
0x004f487f: mov    rcx,r13
0x004f4882: call   0x140070fd0
0x004f4887: mov    r8d,0x7
0x004f488d: lea    rdx,[rip+0x116c44c]        # 0x141660ce0 ; literal=" rhythm"
0x004f4894: jmp    0x1404f4791
0x004f4899: movsxd rax,DWORD PTR [rdi+0x2c]
0x004f489d: test   eax,eax
0x004f489f: js     0x1404f4784
0x004f48a5: psrldq xmm0,0x8
0x004f48aa: movq   rbx,xmm0
0x004f48af: mov    rcx,QWORD PTR [rbx+0x10]
0x004f48b3: sub    rcx,QWORD PTR [rbx+0x8]
0x004f48b7: sar    rcx,0x3
0x004f48bb: cmp    rax,rcx
0x004f48be: jae    0x1404f4784
0x004f48c4: mov    r8d,0x7
0x004f48ca: lea    rdx,[rip+0x116cabf]        # 0x141661390 ; literal="to the "
0x004f48d1: mov    rcx,r13
0x004f48d4: call   0x140070fd0
0x004f48d9: movsxd rcx,DWORD PTR [rdi+0x2c]
0x004f48dd: mov    rax,QWORD PTR [rbx+0x8]
0x004f48e1: jmp    0x1404f486d
0x004f48e3: mov    r8d,0x15
0x004f48e9: lea    rdx,[rip+0x116c428]        # 0x141660d18 ; literal="maintain open contact"
0x004f48f0: jmp    0x1404f48ff
0x004f48f2: mov    r8d,0xd
0x004f48f8: lea    rdx,[rip+0x116c409]        # 0x141660d08 ; literal="dance closely"
0x004f48ff: mov    rcx,r13
0x004f4902: call   0x140070fd0
0x004f4907: mov    r8d,0x17
0x004f490d: lea    rdx,[rip+0x116c434]        # 0x141660d48 ; literal=", communicating intent "
0x004f4914: mov    rcx,r13
0x004f4917: call   0x140070fd0
0x004f491c: mov    rdx,QWORD PTR [rsi]
0x004f491f: movsxd rax,DWORD PTR [rdx+0x1c]
0x004f4923: cmp    eax,0x5
0x004f4926: ja     0x1404f4b0a
0x004f492c: lea    r8,[rip+0xffffffffffb0b6cd]        # 0x140000000
0x004f4933: mov    ecx,DWORD PTR [r8+rax*4+0x4f6200]
0x004f493b: add    rcx,r8
0x004f493e: jmp    rcx
0x004f4940: mov    r8d,0x13
0x004f4946: lea    rdx,[rip+0x116c413]        # 0x141660d60 ; literal="by pushing together"
0x004f494d: mov    rcx,r13
0x004f4950: call   0x140070fd0
0x004f4955: mov    rax,QWORD PTR [rsi]
0x004f4958: cmp    DWORD PTR [rax+0x20],0x0
0x004f495c: jne    0x1404f4973
0x004f495e: mov    r8d,0xb
0x004f4964: lea    rdx,[rip+0x116c40d]        # 0x141660d78 ; literal=" constantly"
0x004f496b: mov    rcx,r13
0x004f496e: call   0x140070fd0
0x004f4973: mov    rax,QWORD PTR [rsi]
0x004f4976: cmp    DWORD PTR [rax+0x20],0x1
0x004f497a: jne    0x1404f4b0a
0x004f4980: mov    r8d,0x8
0x004f4986: lea    rdx,[rip+0x116c3fb]        # 0x141660d88 ; literal=" briefly"
0x004f498d: jmp    0x1404f4b02
0x004f4992: mov    r8d,0xf
0x004f4998: lea    rdx,[rip+0x116c3f9]        # 0x141660d98 ; literal="by pulling away"
0x004f499f: mov    rcx,r13
0x004f49a2: call   0x140070fd0
0x004f49a7: mov    rax,QWORD PTR [rsi]
0x004f49aa: cmp    DWORD PTR [rax+0x20],0x0
0x004f49ae: jne    0x1404f49c5
0x004f49b0: mov    r8d,0xb
0x004f49b6: lea    rdx,[rip+0x116c3bb]        # 0x141660d78 ; literal=" constantly"
0x004f49bd: mov    rcx,r13
0x004f49c0: call   0x140070fd0
0x004f49c5: mov    rax,QWORD PTR [rsi]
0x004f49c8: cmp    DWORD PTR [rax+0x20],0x1
0x004f49cc: jne    0x1404f4b0a
0x004f49d2: mov    r8d,0x8
0x004f49d8: lea    rdx,[rip+0x116c3a9]        # 0x141660d88 ; literal=" briefly"
0x004f49df: jmp    0x1404f4b02
0x004f49e4: cmp    DWORD PTR [rdx+0x20],0x0
0x004f49e8: jne    0x1404f49ff
0x004f49ea: mov    r8d,0xb
0x004f49f0: lea    rdx,[rip+0x116c3b1]        # 0x141660da8 ; literal="constantly "
0x004f49f7: mov    rcx,r13
0x004f49fa: call   0x140070fd0
0x004f49ff: mov    rax,QWORD PTR [rsi]
0x004f4a02: cmp    DWORD PTR [rax+0x20],0x1
0x004f4a06: jne    0x1404f4a1d
0x004f4a08: mov    r8d,0x8
0x004f4a0e: lea    rdx,[rip+0x116be1b]        # 0x141660830 ; literal="briefly "
0x004f4a15: mov    rcx,r13
0x004f4a18: call   0x140070fd0
0x004f4a1d: mov    r8d,0xd
0x004f4a23: lea    rdx,[rip+0x116be16]        # 0x141660840 ; literal="through touch"
0x004f4a2a: jmp    0x1404f4b02
0x004f4a2f: cmp    DWORD PTR [rdx+0x20],0x0
0x004f4a33: jne    0x1404f4a4a
0x004f4a35: mov    r8d,0xb
0x004f4a3b: lea    rdx,[rip+0x116c366]        # 0x141660da8 ; literal="constantly "
0x004f4a42: mov    rcx,r13
0x004f4a45: call   0x140070fd0
0x004f4a4a: mov    rax,QWORD PTR [rsi]
0x004f4a4d: cmp    DWORD PTR [rax+0x20],0x1
0x004f4a51: jne    0x1404f4a68
0x004f4a53: mov    r8d,0x8
0x004f4a59: lea    rdx,[rip+0x116bdd0]        # 0x141660830 ; literal="briefly "
0x004f4a60: mov    rcx,r13
0x004f4a63: call   0x140070fd0
0x004f4a68: mov    r8d,0x15
0x004f4a6e: lea    rdx,[rip+0x116bddb]        # 0x141660850 ; literal="through a light touch"
0x004f4a75: jmp    0x1404f4b02
0x004f4a7a: cmp    DWORD PTR [rdx+0x20],0x0
0x004f4a7e: jne    0x1404f4a95
0x004f4a80: mov    r8d,0xb
0x004f4a86: lea    rdx,[rip+0x116c31b]        # 0x141660da8 ; literal="constantly "
0x004f4a8d: mov    rcx,r13
0x004f4a90: call   0x140070fd0
0x004f4a95: mov    rax,QWORD PTR [rsi]
0x004f4a98: cmp    DWORD PTR [rax+0x20],0x1
0x004f4a9c: jne    0x1404f4ab3
0x004f4a9e: mov    r8d,0x8
0x004f4aa4: lea    rdx,[rip+0x116bd85]        # 0x141660830 ; literal="briefly "
0x004f4aab: mov    rcx,r13
0x004f4aae: call   0x140070fd0
0x004f4ab3: lea    rdx,[rip+0x116bdae]        # 0x141660868 ; literal="through visual cues"
0x004f4aba: jmp    0x1404f4afc
0x004f4abc: cmp    DWORD PTR [rdx+0x20],0x0
0x004f4ac0: jne    0x1404f4ad7
0x004f4ac2: mov    r8d,0xb
0x004f4ac8: lea    rdx,[rip+0x116c2d9]        # 0x141660da8 ; literal="constantly "
0x004f4acf: mov    rcx,r13
0x004f4ad2: call   0x140070fd0
0x004f4ad7: mov    rax,QWORD PTR [rsi]
0x004f4ada: cmp    DWORD PTR [rax+0x20],0x1
0x004f4ade: jne    0x1404f4af5
0x004f4ae0: mov    r8d,0x8
0x004f4ae6: lea    rdx,[rip+0x116bd43]        # 0x141660830 ; literal="briefly "
0x004f4aed: mov    rcx,r13
0x004f4af0: call   0x140070fd0
0x004f4af5: lea    rdx,[rip+0x116bd84]        # 0x141660880 ; literal="through spoken cues"
0x004f4afc: mov    r8d,0x13
0x004f4b02: mov    rcx,r13
0x004f4b05: call   0x140070fd0
0x004f4b0a: mov    r8d,0x3
0x004f4b10: lea    rdx,[rip+0x111fb69]        # 0x141614680 ; literal=".  "
0x004f4b17: mov    rcx,r13
0x004f4b1a: call   0x140070fd0
0x004f4b1f: mov    rax,QWORD PTR [rsi]
0x004f4b22: cmp    DWORD PTR [rax+0x4c],0xffffffff
0x004f4b26: je     0x1404f4c6b
0x004f4b2c: mov    r8d,0x28
0x004f4b32: lea    rdx,[rip+0x116be57]        # 0x141660990 ; literal="The dancers imitate the movement of the "
0x004f4b39: mov    rcx,r13
0x004f4b3c: call   0x140070fd0
0x004f4b41: mov    rax,QWORD PTR [rsi]
0x004f4b44: movsxd rcx,DWORD PTR [rax+0x4c]
0x004f4b48: test   ecx,ecx
0x004f4b4a: js     0x1404f4c41
0x004f4b50: mov    rax,QWORD PTR [rip+0x2014299]        # 0x142508df0
0x004f4b57: mov    r10,QWORD PTR [rip+0x201428a]        # 0x142508de8
0x004f4b5e: sub    rax,r10
0x004f4b61: sar    rax,0x3
0x004f4b65: cmp    ecx,eax
0x004f4b67: jge    0x1404f4c41
0x004f4b6d: xorps  xmm0,xmm0
0x004f4b70: movups XMMWORD PTR [rbp+0xe0],xmm0
0x004f4b77: mov    r8d,0xf
0x004f4b7d: mov    QWORD PTR [rbp+0xf8],r8
0x004f4b84: xor    r9d,r9d
0x004f4b87: mov    QWORD PTR [rbp+0xf0],r9
0x004f4b8e: mov    BYTE PTR [rbp+0xe0],r9b
0x004f4b95: test   cx,cx
0x004f4b98: js     0x1404f4bdf
0x004f4b9a: movsx  rdx,cx
0x004f4b9e: cmp    rdx,rax
0x004f4ba1: jae    0x1404f4bdf
0x004f4ba3: mov    rdx,QWORD PTR [r10+rdx*8]
0x004f4ba7: add    rdx,0x20
0x004f4bab: lea    rax,[rbp+0xe0]
0x004f4bb2: cmp    rax,rdx
0x004f4bb5: je     0x1404f4bdf
0x004f4bb7: mov    r8,QWORD PTR [rdx+0x10]
0x004f4bbb: cmp    QWORD PTR [rdx+0x18],0xf
0x004f4bc0: jbe    0x1404f4bc5
0x004f4bc2: mov    rdx,QWORD PTR [rdx]
0x004f4bc5: lea    rcx,[rbp+0xe0]
0x004f4bcc: call   0x140070e90
0x004f4bd1: mov    r8,QWORD PTR [rbp+0xf8]
0x004f4bd8: mov    r9,QWORD PTR [rbp+0xf0]
0x004f4bdf: lea    rdx,[rbp+0xe0]
0x004f4be6: cmp    r8,0xf
0x004f4bea: cmova  rdx,QWORD PTR [rbp+0xe0]
0x004f4bf2: mov    r8,r9
0x004f4bf5: mov    rcx,r13
0x004f4bf8: call   0x140070fd0
0x004f4bfd: nop
0x004f4bfe: mov    rdx,QWORD PTR [rbp+0xf8]
0x004f4c05: cmp    rdx,0xf
0x004f4c09: jbe    0x1404f4c56
0x004f4c0b: inc    rdx
0x004f4c0e: mov    rcx,QWORD PTR [rbp+0xe0]
0x004f4c15: mov    rax,rcx
0x004f4c18: cmp    rdx,0x1000
0x004f4c1f: jb     0x1404f4c3a
0x004f4c21: add    rdx,0x27
0x004f4c25: mov    rcx,QWORD PTR [rcx-0x8]
0x004f4c29: sub    rax,rcx
0x004f4c2c: add    rax,0xfffffffffffffff8
0x004f4c30: cmp    rax,0x1f
0x004f4c34: ja     0x1404f5dd5
0x004f4c3a: call   0x14154de20
0x004f4c3f: jmp    0x1404f4c56
0x004f4c41: mov    r8d,0x8
0x004f4c47: lea    rdx,[rip+0x1189bea]        # 0x14167e838 ; literal="creature"
0x004f4c4e: mov    rcx,r13
0x004f4c51: call   0x140070fd0
0x004f4c56: mov    r8d,0x3
0x004f4c5c: lea    rdx,[rip+0x111fa1d]        # 0x141614680 ; literal=".  "
0x004f4c63: mov    rcx,r13
0x004f4c66: call   0x140070fd0
0x004f4c6b: mov    rdx,QWORD PTR [rsi]
0x004f4c6e: mov    rax,QWORD PTR [rdx+0x28]
0x004f4c72: mov    rcx,QWORD PTR [rdx+0x30]
0x004f4c76: sub    rcx,rax
0x004f4c79: sar    rcx,0x2
0x004f4c7d: xor    edi,edi
0x004f4c7f: test   rcx,rcx
0x004f4c82: je     0x1404f4dc1
0x004f4c88: mov    r12d,edi
0x004f4c8b: mov    rcx,QWORD PTR [rdx+0x30]
0x004f4c8f: nop
0x004f4c90: cmp    rax,rcx
0x004f4c93: jae    0x1404f4cb8
0x004f4c95: mov    r8d,DWORD PTR [rax]
0x004f4c98: test   r8d,r8d
0x004f4c9b: je     0x1404f4caf
0x004f4c9d: sub    r8d,0x1
0x004f4ca1: je     0x1404f4caf
0x004f4ca3: sub    r8d,0x1
0x004f4ca7: je     0x1404f4caf
0x004f4ca9: cmp    r8d,0x1
0x004f4cad: jne    0x1404f4cb2
0x004f4caf: inc    r12d
0x004f4cb2: add    rax,0x4
0x004f4cb6: jmp    0x1404f4c90
0x004f4cb8: test   r12d,r12d
0x004f4cbb: jle    0x1404f4dbc
0x004f4cc1: mov    r8d,0x1a
0x004f4cc7: lea    rdx,[rip+0x116c6ca]        # 0x141661398 ; literal="There are partner changes "
0x004f4cce: mov    rcx,r13
0x004f4cd1: call   0x140070fd0
0x004f4cd6: mov    rdi,QWORD PTR [rsi]
0x004f4cd9: mov    rbx,QWORD PTR [rdi+0x28]
0x004f4cdd: mov    rdi,QWORD PTR [rdi+0x30]
0x004f4ce1: cmp    rbx,rdi
0x004f4ce4: jae    0x1404f4da5
0x004f4cea: mov    edx,DWORD PTR [rbx]
0x004f4cec: mov    ecx,edx
0x004f4cee: test   edx,edx
0x004f4cf0: je     0x1404f4d05
0x004f4cf2: sub    ecx,0x1
0x004f4cf5: je     0x1404f4d05
0x004f4cf7: sub    ecx,0x1
0x004f4cfa: je     0x1404f4d05
0x004f4cfc: cmp    ecx,0x1
0x004f4cff: jne    0x1404f4d9c
0x004f4d05: dec    r12d
0x004f4d08: test   edx,edx
0x004f4d0a: je     0x1404f4d48
0x004f4d0c: sub    edx,0x1
0x004f4d0f: je     0x1404f4d39
0x004f4d11: sub    edx,0x1
0x004f4d14: je     0x1404f4d2a
0x004f4d16: cmp    edx,0x1
0x004f4d19: jne    0x1404f4d5d
0x004f4d1b: mov    r8d,0x2a
0x004f4d21: lea    rdx,[rip+0x116bc38]        # 0x141660960 ; literal="with the lead turning out counterclockwise"
0x004f4d28: jmp    0x1404f4d55
0x004f4d2a: mov    r8d,0x23
0x004f4d30: lea    rdx,[rip+0x116bc01]        # 0x141660938 ; literal="with the lead turning out clockwise"
0x004f4d37: jmp    0x1404f4d55
0x004f4d39: mov    r8d,0x37
0x004f4d3f: lea    rdx,[rip+0x116bbba]        # 0x141660900 ; literal="with the lead advancing against the main line of motion"
0x004f4d46: jmp    0x1404f4d55
0x004f4d48: mov    r8d,0x35
0x004f4d4e: lea    rdx,[rip+0x116bb73]        # 0x1416608c8 ; literal="with the lead advancing along the main line of motion"
0x004f4d55: mov    rcx,r13
0x004f4d58: call   0x140070fd0
0x004f4d5d: cmp    r12d,0x2
0x004f4d61: jl     0x1404f4d81
0x004f4d63: mov    r8d,0x1
0x004f4d69: lea    rdx,[rip+0x111f494]        # 0x141614204 ; literal=","
0x004f4d70: mov    rcx,r13
0x004f4d73: call   0x140070fd0
0x004f4d78: add    rbx,0x4
0x004f4d7c: jmp    0x1404f4ce1
0x004f4d81: cmp    r12d,0x1
0x004f4d85: jne    0x1404f4d9c
0x004f4d87: mov    r8d,0x5
0x004f4d8d: lea    rdx,[rip+0x110a5ac]        # 0x1415ff340 ; literal=" and "
0x004f4d94: mov    rcx,r13
0x004f4d97: call   0x140070fd0
0x004f4d9c: add    rbx,0x4
0x004f4da0: jmp    0x1404f4ce1
0x004f4da5: mov    r8d,0x3
0x004f4dab: lea    rdx,[rip+0x111f8ce]        # 0x141614680 ; literal=".  "
0x004f4db2: mov    rcx,r13
0x004f4db5: call   0x140070fd0
0x004f4dba: xor    edi,edi
0x004f4dbc: mov    r12,QWORD PTR [rsp+0x50]
0x004f4dc1: mov    rcx,QWORD PTR [rsi]
0x004f4dc4: mov    rax,QWORD PTR [rcx+0x58]
0x004f4dc8: sub    rax,QWORD PTR [rcx+0x50]
0x004f4dcc: sar    rax,0x2
0x004f4dd0: test   rax,rax
0x004f4dd3: jne    0x1404f4de1
0x004f4dd5: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x004f4dd9: je     0x1404f5dbf
0x004f4ddf: jmp    0x1404f4de7
0x004f4de1: cmp    DWORD PTR [rcx+0x14],0xffffffff
0x004f4de5: je     0x1404f4e1f
0x004f4de7: mov    r8d,0x1a
0x004f4ded: lea    rdx,[rip+0x116c5c4]        # 0x1416613b8 ; literal="There is a basic movement "
0x004f4df4: mov    rcx,r13
0x004f4df7: call   0x140070fd0
0x004f4dfc: mov    rax,QWORD PTR [rsi]
0x004f4dff: movsxd rcx,DWORD PTR [rax+0x14]
0x004f4e03: mov    rdx,QWORD PTR [r12+0x160]
0x004f4e0b: mov    r9d,DWORD PTR [rbp-0x40]
0x004f4e0f: mov    r8d,DWORD PTR [rbp-0x38]
0x004f4e13: mov    rdx,QWORD PTR [rdx+rcx*8]
0x004f4e17: mov    rcx,r13
0x004f4e1a: call   0x1404f1320
0x004f4e1f: mov    r10,QWORD PTR [rsi]
0x004f4e22: mov    r11,QWORD PTR [r10+0x50]
0x004f4e26: mov    r9,QWORD PTR [r10+0x58]
0x004f4e2a: sub    r9,r11
0x004f4e2d: sar    r9,0x2
0x004f4e31: test   r9,r9
0x004f4e34: je     0x1404f5dbf
0x004f4e3a: mov    ebx,edi
0x004f4e3c: mov    r12d,edi
0x004f4e3f: xor    ecx,ecx
0x004f4e41: mov    DWORD PTR [rsp+0x38],ecx
0x004f4e45: xor    r8d,r8d
0x004f4e48: xor    edx,edx
0x004f4e4a: lea    r14,[rip+0xffffffffffb0b1af]        # 0x140000000
0x004f4e51: cmp    DWORD PTR [r11+rdx*1],0x5
0x004f4e56: jne    0x1404f4e9d
0x004f4e58: mov    rax,QWORD PTR [r10+0x68]
0x004f4e5c: movsxd rcx,DWORD PTR [rdx+rax*1]
0x004f4e60: cmp    ecx,0xffffffff
0x004f4e63: je     0x1404f4e91
0x004f4e65: cmp    ecx,0x2d
0x004f4e68: ja     0x1404f4e89
0x004f4e6a: movzx  eax,BYTE PTR [r14+rcx*1+0x4f6224]
0x004f4e73: mov    ecx,DWORD PTR [r14+rax*4+0x4f6218]
0x004f4e7b: add    rcx,r14
0x004f4e7e: jmp    rcx
0x004f4e80: inc    r12d
0x004f4e83: mov    ecx,DWORD PTR [rsp+0x38]
0x004f4e87: jmp    0x1404f4e9f
0x004f4e89: inc    edi
0x004f4e8b: mov    ecx,DWORD PTR [rsp+0x38]
0x004f4e8f: jmp    0x1404f4e9f
0x004f4e91: mov    ecx,DWORD PTR [rsp+0x38]
0x004f4e95: inc    ecx
0x004f4e97: mov    DWORD PTR [rsp+0x38],ecx
0x004f4e9b: jmp    0x1404f4e9f
0x004f4e9d: inc    ebx
0x004f4e9f: inc    r8d
0x004f4ea2: add    rdx,0x4
0x004f4ea6: movsxd rax,r8d
0x004f4ea9: cmp    rax,r9
0x004f4eac: jb     0x1404f4e51
0x004f4eae: mov    DWORD PTR [rsp+0x64],edi
0x004f4eb2: mov    DWORD PTR [rsp+0x70],ebx
0x004f4eb6: test   ebx,ebx
0x004f4eb8: mov    r14,QWORD PTR [rsp+0x40]
0x004f4ebd: jg     0x1404f4ed0
0x004f4ebf: test   ecx,ecx
0x004f4ec1: jg     0x1404f4ed0
0x004f4ec3: test   edi,edi
0x004f4ec5: jg     0x1404f4ed0
0x004f4ec7: test   r12d,r12d
0x004f4eca: jle    0x1404f5dbf
0x004f4ed0: mov    r8d,0x4
0x004f4ed6: lea    rdx,[rip+0x116c277]        # 0x141661154 ; literal="This"
0x004f4edd: mov    rcx,r13
0x004f4ee0: call   0x140070fd0
0x004f4ee5: test   ebx,ebx
0x004f4ee7: jne    0x1404f4f08
0x004f4ee9: cmp    DWORD PTR [rsp+0x38],ebx
0x004f4eed: jne    0x1404f4f08
0x004f4eef: test   edi,edi
0x004f4ef1: jne    0x1404f4f08
0x004f4ef3: mov    r8d,0xb
0x004f4ef9: lea    rdx,[rip+0x116c260]        # 0x141661160 ; literal=" section is"
0x004f4f00: mov    rcx,r13
0x004f4f03: call   0x140070fd0
0x004f4f08: xor    edi,edi
0x004f4f0a: mov    rdx,QWORD PTR [rsi]
0x004f4f0d: mov    rax,QWORD PTR [rdx+0x58]
0x004f4f11: sub    rax,QWORD PTR [rdx+0x50]
0x004f4f15: sar    rax,0x2
0x004f4f19: test   rax,rax
0x004f4f1c: je     0x1404f525f
0x004f4f22: xor    ebx,ebx
0x004f4f24: mov    r14d,DWORD PTR [rsp+0x70]
0x004f4f29: mov    r15d,DWORD PTR [rsp+0x64]
0x004f4f2e: xchg   ax,ax
0x004f4f30: mov    rax,QWORD PTR [rdx+0x50]
0x004f4f34: cmp    DWORD PTR [rbx+rax*1],0x5
0x004f4f38: jne    0x1404f5231
0x004f4f3e: mov    rax,QWORD PTR [rdx+0x68]
0x004f4f42: movsxd rcx,DWORD PTR [rbx+rax*1]
0x004f4f46: cmp    ecx,0xffffffff
0x004f4f49: je     0x1404f5231
0x004f4f4f: cmp    ecx,0x2d
0x004f4f52: ja     0x1404f5231
0x004f4f58: lea    rdx,[rip+0xffffffffffb0b0a1]        # 0x140000000
0x004f4f5f: mov    ecx,DWORD PTR [rdx+rcx*4+0x4f6254]
0x004f4f66: add    rcx,rdx
0x004f4f69: jmp    rcx
0x004f4f6b: mov    r8d,0x9
0x004f4f71: lea    rdx,[rip+0x116b298]        # 0x141660210 ; literal=" graceful"
0x004f4f78: jmp    0x1404f51e5
0x004f4f7d: mov    r8d,0x7
0x004f4f83: lea    rdx,[rip+0x116b296]        # 0x141660220 ; literal=" serene"
0x004f4f8a: jmp    0x1404f51e5
0x004f4f8f: mov    r8d,0x5
0x004f4f95: lea    rdx,[rip+0x116b28c]        # 0x141660228 ; literal=" calm"
0x004f4f9c: jmp    0x1404f51e5
0x004f4fa1: mov    r8d,0xa
0x004f4fa7: lea    rdx,[rip+0x116b282]        # 0x141660230 ; literal=" grotesque"
0x004f4fae: jmp    0x1404f51e5
0x004f4fb3: mov    r8d,0x6
0x004f4fb9: lea    rdx,[rip+0x116b27c]        # 0x14166023c ; literal=" crude"
0x004f4fc0: jmp    0x1404f51e5
0x004f4fc5: lea    rdx,[rip+0x116b27c]        # 0x141660248 ; literal=" refined"
0x004f4fcc: jmp    0x1404f51df
0x004f4fd1: mov    r8d,0xc
0x004f4fd7: lea    rdx,[rip+0x116b27a]        # 0x141660258 ; literal=" understated"
0x004f4fde: jmp    0x1404f51e5
0x004f4fe3: mov    r8d,0x9
0x004f4fe9: lea    rdx,[rip+0x116b278]        # 0x141660268 ; literal=" delicate"
0x004f4ff0: jmp    0x1404f51e5
0x004f4ff5: mov    r8d,0xa
0x004f4ffb: lea    rdx,[rip+0x116b276]        # 0x141660278 ; literal=" elaborate"
0x004f5002: jmp    0x1404f51e5
0x004f5007: mov    r8d,0xb
0x004f500d: lea    rdx,[rip+0x116b274]        # 0x141660288 ; literal=" expressive"
0x004f5014: jmp    0x1404f51e5
0x004f5019: mov    r8d,0x7
0x004f501f: lea    rdx,[rip+0x116b272]        # 0x141660298 ; literal=" strong"
0x004f5026: jmp    0x1404f51e5
0x004f502b: mov    r8d,0xb
0x004f5031: lea    rdx,[rip+0x116b270]        # 0x1416602a8 ; literal=" weightless"
0x004f5038: jmp    0x1404f51e5
0x004f503d: mov    r8d,0x6
0x004f5043: lea    rdx,[rip+0x116b26a]        # 0x1416602b4 ; literal=" fluid"
0x004f504a: jmp    0x1404f51e5
0x004f504f: mov    r8d,0xb
0x004f5055: lea    rdx,[rip+0x116b264]        # 0x1416602c0 ; literal=" undulating"
0x004f505c: jmp    0x1404f51e5
0x004f5061: mov    r8d,0x5
0x004f5067: lea    rdx,[rip+0x116b25e]        # 0x1416602cc ; literal=" soft"
0x004f506e: jmp    0x1404f51e5
0x004f5073: lea    rdx,[rip+0x116b25e]        # 0x1416602d8 ; literal=" jerking"
0x004f507a: jmp    0x1404f51df
0x004f507f: mov    r8d,0xc
0x004f5085: lea    rdx,[rip+0x116b25c]        # 0x1416602e8 ; literal=" sharp-edged"
0x004f508c: jmp    0x1404f51e5
0x004f5091: mov    r8d,0xf
0x004f5097: lea    rdx,[rip+0x116b25a]        # 0x1416602f8 ; literal=" straight-lined"
0x004f509e: jmp    0x1404f51e5
0x004f50a3: mov    r8d,0xa
0x004f50a9: lea    rdx,[rip+0x116af08]        # 0x14165ffb8 ; literal=" energetic"
0x004f50b0: jmp    0x1404f51e5
0x004f50b5: mov    r8d,0xb
0x004f50bb: lea    rdx,[rip+0x116af06]        # 0x14165ffc8 ; literal=" passionate"
0x004f50c2: jmp    0x1404f51e5
0x004f50c7: mov    r8d,0xa
0x004f50cd: lea    rdx,[rip+0x116af04]        # 0x14165ffd8 ; literal=" vivacious"
0x004f50d4: jmp    0x1404f51e5
0x004f50d9: mov    r8d,0x7
0x004f50df: lea    rdx,[rip+0x116af02]        # 0x14165ffe8 ; literal=" joyous"
0x004f50e6: jmp    0x1404f51e5
0x004f50eb: mov    r8d,0x6
0x004f50f1: lea    rdx,[rip+0x116aef8]        # 0x14165fff0 ; literal=" proud"
0x004f50f8: jmp    0x1404f51e5
0x004f50fd: mov    r8d,0xb
0x004f5103: lea    rdx,[rip+0x116aeee]        # 0x14165fff8 ; literal=" flamboyant"
0x004f510a: jmp    0x1404f51e5
0x004f510f: mov    r8d,0x7
0x004f5115: lea    rdx,[rip+0x116aeec]        # 0x141660008 ; literal=" lively"
0x004f511c: jmp    0x1404f51e5
0x004f5121: mov    r8d,0x9
0x004f5127: lea    rdx,[rip+0x116aee2]        # 0x141660010 ; literal=" spirited"
0x004f512e: jmp    0x1404f51e5
0x004f5133: mov    r8d,0x9
0x004f5139: lea    rdx,[rip+0x116aee0]        # 0x141660020 ; literal=" vigorous"
0x004f5140: jmp    0x1404f51e5
0x004f5145: lea    rdx,[rip+0x116aee4]        # 0x141660030 ; literal=" intense"
0x004f514c: jmp    0x1404f51df
0x004f5151: mov    r8d,0xb
0x004f5157: lea    rdx,[rip+0x116aee2]        # 0x141660040 ; literal=" aggressive"
0x004f515e: jmp    0x1404f51e5
0x004f5163: mov    r8d,0x9
0x004f5169: lea    rdx,[rip+0x116aee0]        # 0x141660050 ; literal=" powerful"
0x004f5170: jmp    0x1404f51e5
0x004f5172: mov    r8d,0x9
0x004f5178: lea    rdx,[rip+0x116aee1]        # 0x141660060 ; literal=" sluggish"
0x004f517f: jmp    0x1404f51e5
0x004f5181: lea    rdx,[rip+0x116aee8]        # 0x141660070 ; literal=" relaxed"
0x004f5188: jmp    0x1404f51df
0x004f518a: lea    rdx,[rip+0x116aeef]        # 0x141660080 ; literal=" passive"
0x004f5191: jmp    0x1404f51df
0x004f5193: mov    r8d,0x7
0x004f5199: lea    rdx,[rip+0x116aef0]        # 0x141660090 ; literal=" subtle"
0x004f51a0: jmp    0x1404f51e5
0x004f51a2: lea    rdx,[rip+0x116aeef]        # 0x141660098 ; literal=" sensual"
0x004f51a9: jmp    0x1404f51df
0x004f51ab: mov    r8d,0xa
0x004f51b1: lea    rdx,[rip+0x116aef0]        # 0x1416600a8 ; literal=" debauched"
0x004f51b8: jmp    0x1404f51e5
0x004f51ba: mov    r8d,0x9
0x004f51c0: lea    rdx,[rip+0x116aef1]        # 0x1416600b8 ; literal=" twisting"
0x004f51c7: jmp    0x1404f51e5
0x004f51c9: mov    r8d,0xa
0x004f51cf: lea    rdx,[rip+0x116aef2]        # 0x1416600c8 ; literal=" sprightly"
0x004f51d6: jmp    0x1404f51e5
0x004f51d8: lea    rdx,[rip+0x116aef9]        # 0x1416600d8 ; literal=" sinuous"
0x004f51df: mov    r8d,0x8
0x004f51e5: mov    rcx,r13
0x004f51e8: call   0x140070fd0
0x004f51ed: test   r14d,r14d
0x004f51f0: jne    0x1404f5231
0x004f51f2: cmp    DWORD PTR [rsp+0x38],r14d
0x004f51f7: jne    0x1404f5231
0x004f51f9: test   r15d,r15d
0x004f51fc: jne    0x1404f5231
0x004f51fe: cmp    r12d,0x3
0x004f5202: jl     0x1404f5213
0x004f5204: mov    r8d,0x1
0x004f520a: lea    rdx,[rip+0x111eff3]        # 0x141614204 ; literal=","
0x004f5211: jmp    0x1404f5226
0x004f5213: cmp    r12d,0x2
0x004f5217: jne    0x1404f522e
0x004f5219: mov    r8d,0x4
0x004f521f: lea    rdx,[rip+0x110f866]        # 0x141604a8c ; literal=" and"
0x004f5226: mov    rcx,r13
0x004f5229: call   0x140070fd0
0x004f522e: dec    r12d
0x004f5231: inc    edi
0x004f5233: add    rbx,0x4
0x004f5237: mov    rdx,QWORD PTR [rsi]
0x004f523a: mov    rcx,QWORD PTR [rdx+0x58]
0x004f523e: sub    rcx,QWORD PTR [rdx+0x50]
0x004f5242: sar    rcx,0x2
0x004f5246: movsxd rax,edi
0x004f5249: cmp    rax,rcx
0x004f524c: jb     0x1404f4f30
0x004f5252: mov    r14,QWORD PTR [rsp+0x40]
0x004f5257: mov    r15,QWORD PTR [rbp-0x80]
0x004f525b: mov    ebx,DWORD PTR [rsp+0x70]
0x004f525f: test   ebx,ebx
0x004f5261: jg     0x1404f5275
0x004f5263: cmp    DWORD PTR [rsp+0x38],0x0
0x004f5268: jg     0x1404f5275
0x004f526a: cmp    DWORD PTR [rsp+0x64],0x0
0x004f526f: jle    0x1404f5daa
0x004f5275: mov    r8d,0x1a
0x004f527b: lea    rdx,[rip+0x116beee]        # 0x141661170 ; literal=" section is punctuated by "
0x004f5282: mov    rcx,r13
0x004f5285: call   0x140070fd0
0x004f528a: xor    r12d,r12d
0x004f528d: mov    rdx,QWORD PTR [rsi]
0x004f5290: mov    rax,QWORD PTR [rdx+0x58]
0x004f5294: sub    rax,QWORD PTR [rdx+0x50]
0x004f5298: sar    rax,0x2
0x004f529c: test   rax,rax
0x004f529f: je     0x1404f5b2e
0x004f52a5: mov    edi,ebx
0x004f52a7: mov    r15d,r12d
0x004f52aa: mov    r14d,DWORD PTR [rsp+0x6c]
0x004f52af: nop
0x004f52b0: mov    rax,QWORD PTR [rdx+0x50]
0x004f52b4: cmp    DWORD PTR [rax+r12*4],0x5
0x004f52b9: je     0x1404f5b00
0x004f52bf: dec    edi
0x004f52c1: mov    DWORD PTR [rbp+0xc0],edi
0x004f52c7: mov    rax,QWORD PTR [rdx+0x98]
0x004f52ce: test   BYTE PTR [rax+r12*4],0xc0
0x004f52d3: je     0x1404f52ea
0x004f52d5: mov    r8d,0x4
0x004f52db: lea    rdx,[rip+0x1109d96]        # 0x1415ff078 ; literal="the "
0x004f52e2: mov    rcx,r13
0x004f52e5: call   0x140070fd0
0x004f52ea: mov    rax,QWORD PTR [rsi]
0x004f52ed: mov    rcx,QWORD PTR [rax+0x68]
0x004f52f1: movsxd rax,DWORD PTR [rcx+r12*4]
0x004f52f5: lea    rbx,[rip+0xffffffffffb0ad04]        # 0x140000000
0x004f52fc: cmp    eax,0x2d
0x004f52ff: ja     0x1404f560b
0x004f5305: mov    ecx,DWORD PTR [rbx+rax*4+0x4f630c]
0x004f530c: add    rcx,rbx
0x004f530f: jmp    rcx
0x004f5311: mov    r8d,0x8
0x004f5317: lea    rdx,[rip+0x116b76a]        # 0x141660a88 ; literal="graceful"
0x004f531e: jmp    0x1404f5603
0x004f5323: mov    r8d,0x6
0x004f5329: lea    rdx,[rip+0x116b764]        # 0x141660a94 ; literal="serene"
0x004f5330: jmp    0x1404f5603
0x004f5335: mov    r8d,0x4
0x004f533b: lea    rdx,[rip+0x116b75a]        # 0x141660a9c ; literal="calm"
0x004f5342: jmp    0x1404f5603
0x004f5347: mov    r8d,0x9
0x004f534d: lea    rdx,[rip+0x116b754]        # 0x141660aa8 ; literal="grotesque"
0x004f5354: jmp    0x1404f5603
0x004f5359: mov    r8d,0x5
0x004f535f: lea    rdx,[rip+0x116b74e]        # 0x141660ab4 ; literal="crude"
0x004f5366: jmp    0x1404f5603
0x004f536b: lea    rdx,[rip+0x116b74e]        # 0x141660ac0 ; literal="refined"
0x004f5372: jmp    0x1404f55fd
0x004f5377: mov    r8d,0xb
0x004f537d: lea    rdx,[rip+0x116b744]        # 0x141660ac8 ; literal="understated"
0x004f5384: jmp    0x1404f5603
0x004f5389: mov    r8d,0x8
0x004f538f: lea    rdx,[rip+0x116b742]        # 0x141660ad8 ; literal="delicate"
0x004f5396: jmp    0x1404f5603
0x004f539b: mov    r8d,0x9
0x004f53a1: lea    rdx,[rip+0x116b740]        # 0x141660ae8 ; literal="elaborate"
0x004f53a8: jmp    0x1404f5603
0x004f53ad: mov    r8d,0xa
0x004f53b3: lea    rdx,[rip+0x116b73e]        # 0x141660af8 ; literal="expressive"
0x004f53ba: jmp    0x1404f5603
0x004f53bf: mov    r8d,0x6
0x004f53c5: lea    rdx,[rip+0x116b738]        # 0x141660b04 ; literal="strong"
0x004f53cc: jmp    0x1404f5603
0x004f53d1: mov    r8d,0x5
0x004f53d7: lea    rdx,[rip+0x116b72e]        # 0x141660b0c ; literal="large"
0x004f53de: jmp    0x1404f5603
0x004f53e3: mov    r8d,0xa
0x004f53e9: lea    rdx,[rip+0x116b728]        # 0x141660b18 ; literal="weightless"
0x004f53f0: jmp    0x1404f5603
0x004f53f5: mov    r8d,0x5
0x004f53fb: lea    rdx,[rip+0x116bba2]        # 0x141660fa4 ; literal="fluid"
0x004f5402: jmp    0x1404f5603
0x004f5407: mov    r8d,0xa
0x004f540d: lea    rdx,[rip+0x116bb9c]        # 0x141660fb0 ; literal="undulating"
0x004f5414: jmp    0x1404f5603
0x004f5419: mov    r8d,0x4
0x004f541f: lea    rdx,[rip+0x116bb96]        # 0x141660fbc ; literal="soft"
0x004f5426: jmp    0x1404f5603
0x004f542b: lea    rdx,[rip+0x116bb96]        # 0x141660fc8 ; literal="jerking"
0x004f5432: jmp    0x1404f55fd
0x004f5437: mov    r8d,0xb
0x004f543d: lea    rdx,[rip+0x116bb8c]        # 0x141660fd0 ; literal="sharp-edged"
0x004f5444: jmp    0x1404f5603
0x004f5449: mov    r8d,0xe
0x004f544f: lea    rdx,[rip+0x116bb8a]        # 0x141660fe0 ; literal="straight-lined"
0x004f5456: jmp    0x1404f5603
0x004f545b: mov    r8d,0x4
0x004f5461: lea    rdx,[rip+0x116bb88]        # 0x141660ff0 ; literal="high"
0x004f5468: jmp    0x1404f5603
0x004f546d: mov    r8d,0x3
0x004f5473: lea    rdx,[rip+0x116bb7e]        # 0x141660ff8 ; literal="low"
0x004f547a: jmp    0x1404f5603
0x004f547f: mov    r8d,0x11
0x004f5485: lea    rdx,[rip+0x116bb74]        # 0x141661000 ; literal="loudly percussive"
0x004f548c: jmp    0x1404f5603
0x004f5491: mov    r8d,0x11
0x004f5497: lea    rdx,[rip+0x116bb7a]        # 0x141661018 ; literal="softly percussive"
0x004f549e: jmp    0x1404f5603
0x004f54a3: lea    rdx,[rip+0x116bb86]        # 0x141661030 ; literal="aborted"
0x004f54aa: jmp    0x1404f55fd
0x004f54af: mov    r8d,0x12
0x004f54b5: lea    rdx,[rip+0x116bb7c]        # 0x141661038 ; literal="partially realized"
0x004f54bc: jmp    0x1404f5603
0x004f54c1: mov    r8d,0x9
0x004f54c7: lea    rdx,[rip+0x116bb82]        # 0x141661050 ; literal="energetic"
0x004f54ce: jmp    0x1404f5603
0x004f54d3: mov    r8d,0xa
0x004f54d9: lea    rdx,[rip+0x1124240]        # 0x141619720 ; literal="passionate"
0x004f54e0: jmp    0x1404f5603
0x004f54e5: mov    r8d,0x9
0x004f54eb: lea    rdx,[rip+0x116bb6e]        # 0x141661060 ; literal="vivacious"
0x004f54f2: jmp    0x1404f5603
0x004f54f7: mov    r8d,0x6
0x004f54fd: lea    rdx,[rip+0x116bb68]        # 0x14166106c ; literal="joyous"
0x004f5504: jmp    0x1404f5603
0x004f5509: mov    r8d,0x5
0x004f550f: lea    rdx,[rip+0x11241ee]        # 0x141619704 ; literal="proud"
0x004f5516: jmp    0x1404f5603
0x004f551b: mov    r8d,0xa
0x004f5521: lea    rdx,[rip+0x116bb50]        # 0x141661078 ; literal="flamboyant"
0x004f5528: jmp    0x1404f5603
0x004f552d: mov    r8d,0x6
0x004f5533: lea    rdx,[rip+0x116bb4a]        # 0x141661084 ; literal="lively"
0x004f553a: jmp    0x1404f5603
0x004f553f: mov    r8d,0x8
0x004f5545: lea    rdx,[rip+0x116bb44]        # 0x141661090 ; literal="spirited"
0x004f554c: jmp    0x1404f5603
0x004f5551: mov    r8d,0x8
0x004f5557: lea    rdx,[rip+0x116bb42]        # 0x1416610a0 ; literal="vigorous"
0x004f555e: jmp    0x1404f5603
0x004f5563: lea    rdx,[rip+0x116bb46]        # 0x1416610b0 ; literal="intense"
0x004f556a: jmp    0x1404f55fd
0x004f556f: mov    r8d,0xa
0x004f5575: lea    rdx,[rip+0x116bb3c]        # 0x1416610b8 ; literal="aggressive"
0x004f557c: jmp    0x1404f5603
0x004f5581: mov    r8d,0x8
0x004f5587: lea    rdx,[rip+0x116bb3a]        # 0x1416610c8 ; literal="powerful"
0x004f558e: jmp    0x1404f5603
0x004f5590: mov    r8d,0x8
0x004f5596: lea    rdx,[rip+0x116bb3b]        # 0x1416610d8 ; literal="sluggish"
0x004f559d: jmp    0x1404f5603
0x004f559f: lea    rdx,[rip+0x116bb42]        # 0x1416610e8 ; literal="relaxed"
0x004f55a6: jmp    0x1404f55fd
0x004f55a8: lea    rdx,[rip+0x116bb41]        # 0x1416610f0 ; literal="passive"
0x004f55af: jmp    0x1404f55fd
0x004f55b1: mov    r8d,0x6
0x004f55b7: lea    rdx,[rip+0x116bb3a]        # 0x1416610f8 ; literal="subtle"
0x004f55be: jmp    0x1404f5603
0x004f55c0: lea    rdx,[rip+0x116bb39]        # 0x141661100 ; literal="sensual"
0x004f55c7: jmp    0x1404f55fd
0x004f55c9: mov    r8d,0x9
0x004f55cf: lea    rdx,[rip+0x116bb32]        # 0x141661108 ; literal="debauched"
0x004f55d6: jmp    0x1404f5603
0x004f55d8: mov    r8d,0x8
0x004f55de: lea    rdx,[rip+0x116bb33]        # 0x141661118 ; literal="twisting"
0x004f55e5: jmp    0x1404f5603
0x004f55e7: mov    r8d,0x9
0x004f55ed: lea    rdx,[rip+0x116bb34]        # 0x141661128 ; literal="sprightly"
0x004f55f4: jmp    0x1404f5603
0x004f55f6: lea    rdx,[rip+0x116bb3b]        # 0x141661138 ; literal="sinuous"
0x004f55fd: mov    r8d,0x7
0x004f5603: mov    rcx,r13
0x004f5606: call   0x140070fd0
0x004f560b: mov    rax,QWORD PTR [rsi]
0x004f560e: mov    rcx,QWORD PTR [rax+0x68]
0x004f5612: cmp    DWORD PTR [rcx+r12*4],0xffffffff
0x004f5617: je     0x1404f562e
0x004f5619: mov    r8d,0x1
0x004f561f: lea    rdx,[rip+0x1109346]        # 0x1415fe96c ; literal=" "
0x004f5626: mov    rcx,r13
0x004f5629: call   0x140070fd0
0x004f562e: mov    r8,QWORD PTR [rsi]
0x004f5631: mov    rcx,QWORD PTR [r8+0x50]
0x004f5635: mov    edx,DWORD PTR [rcx+r12*4]
0x004f5639: sub    edx,0x6
0x004f563c: je     0x1404f5675
0x004f563e: sub    edx,0x7
0x004f5641: je     0x1404f5651
0x004f5643: sub    edx,0x1
0x004f5646: je     0x1404f5651
0x004f5648: cmp    edx,0x1
0x004f564b: jne    0x1404f574d
0x004f5651: mov    rax,QWORD PTR [r8+0x80]
0x004f5658: cmp    DWORD PTR [rax+r12*4],0x2
0x004f565d: jne    0x1404f574d
0x004f5663: mov    r8d,0x9
0x004f5669: lea    rdx,[rip+0x116b778]        # 0x141660de8 ; literal="repeated "
0x004f5670: jmp    0x1404f5745
0x004f5675: mov    rax,QWORD PTR [r8+0x80]
0x004f567c: cmp    DWORD PTR [rax+r12*4],0x0
0x004f5681: jge    0x1404f5698
0x004f5683: mov    r8d,0x11
0x004f5689: lea    rdx,[rip+0x116bab0]        # 0x141661140 ; literal="counterclockwise "
0x004f5690: mov    rcx,r13
0x004f5693: call   0x140070fd0
0x004f5698: mov    rax,QWORD PTR [rsi]
0x004f569b: mov    rcx,QWORD PTR [rax+0x80]
0x004f56a2: cmp    DWORD PTR [rcx+r12*4],0x0
0x004f56a7: jle    0x1404f56be
0x004f56a9: mov    r8d,0xa
0x004f56af: lea    rdx,[rip+0x116b702]        # 0x141660db8 ; literal="clockwise "
0x004f56b6: mov    rcx,r13
0x004f56b9: call   0x140070fd0
0x004f56be: mov    rax,QWORD PTR [rsi]
0x004f56c1: mov    rcx,QWORD PTR [rax+0x80]
0x004f56c8: mov    eax,DWORD PTR [rcx+r12*4]
0x004f56cc: neg    eax
0x004f56ce: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f56d3: cmp    eax,0x2d
0x004f56d6: jne    0x1404f56ed
0x004f56d8: mov    r8d,0x7
0x004f56de: lea    rdx,[rip+0x116b6e3]        # 0x141660dc8 ; literal="eighth "
0x004f56e5: mov    rcx,r13
0x004f56e8: call   0x140070fd0
0x004f56ed: mov    rax,QWORD PTR [rsi]
0x004f56f0: mov    rcx,QWORD PTR [rax+0x80]
0x004f56f7: mov    eax,DWORD PTR [rcx+r12*4]
0x004f56fb: neg    eax
0x004f56fd: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f5702: cmp    eax,0x5a
0x004f5705: jne    0x1404f571c
0x004f5707: mov    r8d,0x8
0x004f570d: lea    rdx,[rip+0x116b6bc]        # 0x141660dd0 ; literal="quarter "
0x004f5714: mov    rcx,r13
0x004f5717: call   0x140070fd0
0x004f571c: mov    rax,QWORD PTR [rsi]
0x004f571f: mov    rcx,QWORD PTR [rax+0x80]
0x004f5726: mov    eax,DWORD PTR [rcx+r12*4]
0x004f572a: neg    eax
0x004f572c: cmovs  eax,DWORD PTR [rcx+r12*4]
0x004f5731: cmp    eax,0xb4
0x004f5736: jne    0x1404f574d
0x004f5738: mov    r8d,0x5
0x004f573e: lea    rdx,[rip+0x116b697]        # 0x141660ddc ; literal="half "
0x004f5745: mov    rcx,r13
0x004f5748: call   0x140070fd0
0x004f574d: mov    rax,QWORD PTR [rsi]
0x004f5750: mov    rcx,QWORD PTR [rax+0x50]
0x004f5754: mov    eax,DWORD PTR [rcx+r12*4]
0x004f5758: add    eax,0xfffffffb
0x004f575b: cmp    eax,0x1c
0x004f575e: ja     0x1404f5967
0x004f5764: cdqe
0x004f5766: mov    ecx,DWORD PTR [rbx+rax*4+0x4f63c4]
0x004f576d: add    rcx,rbx
0x004f5770: jmp    rcx
0x004f5772: mov    r8d,0x5
0x004f5778: lea    rdx,[rip+0x116ba95]        # 0x141661214 ; literal="moves"
0x004f577f: jmp    0x1404f595f
0x004f5784: mov    r8d,0x5
0x004f578a: lea    rdx,[rip+0x116b663]        # 0x141660df4 ; literal="turns"
0x004f5791: jmp    0x1404f595f
0x004f5796: mov    r8d,0x12
0x004f579c: lea    rdx,[rip+0x116b65d]        # 0x141660e00 ; literal="facial expressions"
0x004f57a3: jmp    0x1404f595f
0x004f57a8: mov    r8d,0xd
0x004f57ae: lea    rdx,[rip+0x116b663]        # 0x141660e18 ; literal="hand gestures"
0x004f57b5: jmp    0x1404f595f
0x004f57ba: mov    r8d,0xe
0x004f57c0: lea    rdx,[rip+0x116b661]        # 0x141660e28 ; literal="straight walks"
0x004f57c7: jmp    0x1404f595f
0x004f57cc: mov    r8d,0xc
0x004f57d2: lea    rdx,[rip+0x116b65f]        # 0x141660e38 ; literal="curved walks"
0x004f57d9: jmp    0x1404f595f
0x004f57de: mov    r8d,0x4
0x004f57e4: lea    rdx,[rip+0x116b65d]        # 0x141660e48 ; literal="runs"
0x004f57eb: jmp    0x1404f595f
0x004f57f0: mov    r8d,0x5
0x004f57f6: lea    rdx,[rip+0x116b653]        # 0x141660e50 ; literal="leaps"
0x004f57fd: jmp    0x1404f595f
0x004f5802: mov    r8d,0x5
0x004f5808: lea    rdx,[rip+0x116b649]        # 0x141660e58 ; literal="kicks"
0x004f580f: jmp    0x1404f595f
0x004f5814: mov    r8d,0xa
0x004f581a: lea    rdx,[rip+0x116b63f]        # 0x141660e60 ; literal="left kicks"
0x004f5821: jmp    0x1404f595f
0x004f5826: mov    r8d,0xb
0x004f582c: lea    rdx,[rip+0x116b63d]        # 0x141660e70 ; literal="right kicks"
0x004f5833: jmp    0x1404f595f
0x004f5838: mov    r8d,0x9
0x004f583e: lea    rdx,[rip+0x116b63b]        # 0x141660e80 ; literal="leg lifts"
0x004f5845: jmp    0x1404f595f
0x004f584a: mov    r8d,0xe
0x004f5850: lea    rdx,[rip+0x116b639]        # 0x141660e90 ; literal="left leg lifts"
0x004f5857: jmp    0x1404f595f
0x004f585c: mov    r8d,0xf
0x004f5862: lea    rdx,[rip+0x116b637]        # 0x141660ea0 ; literal="right leg lifts"
0x004f5869: jmp    0x1404f595f
0x004f586e: mov    r8d,0xa
0x004f5874: lea    rdx,[rip+0x116b635]        # 0x141660eb0 ; literal="body level"
0x004f587b: jmp    0x1404f595f
0x004f5880: mov    r8d,0x12
0x004f5886: lea    rdx,[rip+0x116b633]        # 0x141660ec0 ; literal="body level changes"
0x004f588d: jmp    0x1404f595f
0x004f5892: mov    r8d,0xc
0x004f5898: lea    rdx,[rip+0x116b639]        # 0x141660ed8 ; literal="arm carriage"
0x004f589f: jmp    0x1404f595f
0x004f58a4: mov    r8d,0x10
0x004f58aa: lea    rdx,[rip+0x116b637]        # 0x141660ee8 ; literal="raised left arms"
0x004f58b1: jmp    0x1404f595f
0x004f58b6: mov    r8d,0x11
0x004f58bc: lea    rdx,[rip+0x116b63d]        # 0x141660f00 ; literal="raised right arms"
0x004f58c3: jmp    0x1404f595f
0x004f58c8: mov    r8d,0xb
0x004f58ce: lea    rdx,[rip+0x116b643]        # 0x141660f18 ; literal="raised arms"
0x004f58d5: jmp    0x1404f595f
0x004f58da: mov    r8d,0x5
0x004f58e0: lea    rdx,[rip+0x116b63d]        # 0x141660f24 ; literal="spins"
0x004f58e7: jmp    0x1404f595f
0x004f58e9: mov    r8d,0x19
0x004f58ef: lea    rdx,[rip+0x116b63a]        # 0x141660f30 ; literal="independent body movement"
0x004f58f6: jmp    0x1404f595f
0x004f58f8: mov    r8d,0x4
0x004f58fe: lea    rdx,[rip+0x116b647]        # 0x141660f4c ; literal="sway"
0x004f5905: jmp    0x1404f595f
0x004f5907: mov    r8d,0xd
0x004f590d: lea    rdx,[rip+0x116b644]        # 0x141660f58 ; literal="forward bends"
0x004f5914: jmp    0x1404f595f
0x004f5916: mov    r8d,0xe
0x004f591c: lea    rdx,[rip+0x116b645]        # 0x141660f68 ; literal="backward bends"
0x004f5923: jmp    0x1404f595f
0x004f5925: mov    r8d,0xe
0x004f592b: lea    rdx,[rip+0x116b646]        # 0x141660f78 ; literal="leftward bends"
0x004f5932: jmp    0x1404f595f
0x004f5934: mov    r8d,0xf
0x004f593a: lea    rdx,[rip+0x116b647]        # 0x141660f88 ; literal="rightward bends"
0x004f5941: jmp    0x1404f595f
0x004f5943: mov    r8d,0x8
0x004f5949: lea    rdx,[rip+0x116b648]        # 0x141660f98 ; literal="footwork"
0x004f5950: jmp    0x1404f595f
0x004f5952: mov    r8d,0x20
0x004f5958: lea    rdx,[rip+0x116b831]        # 0x141661190 ; literal="movement along the line of dance"
0x004f595f: mov    rcx,r13
0x004f5962: call   0x140070fd0
0x004f5967: mov    rax,QWORD PTR [rsi]
0x004f596a: mov    rcx,QWORD PTR [rax+0x98]
0x004f5971: mov    edx,DWORD PTR [rcx+r12*4]
0x004f5975: mov    ecx,edx
0x004f5977: shr    ecx,0x2
0x004f597a: and    ecx,0x1
0x004f597d: test   dl,0x8
0x004f5980: lea    eax,[rcx+0x1]
0x004f5983: cmove  eax,ecx
0x004f5986: test   dl,0x10
0x004f5989: lea    ecx,[rax+0x1]
0x004f598c: cmove  ecx,eax
0x004f598f: test   dl,0x20
0x004f5992: lea    ebx,[rcx+0x1]
0x004f5995: cmove  ebx,ecx
0x004f5998: test   ebx,ebx
0x004f599a: je     0x1404f5a98
0x004f59a0: xor    edi,edi
0x004f59a2: mov    ecx,edi
0x004f59a4: test   edi,edi
0x004f59a6: je     0x1404f59cf
0x004f59a8: sub    ecx,0x1
0x004f59ab: je     0x1404f59c7
0x004f59ad: sub    ecx,0x1
0x004f59b0: je     0x1404f59bf
0x004f59b2: cmp    ecx,0x1
0x004f59b5: jne    0x1404f59d5
0x004f59b7: mov    r14d,0x20
0x004f59bd: jmp    0x1404f59d5
0x004f59bf: mov    r14d,0x10
0x004f59c5: jmp    0x1404f59d5
0x004f59c7: mov    r14d,0x8
0x004f59cd: jmp    0x1404f59d5
0x004f59cf: mov    r14d,0x4
0x004f59d5: mov    rax,QWORD PTR [rsi]
0x004f59d8: mov    rcx,QWORD PTR [rax+0x98]
0x004f59df: test   DWORD PTR [rcx+r12*4],r14d
0x004f59e3: je     0x1404f5a6d
0x004f59e9: dec    ebx
0x004f59eb: cmp    r14d,0x4
0x004f59ef: je     0x1404f5a2a
0x004f59f1: cmp    r14d,0x8
0x004f59f5: je     0x1404f5a1b
0x004f59f7: cmp    r14d,0x10
0x004f59fb: je     0x1404f5a0c
0x004f59fd: cmp    r14d,0x20
0x004f5a01: jne    0x1404f5a3f
0x004f5a03: lea    rdx,[rip+0x116a96e]        # 0x141660378 ; literal=" shadowed"
0x004f5a0a: jmp    0x1404f5a31
0x004f5a0c: mov    r8d,0x18
0x004f5a12: lea    rdx,[rip+0x116a93f]        # 0x141660358 ; literal=" performed in succession"
0x004f5a19: jmp    0x1404f5a37
0x004f5a1b: mov    r8d,0x18
0x004f5a21: lea    rdx,[rip+0x116ade8]        # 0x141660810 ; literal=" performed in retrograde"
0x004f5a28: jmp    0x1404f5a37
0x004f5a2a: lea    rdx,[rip+0x116adcf]        # 0x141660800 ; literal=" mirrored"
0x004f5a31: mov    r8d,0x9
0x004f5a37: mov    rcx,r13
0x004f5a3a: call   0x140070fd0
0x004f5a3f: cmp    ebx,0x2
0x004f5a42: jl     0x1404f5a53
0x004f5a44: mov    r8d,0x1
0x004f5a4a: lea    rdx,[rip+0x111e7b3]        # 0x141614204 ; literal=","
0x004f5a51: jmp    0x1404f5a65
0x004f5a53: cmp    ebx,0x1
0x004f5a56: jne    0x1404f5a6d
0x004f5a58: mov    r8d,0x4
0x004f5a5e: lea    rdx,[rip+0x110f027]        # 0x141604a8c ; literal=" and"
0x004f5a65: mov    rcx,r13
0x004f5a68: call   0x140070fd0
0x004f5a6d: inc    edi
0x004f5a6f: cmp    edi,0x4
0x004f5a72: jl     0x1404f59a2
0x004f5a78: mov    DWORD PTR [rsp+0x6c],r14d
0x004f5a7d: mov    r8d,0x11
0x004f5a83: lea    rdx,[rip+0x116a8fe]        # 0x141660388 ; literal=" by group members"
0x004f5a8a: mov    rcx,r13
0x004f5a8d: call   0x140070fd0
0x004f5a92: mov    edi,DWORD PTR [rbp+0xc0]
0x004f5a98: mov    rax,QWORD PTR [rsi]
0x004f5a9b: mov    rcx,QWORD PTR [rax+0x98]
0x004f5aa2: mov    eax,DWORD PTR [rcx+r12*4]
0x004f5aa6: test   al,0x40
0x004f5aa8: je     0x1404f5ab9
0x004f5aaa: mov    r8d,0xc
0x004f5ab0: lea    rdx,[rip+0x116b701]        # 0x1416611b8 ; literal=" of the lead"
0x004f5ab7: jmp    0x1404f5aca
0x004f5ab9: test   al,al
0x004f5abb: jns    0x1404f5ad2
0x004f5abd: mov    r8d,0x10
0x004f5ac3: lea    rdx,[rip+0x116b6fe]        # 0x1416611c8 ; literal=" of the follower"
0x004f5aca: mov    rcx,r13
0x004f5acd: call   0x140070fd0
0x004f5ad2: cmp    edi,0x2
0x004f5ad5: jl     0x1404f5ae6
0x004f5ad7: mov    r8d,0x2
0x004f5add: lea    rdx,[rip+0x1109824]        # 0x1415ff308 ; literal=", "
0x004f5ae4: jmp    0x1404f5af8
0x004f5ae6: cmp    edi,0x1
0x004f5ae9: jne    0x1404f5b00
0x004f5aeb: mov    r8d,0x5
0x004f5af1: lea    rdx,[rip+0x1109848]        # 0x1415ff340 ; literal=" and "
0x004f5af8: mov    rcx,r13
0x004f5afb: call   0x140070fd0
0x004f5b00: inc    r15d
0x004f5b03: inc    r12
0x004f5b06: mov    rdx,QWORD PTR [rsi]
0x004f5b09: mov    rcx,QWORD PTR [rdx+0x58]
0x004f5b0d: sub    rcx,QWORD PTR [rdx+0x50]
0x004f5b11: sar    rcx,0x2
0x004f5b15: movsxd rax,r15d
0x004f5b18: cmp    rax,rcx
0x004f5b1b: jb     0x1404f52b0
0x004f5b21: mov    r14,QWORD PTR [rsp+0x40]
0x004f5b26: mov    r15,QWORD PTR [rbp-0x80]
0x004f5b2a: mov    ebx,DWORD PTR [rsp+0x70]
0x004f5b2e: mov    edi,DWORD PTR [rsp+0x64]
0x004f5b32: mov    r12d,DWORD PTR [rsp+0x38]
0x004f5b37: test   edi,edi
0x004f5b39: jg     0x1404f5b44
0x004f5b3b: test   r12d,r12d
0x004f5b3e: jle    0x1404f5daa
0x004f5b44: test   ebx,ebx
0x004f5b46: jle    0x1404f5b5d
0x004f5b48: mov    r8d,0x7
0x004f5b4e: lea    rdx,[rip+0x116b68b]        # 0x1416611e0 ; literal=", with "
0x004f5b55: mov    rcx,r13
0x004f5b58: call   0x140070fd0
0x004f5b5d: test   edi,edi
0x004f5b5f: jle    0x1404f5c0f
0x004f5b65: xor    edi,edi
0x004f5b67: mov    rdx,QWORD PTR [rsi]
0x004f5b6a: mov    rax,QWORD PTR [rdx+0x58]
0x004f5b6e: sub    rax,QWORD PTR [rdx+0x50]
0x004f5b72: sar    rax,0x2
0x004f5b76: test   rax,rax
0x004f5b79: je     0x1404f5bf6
0x004f5b7f: xor    ebx,ebx
0x004f5b81: mov    rax,QWORD PTR [rdx+0x50]
0x004f5b85: cmp    DWORD PTR [rbx+rax*1],0x5
0x004f5b89: jne    0x1404f5bd9
0x004f5b8b: mov    rax,QWORD PTR [rdx+0x68]
0x004f5b8f: mov    ecx,DWORD PTR [rbx+rax*1]
0x004f5b92: cmp    ecx,0xffffffff
0x004f5b95: je     0x1404f5bd9
0x004f5b97: sub    ecx,0xb
0x004f5b9a: je     0x1404f5bc4
0x004f5b9c: sub    ecx,0xc
0x004f5b9f: je     0x1404f5bb5
0x004f5ba1: cmp    ecx,0x1
0x004f5ba4: jne    0x1404f5bd9
0x004f5ba6: mov    r8d,0x13
0x004f5bac: lea    rdx,[rip+0x116b64d]        # 0x141661200 ; literal="partially realized "
0x004f5bb3: jmp    0x1404f5bd1
0x004f5bb5: mov    r8d,0x8
0x004f5bbb: lea    rdx,[rip+0x116b62e]        # 0x1416611f0 ; literal="aborted "
0x004f5bc2: jmp    0x1404f5bd1
0x004f5bc4: mov    r8d,0x6
0x004f5bca: lea    rdx,[rip+0x116b617]        # 0x1416611e8 ; literal="large "
0x004f5bd1: mov    rcx,r13
0x004f5bd4: call   0x140070fd0
0x004f5bd9: inc    edi
0x004f5bdb: add    rbx,0x4
0x004f5bdf: mov    rdx,QWORD PTR [rsi]
0x004f5be2: mov    rcx,QWORD PTR [rdx+0x58]
0x004f5be6: sub    rcx,QWORD PTR [rdx+0x50]
0x004f5bea: sar    rcx,0x2
0x004f5bee: movsxd rax,edi
0x004f5bf1: cmp    rax,rcx
0x004f5bf4: jb     0x1404f5b81
0x004f5bf6: mov    r8d,0x5
0x004f5bfc: lea    rdx,[rip+0x116b611]        # 0x141661214 ; literal="moves"
0x004f5c03: mov    rcx,r13
0x004f5c06: call   0x140070fd0
0x004f5c0b: mov    edi,DWORD PTR [rsp+0x64]
0x004f5c0f: test   r12d,r12d
0x004f5c12: jle    0x1404f5daa
0x004f5c18: test   edi,edi
0x004f5c1a: jle    0x1404f5c31
0x004f5c1c: mov    r8d,0x5
0x004f5c22: lea    rdx,[rip+0x1109717]        # 0x1415ff340 ; literal=" and "
0x004f5c29: mov    rcx,r13
0x004f5c2c: call   0x140070fd0
0x004f5c31: mov    r8d,0x9
0x004f5c37: lea    rdx,[rip+0x116b5e2]        # 0x141661220 ; literal="movement "
0x004f5c3e: mov    rcx,r13
0x004f5c41: call   0x140070fd0
0x004f5c46: xor    edi,edi
0x004f5c48: mov    r12d,edi
0x004f5c4b: mov    edx,edi
0x004f5c4d: mov    r9,QWORD PTR [rsi]
0x004f5c50: mov    r10,QWORD PTR [r9+0x50]
0x004f5c54: mov    r8,QWORD PTR [r9+0x58]
0x004f5c58: sub    r8,r10
0x004f5c5b: sar    r8,0x2
0x004f5c5f: test   r8,r8
0x004f5c62: je     0x1404f5c86
0x004f5c64: mov    ecx,edi
0x004f5c66: cmp    DWORD PTR [rcx+r10*1],0x5
0x004f5c6b: jne    0x1404f5c78
0x004f5c6d: mov    rax,QWORD PTR [r9+0x98]
0x004f5c74: or     r12d,DWORD PTR [rcx+rax*1]
0x004f5c78: inc    edx
0x004f5c7a: add    rcx,0x4
0x004f5c7e: movsxd rax,edx
0x004f5c81: cmp    rax,r8
0x004f5c84: jb     0x1404f5c66
0x004f5c86: mov    ecx,r12d
0x004f5c89: shr    ecx,0x2
0x004f5c8c: and    ecx,0x1
0x004f5c8f: test   r12b,0x8
0x004f5c93: lea    eax,[rcx+0x1]
0x004f5c96: cmove  eax,ecx
0x004f5c99: test   r12b,0x10
0x004f5c9d: lea    ecx,[rax+0x1]
0x004f5ca0: cmove  ecx,eax
0x004f5ca3: test   r12b,0x20
0x004f5ca7: lea    ebx,[rcx+0x1]
0x004f5caa: cmove  ebx,ecx
0x004f5cad: test   ebx,ebx
0x004f5caf: je     0x1404f5daa
0x004f5cb5: mov    r14d,DWORD PTR [rsp+0x74]
0x004f5cba: nop    WORD PTR [rax+rax*1+0x0]
0x004f5cc0: mov    ecx,edi
0x004f5cc2: test   edi,edi
0x004f5cc4: je     0x1404f5ced
0x004f5cc6: sub    ecx,0x1
0x004f5cc9: je     0x1404f5ce5
0x004f5ccb: sub    ecx,0x1
0x004f5cce: je     0x1404f5cdd
0x004f5cd0: cmp    ecx,0x1
0x004f5cd3: jne    0x1404f5cf3
0x004f5cd5: mov    r14d,0x20
0x004f5cdb: jmp    0x1404f5cf3
0x004f5cdd: mov    r14d,0x10
0x004f5ce3: jmp    0x1404f5cf3
0x004f5ce5: mov    r14d,0x8
0x004f5ceb: jmp    0x1404f5cf3
0x004f5ced: mov    r14d,0x4
0x004f5cf3: test   r12d,r14d
0x004f5cf6: je     0x1404f5d80
0x004f5cfc: dec    ebx
0x004f5cfe: cmp    r14d,0x4
0x004f5d02: je     0x1404f5d3d
0x004f5d04: cmp    r14d,0x8
0x004f5d08: je     0x1404f5d2e
0x004f5d0a: cmp    r14d,0x10
0x004f5d0e: je     0x1404f5d1f
0x004f5d10: cmp    r14d,0x20
0x004f5d14: jne    0x1404f5d52
0x004f5d16: lea    rdx,[rip+0x116b553]        # 0x141661270 ; literal="shadowed"
0x004f5d1d: jmp    0x1404f5d44
0x004f5d1f: mov    r8d,0x17
0x004f5d25: lea    rdx,[rip+0x116b52c]        # 0x141661258 ; literal="performed in succession"
0x004f5d2c: jmp    0x1404f5d4a
0x004f5d2e: mov    r8d,0x17
0x004f5d34: lea    rdx,[rip+0x116b505]        # 0x141661240 ; literal="performed in retrograde"
0x004f5d3b: jmp    0x1404f5d4a
0x004f5d3d: lea    rdx,[rip+0x116b4ec]        # 0x141661230 ; literal="mirrored"
0x004f5d44: mov    r8d,0x8
0x004f5d4a: mov    rcx,r13
0x004f5d4d: call   0x140070fd0
0x004f5d52: cmp    ebx,0x2
0x004f5d55: jl     0x1404f5d66
0x004f5d57: mov    r8d,0x2
0x004f5d5d: lea    rdx,[rip+0x11095a4]        # 0x1415ff308 ; literal=", "
0x004f5d64: jmp    0x1404f5d78
0x004f5d66: cmp    ebx,0x1
0x004f5d69: jne    0x1404f5d80
0x004f5d6b: mov    r8d,0x5
0x004f5d71: lea    rdx,[rip+0x11095c8]        # 0x1415ff340 ; literal=" and "
0x004f5d78: mov    rcx,r13
0x004f5d7b: call   0x140070fd0
0x004f5d80: inc    edi
0x004f5d82: cmp    edi,0x4
0x004f5d85: jl     0x1404f5cc0
0x004f5d8b: mov    DWORD PTR [rsp+0x74],r14d
0x004f5d90: mov    r8d,0x11
0x004f5d96: lea    rdx,[rip+0x116a5eb]        # 0x141660388 ; literal=" by group members"
0x004f5d9d: mov    rcx,r13
0x004f5da0: call   0x140070fd0
0x004f5da5: mov    r14,QWORD PTR [rsp+0x40]
0x004f5daa: mov    r8d,0x3
0x004f5db0: lea    rdx,[rip+0x111e8c9]        # 0x141614680 ; literal=".  "
0x004f5db7: mov    rcx,r13
0x004f5dba: call   0x140070fd0
0x004f5dbf: mov    ebx,DWORD PTR [rsp+0x34]
0x004f5dc3: add    rsi,0x8
0x004f5dc7: inc    DWORD PTR [rsp+0x78]
0x004f5dcb: mov    r12,QWORD PTR [rsp+0x50]
0x004f5dd0: jmp    0x1404f3fd0
0x004f5dd5: call   QWORD PTR [rip+0x1105ced]        # 0x1415fbac8
0x004f5ddb: int3
0x004f5ddc: mov    rdx,QWORD PTR [rbp-0x78]
0x004f5de0: mov    r14,QWORD PTR [rbp+0xa0]
0x004f5de7: mov    rbx,r14
0x004f5dea: mov    rdi,rdx
0x004f5ded: sub    rdi,r15
0x004f5df0: sar    rdi,0x3
0x004f5df4: mov    r15,QWORD PTR [rbp+0xa8]
0x004f5dfb: mov    rsi,r15
0x004f5dfe: sub    rsi,r14
0x004f5e01: sar    rsi,0x3
0x004f5e05: mov    r12d,0xff
0x004f5e0b: nop    DWORD PTR [rax+rax*1+0x0]
0x004f5e10: mov    ecx,0x1
0x004f5e15: cmp    rbx,r15
0x004f5e18: je     0x1404f5e50
0x004f5e1a: mov    eax,ecx
0x004f5e1c: cmovb  eax,r12d
0x004f5e20: test   al,al
0x004f5e22: jns    0x1404f5e50
0x004f5e24: mov    r8d,0x3
0x004f5e2a: lea    rdx,[rip+0x111e27b]        # 0x1416140ac ; literal="[B]"
0x004f5e31: mov    rcx,r13
0x004f5e34: call   0x140070fd0
0x004f5e39: mov    r9d,edi
0x004f5e3c: mov    r8d,esi
0x004f5e3f: mov    rdx,QWORD PTR [rbx]
0x004f5e42: mov    rcx,r13
0x004f5e45: call   0x1404f1320
0x004f5e4a: add    rbx,0x8
0x004f5e4e: jmp    0x1404f5e10
0x004f5e50: mov    rdx,QWORD PTR [rbp-0x78]
0x004f5e54: mov    rbx,rdx
0x004f5e57: mov    r15,QWORD PTR [rbp-0x80]
0x004f5e5b: sub    rbx,r15
0x004f5e5e: sar    rbx,0x3
0x004f5e62: mov    rdi,QWORD PTR [rbp+0xa8]
0x004f5e69: sub    rdi,r14
0x004f5e6c: sar    rdi,0x3
0x004f5e70: cmp    r15,rdx
0x004f5e73: je     0x1404f5eb4
0x004f5e75: mov    eax,ecx
0x004f5e77: cmovb  eax,r12d
0x004f5e7b: test   al,al
0x004f5e7d: jns    0x1404f5eb4
0x004f5e7f: mov    r8d,0x3
0x004f5e85: lea    rdx,[rip+0x111e220]        # 0x1416140ac ; literal="[B]"
0x004f5e8c: mov    rcx,r13
0x004f5e8f: call   0x140070fd0
0x004f5e94: mov    r9d,ebx
0x004f5e97: mov    r8d,edi
0x004f5e9a: mov    rdx,QWORD PTR [r15]
0x004f5e9d: mov    rcx,r13
0x004f5ea0: call   0x1404f1320
0x004f5ea5: add    r15,0x8
0x004f5ea9: mov    rdx,QWORD PTR [rbp-0x78]
0x004f5ead: mov    ecx,0x1
0x004f5eb2: jmp    0x1404f5e70
0x004f5eb4: lea    rcx,[rbp-0x80]
0x004f5eb8: call   0x140068130
0x004f5ebd: nop
0x004f5ebe: lea    rcx,[rbp+0xa0]
0x004f5ec5: call   0x140068130
0x004f5eca: nop
0x004f5ecb: lea    rcx,[rbp+0x120]
0x004f5ed2: call   0x140070e10
0x004f5ed7: mov    rcx,QWORD PTR [rbp+0x140]
0x004f5ede: xor    rcx,rsp
0x004f5ee1: call   0x14154de00
0x004f5ee6: mov    rbx,QWORD PTR [rsp+0x2a0]
0x004f5eee: add    rsp,0x250
0x004f5ef5: pop    r15
0x004f5ef7: pop    r14
0x004f5ef9: pop    r13
0x004f5efb: pop    r12
0x004f5efd: pop    rdi
0x004f5efe: pop    rsi
0x004f5eff: pop    rbp
0x004f5f00: ret
0x004f5f01: nop    DWORD PTR [rax]
