/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_cache.c (arm build): func_020878dc */
void func_020878dc(void);
asm void func_020878dc (void)
{
mov r0, #0
mcr p15, 0, r0, c7, c5, 0
bx lr
}
