/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_0208800c */
typedef unsigned long u32;
u32 func_0208800c(void);
asm u32 func_0208800c (void)
{
mrc p15, 0, r0, c6, c7, 0
bx lr
}
