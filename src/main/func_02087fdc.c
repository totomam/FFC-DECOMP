/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087fdc */
typedef unsigned long u32;
u32 func_02087fdc(void);
asm u32 func_02087fdc (void)
{
mrc p15, 0, r0, c6, c1, 0
bx lr
}
