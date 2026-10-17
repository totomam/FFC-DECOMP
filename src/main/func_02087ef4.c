/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionUnit.c (arm build): func_02087ef4 */
void func_02087ef4(void);
asm void func_02087ef4 (void)
{
mrc p15, 0, r0, c1, c0, 0
bic r0, r0, #0x00000001
mcr p15, 0, r0, c1, c0, 0
bx lr
}
