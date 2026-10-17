/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087fb4 */
typedef unsigned long u32;
void func_02087fb4(u32 param);
asm void func_02087fb4 (u32 param)
{
mcr p15, 0, r0, c6, c4, 0
bx lr
}
