/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_0208053c */
typedef signed long s32;
typedef s32 fx32;
typedef union {
struct {
fx32 _00, _01, _02, _03;
fx32 _10, _11, _12, _13;
fx32 _20, _21, _22, _23;
fx32 _30, _31, _32, _33;
};
fx32 m[4][4];
fx32 a[16];
} MtxFx44;
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
void func_0208053c(register const MtxFx43 * pSrc, register MtxFx44 * pDst);
asm void func_0208053c (register const MtxFx43 *pSrc, register MtxFx44 *pDst)
{
stmfd sp !, {r4}
mov r12, #0
ldmia r0 !, {r2 - r4}
stmia r1 !, {r2 - r4, r12}
ldmia r0 !, {r2 - r4}
stmia r1 !, {r2 - r4, r12}
ldmia r0 !, {r2 - r4}
stmia r1 !, {r2 - r4, r12}
mov r12, #4096
ldmia r0 !, {r2 - r4}
stmia r1 !, {r2 - r4, r12}
ldmfd sp !, {r4}
bx lr
}
