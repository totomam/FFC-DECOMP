/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_cache.c (arm build): func_02087840 */
void func_02087840(void);
asm void func_02087840 (void)
{
mov r12, #0
mov r1, #0
@1:
mov r0, #0
@2:
orr r2, r1, r0
mcr p15, 0, r12, c7, c10, 4
mcr p15, 0, r2, c7, c14, 2
add r0, r0, #32
cmp r0, #0x1000 / 4
blt @2
add r1, r1, #1 << 30
cmp r1, #0
bne @1
bx lr
}
