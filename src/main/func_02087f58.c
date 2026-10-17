/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087f58 */
typedef unsigned long u32;
void func_02087f58(u32 flags);
asm void func_02087f58 (register u32 flags)
{
mrc p15, 0, r1, c3, c0, 0
orr r1, r1, r0
mcr p15, 0, r1, c3, c0, 0
bx lr
}
