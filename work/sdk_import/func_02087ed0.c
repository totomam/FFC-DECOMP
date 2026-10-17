/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_tcm.c (arm build): func_02087ed0 */
typedef unsigned long u32;
u32 func_02087ed0(void);
asm u32 func_02087ed0 (void)
{
mrc p15, 0, r0, c9, c1, 0
ldr r1, = 0xfffff000
and r0, r0, r1
bx lr
}
