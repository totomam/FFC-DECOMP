/* cflags: -nothumb */
/* From libntr libntr/libraries/init/src/crt0.c (arm build): func_01ff949c */
typedef unsigned long u32;
void func_01ff949c(register u32 data, register void *destp, register u32 size);
asm void func_01ff949c (register u32 data, register void *destp, register u32 size)
{
add r12, r1, r2
@20:
cmp r1, r12
stmltia r1 !, {r0}
blt @20
bx lr
}
