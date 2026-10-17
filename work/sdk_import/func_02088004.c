/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02088004 */
typedef unsigned long u32;
u32 func_02088004(void);
asm u32 func_02088004 (void)
{
mrc p15, 0, r0, c6, c6, 0
bx lr
}
