/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_spinLock.c (arm build): func_02086a4c */
typedef signed long s32;
s32 func_02086a4c(void);
asm s32 func_02086a4c (void)
{
ldr r3, = (0x02000000 + 0x00ffffb0)
ldr r1, [r3, #0]
clz r2, r1
cmp r2, #32
movne r0, #0x40
bne _1
add r3, r3, #4
ldr r1, [r3, #0]
clz r2, r1
cmp r2, #32
ldr r0, = (-3)
bxeq lr
mov r0, #0x40 + 32
_1:
add r0, r0, r2
mov r1, #0x80000000
mov r1, r1, lsr r2
ldr r2, [r3, #0]
bic r2, r2, r1
str r2, [r3, #0]
bx lr
}
