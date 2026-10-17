/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_02085614 */
void func_02085614(const void * srcp, void * destp);
asm void func_02085614 (register const void * srcp, register void * destp)
{
stmfd sp !, {r4 - r11, lr}
sub sp, sp, #4
add r2, r0, #4
add r7, r2, #1
ldrb r10, [r0, #0]
and r4, r10, #0xf
mov r3, #0
mov r14, #0
and r10, r4, #7
add r11, r10, #4
str r11, [sp, #0]
ldr r10, [r0, #0]
mov r12, r10, lsr #8
ldrb r10, [r2, #0]
add r10, r10, #1
add r0, r2, r10, lsl #1
mov r2, r7
@11:
cmp r12, #0
ble @14
mov r8, #32
ldr r5, [r0], #4
@12:
subs r8, r8, #1
blt @11
mov r10, #1
and r9, r10, r5, lsr #31
ldrb r6, [r2, #0]
mov r6, r6, lsl r9
mov r10, r2, lsr #1
mov r10, r10, lsl #1
ldrb r11, [r2, #0]
and r11, r11, #0x3f
add r11, r11, #1
add r10, r10, r11, lsl #1
add r2, r10, r9
tst r6, #0x80
beq @13
mov r3, r3, lsr r4
ldrb r10, [r2, #0]
rsb r11, r4, #32
orr r3, r3, r10, lsl r11
mov r2, r7
add r14, r14, #1
ldr r11, [sp, #0]
cmp r14, r11
streq r3, [r1], #4
subeq r12, r12, #4
moveq r14, #0
@13:
cmp r12, #0
movgt r5, r5, lsl #1
bgt @12
b @11
@14:
add sp, sp, #4
ldmfd sp !, {r4 - r11, lr}
bx lr
}
