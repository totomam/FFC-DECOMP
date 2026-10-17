/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087f34 */
typedef unsigned long u32;
void func_02087f34(u32 flags);
asm void func_02087f34 (register u32 flags)
{
mrc p15, 0, r1, c2, c0, 0
bic r1, r1, r0
mcr p15, 0, r1, c2, c0, 0
bx lr
}
