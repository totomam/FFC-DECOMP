/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_02085858 */
void func_02085858(const void * srcp, void * destp);
asm void func_02085858 (register const void * srcp, register void * destp)
{
stmfd sp !, {r4, r5}
ldmia r0, {r2}
mov r3, #0
and r4, r2, #0xF
mov r2, r2, lsr #8
cmp r4, #1
bne @63
@61
add r0, r0, #2
sub r1, r1, #2
@62
ldrh r4, [r0, #2] !
sub r2, r2, #2
add r3, r3, r4
and r5, r3, #0xFF
add r3, r3, r4, lsr #8
add r5, r5, r3, lsl #8
strh r5, [r1, #2] !
cmp r2, #1
bgt @62
bne @65
ldrh r4, [r0, #2] !
add r3, r3, r4
and r5, r3, #0xFF
strh r5, [r1, #2] !
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
ldmfd sp !, {r4, r5}
bx lr
}
