/* cflags: -nothumb */
/* From libntr libntr/libraries/gx/src/gxasm.c (arm build): func_020836ac */
void func_020836ac(register const void * pSrc, register void * pDest);
asm void func_020836ac (register const void *pSrc, register void *pDest)
{
ldmia r0 !, {r2, r3, r12}
stmia r1, {r2, r3, r12}
ldmia r0 !, {r2, r3, r12}
stmia r1, {r2, r3, r12}
ldmia r0 !, {r2, r3, r12}
stmia r1, {r2, r3, r12}
ldmia r0 !, {r2, r3, r12}
stmia r1, {r2, r3, r12}
bx lr
}
