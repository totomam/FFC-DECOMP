/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_spinLock.c (arm build): func_02086aa4 */
typedef unsigned short int u16;
void func_02086aa4(u16 lockID);
asm void func_02086aa4 (register u16 lockID)
{
ldr r3, = (0x02000000 + 0x00ffffb0)
cmp r0, #0x40 + 32
addpl r3, r3, #4
subpl r0, r0, #0x40 + 32
submi r0, r0, #0x40
mov r1, #0x80000000
mov r1, r1, lsr r0
ldr r2, [r3, #0]
orr r2, r2, r1
str r2, [r3, #0]
bx lr
}
