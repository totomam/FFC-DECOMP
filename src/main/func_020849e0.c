/* cflags: -nothumb */
/* From libntr libntr/libraries/init/src/crt0.c (arm build): func_020849e0 */
typedef unsigned long u32;
void func_020849e0(register u32 data, register void *destp, register u32 size);
asm void func_020849e0 (register u32 data, register void *destp, register u32 size)
{
add r12, r1, r2
@20:
cmp r1, r12
stmltia r1 !, {r0}
blt @20
bx lr
}
