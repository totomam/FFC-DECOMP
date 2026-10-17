/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx22.c (arm build): func_0207fe70 */
typedef signed long s32;
typedef s32 fx32;
typedef union {
struct {
fx32 _00, _01;
fx32 _10, _11;
};
fx32 m[2][2];
fx32 a[4];
} MtxFx22;
void func_0207fe70(register MtxFx22 * pDst);
asm void func_0207fe70 (register MtxFx22 *pDst)
{
mov r1, #0
mov r2, #4096
mov r3, #0
stmia r0 !, {r2, r3}
stmia r0 !, {r1, r2}
bx lr
}
