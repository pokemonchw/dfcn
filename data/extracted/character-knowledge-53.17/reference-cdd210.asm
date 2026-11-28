; reference PE:6aea05a1:02734000; written-work-style; RVA 0xcdd210..0xcdda40; code ends 0xcdd9f8
0x00cdd210: cmp    edx,0x11
0x00cdd213: ja     0x140cdd9f6
0x00cdd219: movsxd rax,edx
0x00cdd21c: lea    r10,[rip+0xffffffffff322ddd]        # 0x140000000
0x00cdd223: mov    edx,DWORD PTR [r10+rax*4+0xcdd9f8]
0x00cdd22b: add    rdx,r10
0x00cdd22e: jmp    rdx
0x00cdd230: cmp    r9d,0x14
0x00cdd234: jl     0x140cdd281
0x00cdd236: test   r8d,r8d
0x00cdd239: jne    0x140cdd24d
0x00cdd23b: mov    r8d,0x1d
0x00cdd241: lea    rdx,[rip+0xa454a8]        # 0x1417226f0 ; literal="rapidly shifts between topics"
0x00cdd248: jmp    0x140071040
0x00cdd24d: cmp    r8d,0x1
0x00cdd251: jne    0x140cdd265
0x00cdd253: mov    r8d,0x25
0x00cdd259: lea    rdx,[rip+0xa454b0]        # 0x141722710 ; literal="moves quickly from subject to subject"
0x00cdd260: jmp    0x140071040
0x00cdd265: cmp    r8d,0x2
0x00cdd269: jne    0x140cdd9f6
0x00cdd26f: mov    r8d,0x23
0x00cdd275: lea    rdx,[rip+0xa454bc]        # 0x141722738 ; literal="takes frequent interesting tangents"
0x00cdd27c: jmp    0x140071040
0x00cdd281: test   r8d,r8d
0x00cdd284: jne    0x140cdd298
0x00cdd286: mov    r8d,0x13
0x00cdd28c: lea    rdx,[rip+0xa454cd]        # 0x141722760 ; literal="hopelessly meanders"
0x00cdd293: jmp    0x140071040
0x00cdd298: cmp    r8d,0x1
0x00cdd29c: jne    0x140cdd2b0
0x00cdd29e: mov    r8d,0x11
0x00cdd2a4: lea    rdx,[rip+0xa454cd]        # 0x141722778 ; literal="meanders somewhat"
0x00cdd2ab: jmp    0x140071040
0x00cdd2b0: cmp    r8d,0x2
0x00cdd2b4: jne    0x140cdd9f6
0x00cdd2ba: mov    r8d,0x20
0x00cdd2c0: lea    rdx,[rip+0xa454c9]        # 0x141722790 ; literal="gets off track from time to time"
0x00cdd2c7: jmp    0x140071040
0x00cdd2cc: test   r8d,r8d
0x00cdd2cf: jne    0x140cdd2e3
0x00cdd2d1: mov    r8d,0x1e
0x00cdd2d7: lea    rdx,[rip+0xa454da]        # 0x1417227b8 ; literal="bubbles over with cheerfulness"
0x00cdd2de: jmp    0x140071040
0x00cdd2e3: cmp    r8d,0x1
0x00cdd2e7: jne    0x140cdd2fb
0x00cdd2e9: mov    r8d,0x11
0x00cdd2ef: lea    rdx,[rip+0xa454e2]        # 0x1417227d8 ; literal="is quite cheerful"
0x00cdd2f6: jmp    0x140071040
0x00cdd2fb: cmp    r8d,0x2
0x00cdd2ff: jne    0x140cdd9f6
0x00cdd305: mov    r8d,0x12
0x00cdd30b: lea    rdx,[rip+0xa454de]        # 0x1417227f0 ; literal="is fairly cheerful"
0x00cdd312: jmp    0x140071040
0x00cdd317: test   r8d,r8d
0x00cdd31a: jne    0x140cdd32e
0x00cdd31c: mov    r8d,0x16
0x00cdd322: lea    rdx,[rip+0xa454df]        # 0x141722808 ; literal="overflows with sadness"
0x00cdd329: jmp    0x140071040
0x00cdd32e: cmp    r8d,0x1
0x00cdd332: jne    0x140cdd346
0x00cdd334: mov    r8d,0xd
0x00cdd33a: lea    rdx,[rip+0xa454df]        # 0x141722820 ; literal="is depressing"
0x00cdd341: jmp    0x140071040
0x00cdd346: cmp    r8d,0x2
0x00cdd34a: jne    0x140cdd9f6
0x00cdd350: mov    r8d,0x19
0x00cdd356: lea    rdx,[rip+0xa454d3]        # 0x141722830 ; literal="has a touch of melancholy"
0x00cdd35d: jmp    0x140071040
0x00cdd362: cmp    r9d,0x14
0x00cdd366: jl     0x140cdd3b3
0x00cdd368: test   r8d,r8d
0x00cdd36b: jne    0x140cdd37f
0x00cdd36d: mov    r8d,0x17
0x00cdd373: lea    rdx,[rip+0xa454d6]        # 0x141722850 ; literal="is thoroughly organized"
0x00cdd37a: jmp    0x140071040
0x00cdd37f: cmp    r8d,0x1
0x00cdd383: jne    0x140cdd397
0x00cdd385: mov    r8d,0x14
0x00cdd38b: lea    rdx,[rip+0xa454d6]        # 0x141722868 ; literal="is clearly organized"
0x00cdd392: jmp    0x140071040
0x00cdd397: cmp    r8d,0x2
0x00cdd39b: jne    0x140cdd9f6
0x00cdd3a1: mov    r8d,0xc
0x00cdd3a7: lea    rdx,[rip+0xa454d2]        # 0x141722880 ; literal="is organized"
0x00cdd3ae: jmp    0x140071040
0x00cdd3b3: test   r8d,r8d
0x00cdd3b6: jne    0x140cdd3ca
0x00cdd3b8: mov    r8d,0x18
0x00cdd3be: lea    rdx,[rip+0xa454cb]        # 0x141722890 ; literal="is thoroughly mechanical"
0x00cdd3c5: jmp    0x140071040
0x00cdd3ca: cmp    r8d,0x1
0x00cdd3ce: jne    0x140cdd3e2
0x00cdd3d0: mov    r8d,0xd
0x00cdd3d6: lea    rdx,[rip+0xa454d3]        # 0x1417228b0 ; literal="is very rigid"
0x00cdd3dd: jmp    0x140071040
0x00cdd3e2: cmp    r8d,0x2
0x00cdd3e6: jne    0x140cdd9f6
0x00cdd3ec: mov    r8d,0xe
0x00cdd3f2: lea    rdx,[rip+0xa454c7]        # 0x1417228c0 ; literal="is a bit stiff"
0x00cdd3f9: jmp    0x140071040
0x00cdd3fe: test   r8d,r8d
0x00cdd401: jne    0x140cdd415
0x00cdd403: mov    r8d,0x15
0x00cdd409: lea    rdx,[rip+0xa454c0]        # 0x1417228d0 ; literal="is completely serious"
0x00cdd410: jmp    0x140071040
0x00cdd415: cmp    r8d,0x1
0x00cdd419: jne    0x140cdd42d
0x00cdd41b: mov    r8d,0x17
0x00cdd421: lea    rdx,[rip+0xa454c0]        # 0x1417228e8 ; literal="has a very serious tone"
0x00cdd428: jmp    0x140071040
0x00cdd42d: cmp    r8d,0x2
0x00cdd431: jne    0x140cdd9f6
0x00cdd437: mov    r8d,0x15
0x00cdd43d: lea    rdx,[rip+0xa454bc]        # 0x141722900 ; literal="is reasonably serious"
0x00cdd444: jmp    0x140071040
0x00cdd449: cmp    r9d,0x14
0x00cdd44d: jl     0x140cdd49a
0x00cdd44f: test   r8d,r8d
0x00cdd452: jne    0x140cdd466
0x00cdd454: mov    r8d,0x32
0x00cdd45a: lea    rdx,[rip+0xa454b7]        # 0x141722918 ; literal="artfully flashes through seemingly disjoint topics"
0x00cdd461: jmp    0x140071040
0x00cdd466: cmp    r8d,0x1
0x00cdd46a: jne    0x140cdd47e
0x00cdd46c: mov    r8d,0x2d
0x00cdd472: lea    rdx,[rip+0xa454d7]        # 0x141722950 ; literal="breaks sharply between topics with regularity"
0x00cdd479: jmp    0x140071040
0x00cdd47e: cmp    r8d,0x2
0x00cdd482: jne    0x140cdd9f6
0x00cdd488: mov    r8d,0x2c
0x00cdd48e: lea    rdx,[rip+0xa454eb]        # 0x141722980 ; literal="has some particularly crisp changes in topic"
0x00cdd495: jmp    0x140071040
0x00cdd49a: test   r8d,r8d
0x00cdd49d: jne    0x140cdd4b1
0x00cdd49f: mov    r8d,0x15
0x00cdd4a5: lea    rdx,[rip+0xa45504]        # 0x1417229b0 ; literal="is utterly disjointed"
0x00cdd4ac: jmp    0x140071040
0x00cdd4b1: cmp    r8d,0x1
0x00cdd4b5: jne    0x140cdd4c9
0x00cdd4b7: mov    r8d,0x12
0x00cdd4bd: lea    rdx,[rip+0xa45504]        # 0x1417229c8 ; literal="skips around a lot"
0x00cdd4c4: jmp    0x140071040
0x00cdd4c9: cmp    r8d,0x2
0x00cdd4cd: jne    0x140cdd9f6
0x00cdd4d3: mov    r8d,0x23
0x00cdd4d9: lea    rdx,[rip+0xa45500]        # 0x1417229e0 ; literal="occasionally changes topic abruptly"
0x00cdd4e0: jmp    0x140071040
0x00cdd4e5: cmp    r9d,0x14
0x00cdd4e9: jl     0x140cdd536
0x00cdd4eb: test   r8d,r8d
0x00cdd4ee: jne    0x140cdd502
0x00cdd4f0: mov    r8d,0x35
0x00cdd4f6: lea    rdx,[rip+0xa4550b]        # 0x141722a08 ; literal="uses only artful words and phrases selected with care"
0x00cdd4fd: jmp    0x140071040
0x00cdd502: cmp    r8d,0x1
0x00cdd506: jne    0x140cdd51a
0x00cdd508: mov    r8d,0x20
0x00cdd50e: lea    rdx,[rip+0xa4552b]        # 0x141722a40 ; literal="is throughout ornate and refined"
0x00cdd515: jmp    0x140071040
0x00cdd51a: cmp    r8d,0x2
0x00cdd51e: jne    0x140cdd9f6
0x00cdd524: mov    r8d,0x33
0x00cdd52a: lea    rdx,[rip+0xa45537]        # 0x141722a68 ; literal="has rare but particularly exquisite turns of phrase"
0x00cdd531: jmp    0x140071040
0x00cdd536: test   r8d,r8d
0x00cdd539: jne    0x140cdd54d
0x00cdd53b: mov    r8d,0x15
0x00cdd541: lea    rdx,[rip+0xa45558]        # 0x141722aa0 ; literal="is excessively ornate"
0x00cdd548: jmp    0x140071040
0x00cdd54d: cmp    r8d,0x1
0x00cdd551: jne    0x140cdd565
0x00cdd553: mov    r8d,0xf
0x00cdd559: lea    rdx,[rip+0xa45558]        # 0x141722ab8 ; literal="is quite florid"
0x00cdd560: jmp    0x140071040
0x00cdd565: cmp    r8d,0x2
0x00cdd569: jne    0x140cdd9f6
0x00cdd56f: mov    r8d,0x11
0x00cdd575: lea    rdx,[rip+0xa4554c]        # 0x141722ac8 ; literal="is somewhat showy"
0x00cdd57c: jmp    0x140071040
0x00cdd581: test   r8d,r8d
0x00cdd584: jne    0x140cdd598
0x00cdd586: mov    r8d,0x1b
0x00cdd58c: lea    rdx,[rip+0xa4554d]        # 0x141722ae0 ; literal="drives forward relentlessly"
0x00cdd593: jmp    0x140071040
0x00cdd598: cmp    r8d,0x1
0x00cdd59c: jne    0x140cdd5b0
0x00cdd59e: mov    r8d,0x10
0x00cdd5a4: lea    rdx,[rip+0xa45555]        # 0x141722b00 ; literal="is full of force"
0x00cdd5ab: jmp    0x140071040
0x00cdd5b0: cmp    r8d,0x2
0x00cdd5b4: jne    0x140cdd9f6
0x00cdd5ba: mov    r8d,0xb
0x00cdd5c0: lea    rdx,[rip+0xa45551]        # 0x141722b18 ; literal="is forceful"
0x00cdd5c7: jmp    0x140071040
0x00cdd5cc: cmp    r9d,0x14
0x00cdd5d0: jl     0x140cdd61d
0x00cdd5d2: test   r8d,r8d
0x00cdd5d5: jne    0x140cdd5e9
0x00cdd5d7: mov    r8d,0x1a
0x00cdd5dd: lea    rdx,[rip+0xa45544]        # 0x141722b28 ; literal="is a comedy treasure trove"
0x00cdd5e4: jmp    0x140071040
0x00cdd5e9: cmp    r8d,0x1
0x00cdd5ed: jne    0x140cdd601
0x00cdd5ef: mov    r8d,0x11
0x00cdd5f5: lea    rdx,[rip+0xa4554c]        # 0x141722b48 ; literal="is quite humorous"
0x00cdd5fc: jmp    0x140071040
0x00cdd601: cmp    r8d,0x2
0x00cdd605: jne    0x140cdd9f6
0x00cdd60b: mov    r8d,0x14
0x00cdd611: lea    rdx,[rip+0xa45548]        # 0x141722b60 ; literal="has a touch of humor"
0x00cdd618: jmp    0x140071040
0x00cdd61d: test   r8d,r8d
0x00cdd620: jne    0x140cdd634
0x00cdd622: mov    r8d,0x2f
0x00cdd628: lea    rdx,[rip+0xa45549]        # 0x141722b78 ; literal="is littered with terrible jokes inartfully told"
0x00cdd62f: jmp    0x140071040
0x00cdd634: cmp    r8d,0x1
0x00cdd638: jne    0x140cdd64c
0x00cdd63a: mov    r8d,0x19
0x00cdd640: lea    rdx,[rip+0xa45e59]        # 0x1417234a0 ; literal="has poorly-executed humor"
0x00cdd647: jmp    0x140071040
0x00cdd64c: cmp    r8d,0x2
0x00cdd650: jne    0x140cdd9f6
0x00cdd656: mov    r8d,0x24
0x00cdd65c: lea    rdx,[rip+0xa45e5d]        # 0x1417234c0 ; literal="tries and fails to be funny at times"
0x00cdd663: jmp    0x140071040
0x00cdd668: cmp    r9d,0x14
0x00cdd66c: jl     0x140cdd6b9
0x00cdd66e: test   r8d,r8d
0x00cdd671: jne    0x140cdd685
0x00cdd673: mov    r8d,0x50
0x00cdd679: lea    rdx,[rip+0xa45e70]        # 0x1417234f0 ; literal="is artfully suffused with what would otherwise be childish and immature material"
0x00cdd680: jmp    0x140071040
0x00cdd685: cmp    r8d,0x1
0x00cdd689: jne    0x140cdd69d
0x00cdd68b: mov    r8d,0x4c
0x00cdd691: lea    rdx,[rip+0xa45eb8]        # 0x141723550 ; literal="contains a deft use throughout of what might be considered immature material"
0x00cdd698: jmp    0x140071040
0x00cdd69d: cmp    r8d,0x2
0x00cdd6a1: jne    0x140cdd9f6
0x00cdd6a7: mov    r8d,0x3f
0x00cdd6ad: lea    rdx,[rip+0xa45eec]        # 0x1417235a0 ; literal="manages an artful inclusion here and there of childish material"
0x00cdd6b4: jmp    0x140071040
0x00cdd6b9: test   r8d,r8d
0x00cdd6bc: jne    0x140cdd6d0
0x00cdd6be: mov    r8d,0x15
0x00cdd6c4: lea    rdx,[rip+0xa45f15]        # 0x1417235e0 ; literal="is absolutely puerile"
0x00cdd6cb: jmp    0x140071040
0x00cdd6d0: cmp    r8d,0x1
0x00cdd6d4: jne    0x140cdd6e8
0x00cdd6d6: mov    r8d,0x10
0x00cdd6dc: lea    rdx,[rip+0xa45f15]        # 0x1417235f8 ; literal="is very childish"
0x00cdd6e3: jmp    0x140071040
0x00cdd6e8: cmp    r8d,0x2
0x00cdd6ec: jne    0x140cdd9f6
0x00cdd6f2: mov    r8d,0x11
0x00cdd6f8: lea    rdx,[rip+0xa45f11]        # 0x141723610 ; literal="is a bit immature"
0x00cdd6ff: jmp    0x140071040
0x00cdd704: cmp    r9d,0x14
0x00cdd708: jl     0x140cdd755
0x00cdd70a: test   r8d,r8d
0x00cdd70d: jne    0x140cdd721
0x00cdd70f: mov    r8d,0x20
0x00cdd715: lea    rdx,[rip+0xa45f0c]        # 0x141723628 ; literal="indulges the author's every whim"
0x00cdd71c: jmp    0x140071040
0x00cdd721: cmp    r8d,0x1
0x00cdd725: jne    0x140cdd739
0x00cdd727: mov    r8d,0x26
0x00cdd72d: lea    rdx,[rip+0xa45f1c]        # 0x141723650 ; literal="artfully indulges the author's fancies"
0x00cdd734: jmp    0x140071040
0x00cdd739: cmp    r8d,0x2
0x00cdd73d: jne    0x140cdd9f6
0x00cdd743: mov    r8d,0x38
0x00cdd749: lea    rdx,[rip+0xa45f28]        # 0x141723678 ; literal="contains some asides related to the author's preferences"
0x00cdd750: jmp    0x140071040
0x00cdd755: test   r8d,r8d
0x00cdd758: jne    0x140cdd76c
0x00cdd75a: lea    rdx,[rip+0xa45f57]        # 0x1417236b8 ; literal="is stunningly self-indulgent"
0x00cdd761: mov    r8d,0x1c
0x00cdd767: jmp    0x140071040
0x00cdd76c: cmp    r8d,0x1
0x00cdd770: jne    0x140cdd784
0x00cdd772: mov    r8d,0x17
0x00cdd778: lea    rdx,[rip+0xa45f59]        # 0x1417236d8 ; literal="is quite self-indulgent"
0x00cdd77f: jmp    0x140071040
0x00cdd784: cmp    r8d,0x2
0x00cdd788: jne    0x140cdd9f6
0x00cdd78e: mov    r8d,0x1a
0x00cdd794: lea    rdx,[rip+0xa45f55]        # 0x1417236f0 ; literal="is somewhat self-indulgent"
0x00cdd79b: jmp    0x140071040
0x00cdd7a0: test   r8d,r8d
0x00cdd7a3: jne    0x140cdd7b7
0x00cdd7a5: mov    r8d,0x32
0x00cdd7ab: lea    rdx,[rip+0xa45f5e]        # 0x141723710 ; literal="could only have been produced by a merciful spirit"
0x00cdd7b2: jmp    0x140071040
0x00cdd7b7: cmp    r8d,0x1
0x00cdd7bb: jne    0x140cdd7cf
0x00cdd7bd: mov    r8d,0x11
0x00cdd7c3: lea    rdx,[rip+0xa45f7e]        # 0x141723748 ; literal="is quite touching"
0x00cdd7ca: jmp    0x140071040
0x00cdd7cf: cmp    r8d,0x2
0x00cdd7d3: jne    0x140cdd9f6
0x00cdd7d9: mov    r8d,0x1a
0x00cdd7df: lea    rdx,[rip+0xa45f7a]        # 0x141723760 ; literal="shows a hint of tenderness"
0x00cdd7e6: jmp    0x140071040
0x00cdd7eb: test   r8d,r8d
0x00cdd7ee: jne    0x140cdd802
0x00cdd7f0: mov    r8d,0x2a
0x00cdd7f6: lea    rdx,[rip+0xa45f83]        # 0x141723780 ; literal="is clear evidence of a compassionate being"
0x00cdd7fd: jmp    0x140071040
0x00cdd802: cmp    r8d,0x1
0x00cdd806: jne    0x140cdd81a
0x00cdd808: mov    r8d,0x15
0x00cdd80e: lea    rdx,[rip+0xa45f9b]        # 0x1417237b0 ; literal="is very compassionate"
0x00cdd815: jmp    0x140071040
0x00cdd81a: cmp    r8d,0x2
0x00cdd81e: jne    0x140cdd9f6
0x00cdd824: mov    r8d,0x2c
0x00cdd82a: lea    rdx,[rip+0xa45f97]        # 0x1417237c8 ; literal="gives a feeling of compassion here and there"
0x00cdd831: jmp    0x140071040
0x00cdd836: test   r8d,r8d
0x00cdd839: jne    0x140cdd84d
0x00cdd83b: mov    r8d,0x17
0x00cdd841: lea    rdx,[rip+0xa45fb0]        # 0x1417237f8 ; literal="is as vicious as can be"
0x00cdd848: jmp    0x140071040
0x00cdd84d: cmp    r8d,0x1
0x00cdd851: jne    0x140cdd865
0x00cdd853: mov    r8d,0xe
0x00cdd859: lea    rdx,[rip+0xa45fb0]        # 0x141723810 ; literal="is quite cruel"
0x00cdd860: jmp    0x140071040
0x00cdd865: cmp    r8d,0x2
0x00cdd869: jne    0x140cdd9f6
0x00cdd86f: mov    r8d,0x1f
0x00cdd875: lea    rdx,[rip+0xa45fa4]        # 0x141723820 ; literal="has a hint of viciousness to it"
0x00cdd87c: jmp    0x140071040
0x00cdd881: test   r8d,r8d
0x00cdd884: jne    0x140cdd898
0x00cdd886: mov    r8d,0x1a
0x00cdd88c: lea    rdx,[rip+0xa45fad]        # 0x141723840 ; literal="is a monument to concision"
0x00cdd893: jmp    0x140071040
0x00cdd898: cmp    r8d,0x1
0x00cdd89c: jne    0x140cdd8b0
0x00cdd89e: mov    r8d,0xf
0x00cdd8a4: lea    rdx,[rip+0xa45fb5]        # 0x141723860 ; literal="is very concise"
0x00cdd8ab: jmp    0x140071040
0x00cdd8b0: cmp    r8d,0x2
0x00cdd8b4: jne    0x140cdd9f6
0x00cdd8ba: mov    r8d,0xf
0x00cdd8c0: lea    rdx,[rip+0xa45fa9]        # 0x141723870 ; literal="is fairly crisp"
0x00cdd8c7: jmp    0x140071040
0x00cdd8cc: test   r8d,r8d
0x00cdd8cf: jne    0x140cdd8e3
0x00cdd8d1: mov    r8d,0x18
0x00cdd8d7: lea    rdx,[rip+0xa45fa2]        # 0x141723880 ; literal="is a pit of bitter scorn"
0x00cdd8de: jmp    0x140071040
0x00cdd8e3: cmp    r8d,0x1
0x00cdd8e7: jne    0x140cdd8fb
0x00cdd8e9: mov    r8d,0x18
0x00cdd8ef: lea    rdx,[rip+0xa45faa]        # 0x1417238a0 ; literal="is quite mocking in tone"
0x00cdd8f6: jmp    0x140071040
0x00cdd8fb: cmp    r8d,0x2
0x00cdd8ff: jne    0x140cdd9f6
0x00cdd905: mov    r8d,0x25
0x00cdd90b: lea    rdx,[rip+0xa45fae]        # 0x1417238c0 ; literal="contains the occasional biting remark"
0x00cdd912: jmp    0x140071040
0x00cdd917: test   r8d,r8d
0x00cdd91a: jne    0x140cdd92e
0x00cdd91c: mov    r8d,0x28
0x00cdd922: lea    rdx,[rip+0xa45fbf]        # 0x1417238e8 ; literal="is a reservoir of amusingly clever quips"
0x00cdd929: jmp    0x140071040
0x00cdd92e: cmp    r8d,0x1
0x00cdd932: jne    0x140cdd946
0x00cdd934: mov    r8d,0x15
0x00cdd93a: lea    rdx,[rip+0xa45fd7]        # 0x141723918 ; literal="is refreshingly witty"
0x00cdd941: jmp    0x140071040
0x00cdd946: cmp    r8d,0x2
0x00cdd94a: jne    0x140cdd9f6
0x00cdd950: mov    r8d,0x1d
0x00cdd956: lea    rdx,[rip+0xa45fd3]        # 0x141723930 ; literal="has its moments of cleverness"
0x00cdd95d: jmp    0x140071040
0x00cdd962: cmp    r9d,0x14
0x00cdd966: jl     0x140cdd9af
0x00cdd968: test   r8d,r8d
0x00cdd96b: jne    0x140cdd97f
0x00cdd96d: mov    r8d,0x1d
0x00cdd973: lea    rdx,[rip+0xa45fd6]        # 0x141723950 ; literal="is an awe-inspiring wild rant"
0x00cdd97a: jmp    0x140071040
0x00cdd97f: cmp    r8d,0x1
0x00cdd983: jne    0x140cdd997
0x00cdd985: mov    r8d,0x19
0x00cdd98b: lea    rdx,[rip+0xa45fde]        # 0x141723970 ; literal="careens forward as a rant"
0x00cdd992: jmp    0x140071040
0x00cdd997: cmp    r8d,0x2
0x00cdd99b: jne    0x140cdd9f6
0x00cdd99d: mov    r8d,0x25
0x00cdd9a3: lea    rdx,[rip+0xa45fe6]        # 0x141723990 ; literal="tumbles out almost as a rant at times"
0x00cdd9aa: jmp    0x140071040
0x00cdd9af: test   r8d,r8d
0x00cdd9b2: jne    0x140cdd9c6
0x00cdd9b4: mov    r8d,0x1d
0x00cdd9ba: lea    rdx,[rip+0xa45ff7]        # 0x1417239b8 ; literal="is a completely unhinged rant"
0x00cdd9c1: jmp    0x140071040
0x00cdd9c6: cmp    r8d,0x1
0x00cdd9ca: jne    0x140cdd9de
0x00cdd9cc: mov    r8d,0x16
0x00cdd9d2: lea    rdx,[rip+0xa45fff]        # 0x1417239d8 ; literal="is a rant more or less"
0x00cdd9d9: jmp    0x140071040
0x00cdd9de: cmp    r8d,0x2
0x00cdd9e2: jne    0x140cdd9f6
0x00cdd9e4: lea    rdx,[rip+0xa46005]        # 0x1417239f0 ; literal="descends to a rant in places"
0x00cdd9eb: mov    r8d,0x1c
0x00cdd9f1: jmp    0x140071040
0x00cdd9f6: ret
0x00cdd9f7: nop
