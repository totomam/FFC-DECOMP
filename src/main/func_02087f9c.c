/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087f9c */
typedef unsigned long u32;
void func_02087f9c(u32 param);
asm void func_02087f9c (u32 param)
{
mcr p15, 0, r0, c6, c1, 0
bx lr
}
