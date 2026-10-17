/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_02080514 */
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
void func_02080514(register MtxFx43 * pDst);
asm void func_02080514 (register MtxFx43 *pDst)
{
mov r2, #4096
mov r3, #0
stmia r0 !, {r2, r3}
mov r1, #0
stmia r0 !, {r1, r3}
stmia r0 !, {r2, r3}
stmia r0 !, {r1, r3}
stmia r0 !, {r2, r3}
stmia r0 !, {r1, r3}
bx lr
}
