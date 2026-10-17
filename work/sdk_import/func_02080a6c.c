/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx44.c (arm build): func_02080a6c */
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
void func_02080a6c(register const MtxFx44 * pSrc, register MtxFx43 * pDst);
asm void func_02080a6c (register const MtxFx44 *pSrc, register MtxFx43 *pDst)
{
ldmia r0 !, {r2 - r3, r12}
add r0, r0, #4
stmia r1 !, {r2 - r3, r12}
ldmia r0 !, {r2 - r3, r12}
add r0, r0, #4
stmia r1 !, {r2 - r3, r12}
ldmia r0 !, {r2 - r3, r12}
add r0, r0, #4
stmia r1 !, {r2 - r3, r12}
ldmia r0 !, {r2 - r3, r12}
add r0, r0, #4
stmia r1 !, {r2 - r3, r12}
bx lr
}
