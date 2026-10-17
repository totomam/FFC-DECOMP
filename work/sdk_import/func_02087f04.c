/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087f04 */
typedef unsigned long u32;
void func_02087f04(register u32 flags);
asm void func_02087f04 (register u32 flags)
{
mrc p15, 0, r1, c2, c0, 1
orr r1, r1, r0
mcr p15, 0, r1, c2, c0, 1
bx lr
}
