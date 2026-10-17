/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_protectionRegion.c (arm build): func_02087fcc */
typedef unsigned long u32;
void func_02087fcc(u32 param);
asm void func_02087fcc (u32 param)
{
mcr p15, 0, r0, c6, c7, 0
bx lr
}
