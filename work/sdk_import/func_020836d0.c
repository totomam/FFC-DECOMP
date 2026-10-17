/* cflags: -nothumb */
/* From libntr libntr/libraries/gx/src/gxasm.c (arm build): func_020836d0 */
void func_020836d0(register const void * pSrc, register void * pDest);
asm void func_020836d0 (register const void *pSrc, register void *pDest)
{
stmfd sp !, {r4 - r8}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmfd sp !, {r4 - r8}
bx lr
}
