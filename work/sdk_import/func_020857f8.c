/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_020857f8 */
void func_020857f8(const void * srcp, void * destp);
asm void func_020857f8 (register const void * srcp, register void * destp)
{
stmfd sp !, {r4}
ldmia r0, {r2}
mov r3, #0
and r4, r2, #0xF
mov r2, r2, lsr #8
cmp r4, #1
bne @63
@61
add r0, r0, #3
sub r1, r1, #1
@62
ldrb r4, [r0, #1] !
subs r2, r2, #1
add r3, r3, r4
strb r3, [r1, #1] !
bgt @62
b @65
@63
add r0, r0, #2
sub r1, r1, #2
@64
ldrh r4, [r0, #2] !
subs r2, r2, #2
add r3, r3, r4
strh r3, [r1, #2] !
bgt @64
@65
ldmfd sp !, {r4}
bx lr
}
