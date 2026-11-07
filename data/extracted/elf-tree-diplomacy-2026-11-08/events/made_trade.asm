140103140: movzx  r9d,WORD PTR [rcx+0x28]
140103145: mov    eax,DWORD PTR [rcx+0x2c]
140103148: cmp    r9w,0xd
14010314d: jne    0x14010316f
14010314f: cmp    edx,eax
140103151: jne    0x14010315f
140103153: cmp    r8d,DWORD PTR [rcx+0x30]
140103157: jne    0x14010315f
140103159: mov    eax,0xfffffffb
14010315e: ret
14010315f: cmp    r8d,eax
140103162: jne    0x1401031ae
140103164: cmp    edx,DWORD PTR [rcx+0x30]
140103167: jne    0x1401031ae
140103169: mov    eax,0xfffffff6
14010316e: ret
14010316f: cmp    r9w,0x10
140103174: jne    0x140103190
140103176: cmp    edx,eax
140103178: jne    0x140103180
14010317a: cmp    r8d,DWORD PTR [rcx+0x30]
14010317e: je     0x14010318a
140103180: cmp    r8d,eax
140103183: jne    0x1401031ae
140103185: cmp    edx,DWORD PTR [rcx+0x30]
140103188: jne    0x1401031ae
14010318a: mov    eax,0x14
14010318f: ret
140103190: cmp    edx,eax
140103192: jne    0x1401031a0
140103194: cmp    r8d,DWORD PTR [rcx+0x30]
140103198: jne    0x1401031a0
14010319a: mov    eax,0x1
14010319f: ret
1401031a0: cmp    r8d,eax
1401031a3: jne    0x1401031ae
1401031a5: xor    eax,eax
1401031a7: cmp    edx,DWORD PTR [rcx+0x30]
1401031aa: sete   al
1401031ad: ret
1401031ae: xor    eax,eax
1401031b0: ret