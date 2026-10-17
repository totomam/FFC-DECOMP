/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_cache.c (arm build): func_020878ac */
typedef unsigned long u32;
void func_020878ac(const void * startAddr, u32 nBytes);
asm void func_020878ac (register const void * startAddr, register u32 nBytes)
{
mov r12, #0
add r1, r1, r0
bic r0, r0, #32 - 1
@1:
mcr p15, 0, r12, c7, c10, 4
mcr p15, 0, r0, c7, c14, 1
add r0, r0, #32
cmp r0, r1
blt @1
bx lr
}
