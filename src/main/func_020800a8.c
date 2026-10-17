/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx33.c (arm build): func_020800a8 */
typedef signed long s32;
typedef s32 fx32;
typedef union {
struct {
fx32 _00, _01, _02;
fx32 _10, _11, _12;
fx32 _20, _21, _22;
};
fx32 m[3][3];
fx32 a[9];
} MtxFx33;
void func_020800a8(register MtxFx33 * pDst);
asm void func_020800a8 (register MtxFx33 *pDst)
{
mov r2, #4096
str r2, [r0, #32]
mov r3, #0
stmia r0 !, {r2, r3}
mov r1, #0
stmia r0 !, {r1, r3}
stmia r0 !, {r2, r3}
stmia r0 !, {r1, r3}
bx lr
}
