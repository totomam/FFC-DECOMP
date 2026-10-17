/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx44.c (arm build): func_02080a40 */
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
void func_02080a40(register MtxFx44 * pDst);
asm void func_02080a40 (register MtxFx44 *pDst)
{
mov r2, #4096
mov r3, #0
stmia r0 !, {r2, r3}
mov r1, #0
stmia r0 !, {r1, r3}
stmia r0 !, {r1, r2, r3}
stmia r0 !, {r1, r3}
stmia r0 !, {r1, r2, r3}
stmia r0 !, {r1, r3}
stmia r0 !, {r1, r2}
bx lr
}
