/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087ffc */
typedef unsigned long u32;
u32 func_02087ffc(void);
asm u32 func_02087ffc (void)
{
mrc p15, 0, r0, c6, c5, 0
bx lr
}
