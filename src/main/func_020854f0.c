/* cflags: -nothumb */
/* From libntr libntr/libraries/mi/src/mi_uncompress.c (arm build): func_020854f0 */
void func_020854f0(const void * srcp, void * destp);
asm void func_020854f0 (register const void * srcp, register void * destp)
{
stmfd sp !, {r4 - r11, lr}
mov r3, #0
ldr r8, [r0], #4
mov r10, r8, lsr #8
mov r2, #0
mov r11, #0
tst r8, #0x0F
movne r11, #1
@31:
cmp r10, #0
ble @36
ldrb r6, [r0], #1
mov r7, #8
@32:
subs r7, r7, #1
blt @31
tst r6, #0x80
bne @33
ldrb r9, [r0], #1
orr r3, r3, r9, lsl r2
sub r10, r10, #1
eors r2, r2, #8
streqh r3, [r1], #2
moveq r3, #0
b @35
@33:
ldrb r9, [r0, #0]
cmp r11, #0
moveq r8, #3
beq @33_2
tst r9, #0xE0
movne r8, #1
bne @33_2
add r0, r0, #1
and r8, r9, #0xf
mov r8, r8, lsl #4
tst r9, #0x10
beq @33_1
mov r8, r8, lsl #8
ldrb r9, [r0], #1
add r8, r8, r9, lsl #4
add r8, r8, #0x100
@33_1:
add r8, r8, #0x11
ldrb r9, [r0, #0]
@33_2:
add r5, r8, r9, asr #4
ldrb r9, [r0], #1
and r8, r9, #0xf
mov r4, r8, lsl #8
ldrb r9, [r0], #1
orr r8, r9, r4
add r4, r8, #1
rsb r8, r2, #8
and r9, r4, #1
eor r14, r8, r9, lsl #3
sub r10, r10, r5
@34:
eor r14, r14, #8
rsb r8, r2, #8
add r8, r4, r8, lsr #3
mov r8, r8, lsr #1
mov r8, r8, lsl #1
ldrh r9, [r1, -r8]
mov r8, #0xff
and r8, r9, r8, lsl r14
mov r8, r8, asr r14
orr r3, r3, r8, lsl r2
eors r2, r2, #8
streqh r3, [r1], #2
moveq r3, #0
subs r5, r5, #1
bgt @34
@35:
cmp r10, #0
movgt r6, r6, lsl #1
bgt @32
b @31
@36:
ldmfd sp !, {r4 - r11, lr}
bx lr
}
