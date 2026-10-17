/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_02080570 */
typedef signed long s32;
typedef s32 fx32;
typedef union {
struct {
fx32 _00, _01, _02;
fx32 _10, _11, _12;
fx32 _20, _21, _22;
fx32 _30, _31, _32;
};
fx32 m[4][3];
fx32 a[12];
} MtxFx43;
void func_02080570(register const MtxFx43 * pSrc, register MtxFx43 * pDst);
asm void func_02080570 (register const MtxFx43 *pSrc, register MtxFx43 *pDst)
{
stmfd sp !, {r4 - r9}
ldmia r0, {r2 - r9, r12}
stmia r1 !, {r2, r5, r8}
stmia r1 !, {r3, r6, r9}
stmia r1 !, {r4, r7, r12}
mov r0, #0
str r0, [r1, #0]
str r0, [r1, #4]
str r0, [r1, #8]
ldmfd sp !, {r4 - r9}
bx lr
}
