/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_cache.c (arm build): func_020878d0 */
void func_020878d0(void);
asm void func_020878d0 (void)
{
mov r0, #0
mcr p15, 0, r0, c7, c10, 4
bx lr
}
