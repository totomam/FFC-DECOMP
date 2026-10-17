/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087f44 */
typedef unsigned long u32;
void func_02087f44(u32 setMask, u32 flags);
asm void func_02087f44 (register u32 setMask, register u32 flags)
{
mrc p15, 0, r2, c5, c0, 2
bic r2, r2, r0
orr r2, r2, r1
mcr p15, 0, r2, c5, c0, 2
bx lr
}
