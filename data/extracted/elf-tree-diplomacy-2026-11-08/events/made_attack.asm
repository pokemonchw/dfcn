1401030f0: cmp    WORD PTR [rcx+0x28],0xd
1401030f5: mov    eax,DWORD PTR [rcx+0x2c]
1401030f8: jne    0x140103114
1401030fa: cmp    edx,eax
1401030fc: jne    0x140103104
1401030fe: cmp    r8d,DWORD PTR [rcx+0x30]
140103102: je     0x14010310e
140103104: cmp    r8d,eax
140103107: jne    0x140103134
140103109: cmp    edx,DWORD PTR [rcx+0x30]
14010310c: jne    0x140103134
14010310e: mov    eax,0x5
140103113: ret
140103114: cmp    edx,eax
140103116: jne    0x140103124
140103118: cmp    r8d,DWORD PTR [rcx+0x30]
14010311c: jne    0x140103124
14010311e: mov    eax,0xffffffff
140103123: ret
140103124: cmp    r8d,eax
140103127: jne    0x140103134
140103129: xor    eax,eax
14010312b: cmp    edx,DWORD PTR [rcx+0x30]
14010312e: setne  al
140103131: dec    eax
140103133: ret
140103134: xor    eax,eax
140103136: ret