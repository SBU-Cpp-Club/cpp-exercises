
exercise-1.10-dw.ex:     file format elf64-x86-64


Disassembly of section .init:

0000000000400590 <_init>:
  400590:	sub    rsp,0x8
  400594:	mov    rax,QWORD PTR [rip+0x200a5d]        # 600ff8 <_DYNAMIC+0x200>
  40059b:	test   rax,rax
  40059e:	je     4005a5 <_init+0x15>
  4005a0:	call   400610 <_ZNSt8ios_base4InitD1Ev@plt+0x10>
  4005a5:	add    rsp,0x8
  4005a9:	ret    

Disassembly of section .plt:

00000000004005b0 <printf@plt-0x10>:
  4005b0:	push   QWORD PTR [rip+0x200a52]        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4005b6:	jmp    QWORD PTR [rip+0x200a54]        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4005bc:	nop    DWORD PTR [rax+0x0]

00000000004005c0 <printf@plt>:
  4005c0:	jmp    QWORD PTR [rip+0x200a52]        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4005c6:	push   0x0
  4005cb:	jmp    4005b0 <_init+0x20>

00000000004005d0 <_ZNSt8ios_base4InitC1Ev@plt>:
  4005d0:	jmp    QWORD PTR [rip+0x200a4a]        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  4005d6:	push   0x1
  4005db:	jmp    4005b0 <_init+0x20>

00000000004005e0 <__libc_start_main@plt>:
  4005e0:	jmp    QWORD PTR [rip+0x200a42]        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  4005e6:	push   0x2
  4005eb:	jmp    4005b0 <_init+0x20>

00000000004005f0 <__cxa_atexit@plt>:
  4005f0:	jmp    QWORD PTR [rip+0x200a3a]        # 601030 <_GLOBAL_OFFSET_TABLE_+0x30>
  4005f6:	push   0x3
  4005fb:	jmp    4005b0 <_init+0x20>

0000000000400600 <_ZNSt8ios_base4InitD1Ev@plt>:
  400600:	jmp    QWORD PTR [rip+0x200a32]        # 601038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400606:	push   0x4
  40060b:	jmp    4005b0 <_init+0x20>

Disassembly of section .plt.got:

0000000000400610 <.plt.got>:
  400610:	jmp    QWORD PTR [rip+0x2009e2]        # 600ff8 <_DYNAMIC+0x200>
  400616:	xchg   ax,ax

Disassembly of section .text:

0000000000400620 <_start>:
  400620:	xor    ebp,ebp
  400622:	mov    r9,rdx
  400625:	pop    rsi
  400626:	mov    rdx,rsp
  400629:	and    rsp,0xfffffffffffffff0
  40062d:	push   rax
  40062e:	push   rsp
  40062f:	mov    r8,0x400810
  400636:	mov    rcx,0x4007a0
  40063d:	mov    rdi,0x400716
  400644:	call   4005e0 <__libc_start_main@plt>
  400649:	hlt    
  40064a:	nop    WORD PTR [rax+rax*1+0x0]

0000000000400650 <deregister_tm_clones>:
  400650:	mov    eax,0x60104f
  400655:	push   rbp
  400656:	sub    rax,0x601048
  40065c:	cmp    rax,0xe
  400660:	mov    rbp,rsp
  400663:	jbe    400680 <deregister_tm_clones+0x30>
  400665:	mov    eax,0x0
  40066a:	test   rax,rax
  40066d:	je     400680 <deregister_tm_clones+0x30>
  40066f:	pop    rbp
  400670:	mov    edi,0x601048
  400675:	jmp    rax
  400677:	nop    WORD PTR [rax+rax*1+0x0]
  400680:	pop    rbp
  400681:	ret    
  400682:	nop    DWORD PTR [rax+0x0]
  400686:	nop    WORD PTR cs:[rax+rax*1+0x0]

0000000000400690 <register_tm_clones>:
  400690:	mov    esi,0x601048
  400695:	push   rbp
  400696:	sub    rsi,0x601048
  40069d:	sar    rsi,0x3
  4006a1:	mov    rbp,rsp
  4006a4:	mov    rax,rsi
  4006a7:	shr    rax,0x3f
  4006ab:	add    rsi,rax
  4006ae:	sar    rsi,1
  4006b1:	je     4006c8 <register_tm_clones+0x38>
  4006b3:	mov    eax,0x0
  4006b8:	test   rax,rax
  4006bb:	je     4006c8 <register_tm_clones+0x38>
  4006bd:	pop    rbp
  4006be:	mov    edi,0x601048
  4006c3:	jmp    rax
  4006c5:	nop    DWORD PTR [rax]
  4006c8:	pop    rbp
  4006c9:	ret    
  4006ca:	nop    WORD PTR [rax+rax*1+0x0]

00000000004006d0 <__do_global_dtors_aux>:
  4006d0:	cmp    BYTE PTR [rip+0x20096d],0x0        # 601044 <_edata>
  4006d7:	jne    4006ea <__do_global_dtors_aux+0x1a>
  4006d9:	push   rbp
  4006da:	mov    rbp,rsp
  4006dd:	call   400650 <deregister_tm_clones>
  4006e2:	pop    rbp
  4006e3:	mov    BYTE PTR [rip+0x20095a],0x1        # 601044 <_edata>
  4006ea:	repz ret 
  4006ec:	nop    DWORD PTR [rax+0x0]

00000000004006f0 <frame_dummy>:
  4006f0:	mov    edi,0x600df0
  4006f5:	cmp    QWORD PTR [rdi],0x0
  4006f9:	jne    400700 <frame_dummy+0x10>
  4006fb:	jmp    400690 <register_tm_clones>
  4006fd:	nop    DWORD PTR [rax]
  400700:	mov    eax,0x0
  400705:	test   rax,rax
  400708:	je     4006fb <frame_dummy+0xb>
  40070a:	push   rbp
  40070b:	mov    rbp,rsp
  40070e:	call   rax
  400710:	pop    rbp
  400711:	jmp    400690 <register_tm_clones>

0000000000400716 <main>:
  400716:	push   rbp
  400717:	mov    rbp,rsp
  40071a:	sub    rsp,0x10
  40071e:	mov    DWORD PTR [rbp-0x4],0xa
  400725:	cmp    DWORD PTR [rbp-0x4],0x0
  400729:	js     400745 <main+0x2f>
  40072b:	mov    eax,DWORD PTR [rbp-0x4]
  40072e:	mov    esi,eax
  400730:	mov    edi,0x400831
  400735:	mov    eax,0x0
  40073a:	call   4005c0 <printf@plt>
  40073f:	sub    DWORD PTR [rbp-0x4],0x1
  400743:	jmp    400725 <main+0xf>
  400745:	mov    eax,0x0
  40074a:	leave  
  40074b:	ret    

000000000040074c <_Z41__static_initialization_and_destruction_0ii>:
  40074c:	push   rbp
  40074d:	mov    rbp,rsp
  400750:	sub    rsp,0x10
  400754:	mov    DWORD PTR [rbp-0x4],edi
  400757:	mov    DWORD PTR [rbp-0x8],esi
  40075a:	cmp    DWORD PTR [rbp-0x4],0x1
  40075e:	jne    400787 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  400760:	cmp    DWORD PTR [rbp-0x8],0xffff
  400767:	jne    400787 <_Z41__static_initialization_and_destruction_0ii+0x3b>
  400769:	mov    edi,0x601045
  40076e:	call   4005d0 <_ZNSt8ios_base4InitC1Ev@plt>
  400773:	mov    edx,0x400828
  400778:	mov    esi,0x601045
  40077d:	mov    edi,0x400600
  400782:	call   4005f0 <__cxa_atexit@plt>
  400787:	nop
  400788:	leave  
  400789:	ret    

000000000040078a <_GLOBAL__sub_I_main>:
  40078a:	push   rbp
  40078b:	mov    rbp,rsp
  40078e:	mov    esi,0xffff
  400793:	mov    edi,0x1
  400798:	call   40074c <_Z41__static_initialization_and_destruction_0ii>
  40079d:	pop    rbp
  40079e:	ret    
  40079f:	nop

00000000004007a0 <__libc_csu_init>:
  4007a0:	push   r15
  4007a2:	push   r14
  4007a4:	mov    r15d,edi
  4007a7:	push   r13
  4007a9:	push   r12
  4007ab:	lea    r12,[rip+0x200626]        # 600dd8 <__frame_dummy_init_array_entry>
  4007b2:	push   rbp
  4007b3:	lea    rbp,[rip+0x20062e]        # 600de8 <__init_array_end>
  4007ba:	push   rbx
  4007bb:	mov    r14,rsi
  4007be:	mov    r13,rdx
  4007c1:	sub    rbp,r12
  4007c4:	sub    rsp,0x8
  4007c8:	sar    rbp,0x3
  4007cc:	call   400590 <_init>
  4007d1:	test   rbp,rbp
  4007d4:	je     4007f6 <__libc_csu_init+0x56>
  4007d6:	xor    ebx,ebx
  4007d8:	nop    DWORD PTR [rax+rax*1+0x0]
  4007e0:	mov    rdx,r13
  4007e3:	mov    rsi,r14
  4007e6:	mov    edi,r15d
  4007e9:	call   QWORD PTR [r12+rbx*8]
  4007ed:	add    rbx,0x1
  4007f1:	cmp    rbp,rbx
  4007f4:	jne    4007e0 <__libc_csu_init+0x40>
  4007f6:	add    rsp,0x8
  4007fa:	pop    rbx
  4007fb:	pop    rbp
  4007fc:	pop    r12
  4007fe:	pop    r13
  400800:	pop    r14
  400802:	pop    r15
  400804:	ret    
  400805:	nop
  400806:	nop    WORD PTR cs:[rax+rax*1+0x0]

0000000000400810 <__libc_csu_fini>:
  400810:	repz ret 

Disassembly of section .fini:

0000000000400814 <_fini>:
  400814:	sub    rsp,0x8
  400818:	add    rsp,0x8
  40081c:	ret    
