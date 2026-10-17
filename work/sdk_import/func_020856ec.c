/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_020856ec */
void func_020856ec(const void * srcp, void * destp);
asm void func_020856ec (register const void * srcp, register void * destp)
{
stmfd sp !, {r4, r5, r7}
ldmia r0 !, {r3}
mov r7, r3, lsr #8
@41:
cmp r7, #0
ble @45
ldrb r4, [r0], #1
ands r2, r4, #0x7f
tst r4, #0x80
bne @43
add r2, r2, #1
sub r7, r7, r2
@42:
ldrb r3, [r0], #1
swpb r3, r3, [r1]
add r1, r1, #1
subs r2, r2, #1
bgt @42
b @41
@43:
add r2, r2, #3
sub r7, r7, r2
ldrb r5, [r0], #1
@44:
swpb r4, r5, [r1]
add r1, r1, #1
subs r2, r2, #1
bgt @44
b @41
@45:
ldmfd sp !, {r4, r5, r7}
bx lr
}
