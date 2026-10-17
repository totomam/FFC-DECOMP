/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_02085410 */
void func_02085410(const void * srcp, void * destp);
asm void func_02085410 (register const void * srcp, register void * destp)
{
stmfd sp !, {r4 - r7, lr}
ldr r5, [r0], #4
mov r2, r5, lsr #8
mov r7, #0
tst r5, #0x0F
movne r7, #1
@21:
cmp r2, #0
ble @26
ldrb r14, [r0], #1
mov r4, #8
@22:
subs r4, r4, #1
blt @21
tst r14, #0x80
bne @23
ldrb r6, [r0], #1
swpb r6, r6, [r1]
add r1, r1, #1
sub r2, r2, #1
b @25
@23:
ldrb r5, [r0, #0]
cmp r7, #0
moveq r6, #3
beq @23_2
tst r5, #0xE0
movne r6, #1
bne @23_2
add r0, r0, #1
and r6, r5, #0xf
mov r6, r6, lsl #4
tst r5, #0x10
beq @23_1
mov r6, r6, lsl #8
ldrb r5, [r0], #1
add r6, r6, r5, lsl #4
add r6, r6, #0x100
@23_1:
add r6, r6, #0x11
ldrb r5, [r0, #0]
@23_2:
add r3, r6, r5, asr #4
add r0, r0, #1
and r5, r5, #0xf
mov r12, r5, lsl #8
ldrb r6, [r0], #1
orr r5, r6, r12
add r12, r5, #1
sub r2, r2, r3
@24:
ldrb r5, [r1, -r12]
swpb r5, r5, [r1]
add r1, r1, #1
subs r3, r3, #1
bgt @24
@25:
cmp r2, #0
movgt r14, r14, lsl #1
bgt @22
b @21
@26:
ldmfd sp !, {r4 - r7, lr}
bx lr
}
