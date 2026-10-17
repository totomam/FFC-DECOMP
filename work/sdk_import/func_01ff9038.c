/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_irqHandler.c (arm build): func_01ff9038 */
typedef void (*OSIrqFunction)(void);
extern OSIrqFunction data_02fe0020[];
void func_01ff9038(void);
asm
void func_01ff9090(void);
asm void func_01ff9038 (void)
{
stmfd sp !, {lr}
mov r12, #0x04000000
add r12, r12, #0x210
ldr r1, [r12, #(0x04000000 + 0x208) - (0x04000000 + 0x210) ]
cmp r1, #0
ldmeqfd sp !, {pc}
ldmia r12, {r1 - r2}
ands r1, r1, r2
ldmeqfd sp !, {pc}
mov r3, #1 << 31
@1:
clz r0, r1
bics r1, r1, r3, LSR r0
bne @1
mov r1, r3, LSR r0
str r1, [r12, #(0x04000000 + 0x214) - (0x04000000 + 0x210) ]
rsbs r0, r0, #31
ldr r1, = data_02fe0020
ldr r0, [r1, r0, LSL #2]
ldr lr, = func_01ff9090
bx r0
}
asm void func_01ff9090 (void);
