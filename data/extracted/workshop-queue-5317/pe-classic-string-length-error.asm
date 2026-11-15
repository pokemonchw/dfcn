; classic; PE:6aea11a5:0272d000; 4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f; string-length-error; complete unwind owner
0x66e50: sub    rsp,0x28
0x66e54: lea    rcx,[rip+0x159731d]        # 0x1415fe178 ; cstring='string too long'
0x66e5b: call   QWORD PTR [rip+0x15945ff]        # 0x1415fb460
0x66e61: int3
