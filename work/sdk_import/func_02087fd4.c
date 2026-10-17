/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087fd4 */
typedef unsigned long u32;
u32 func_02087fd4(void);
asm u32 func_02087fd4 (void)
{
mrc p15, 0, r0, c6, c0, 0
bx lr
}
