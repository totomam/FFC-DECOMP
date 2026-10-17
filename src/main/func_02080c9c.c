/* From libntr libntr/libraries/fx/src/fx_mtx44.c (thumb build): func_02080c9c */
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
void func_02080c9c(register MtxFx44 * pDst, register fx32 sinVal, register fx32 cosVal);
asm void func_02080c9c (register MtxFx44 *pDst, register fx32 sinVal, register fx32 cosVal)
{
str r2, [r0, #20]
str r2, [r0, #40]
str r1, [r0, #24]
neg r1, r1
str r1, [r0, #36]
mov r1, #1
mov r2, #0
lsl r1, r1, #12
mov r3, #0
stmia r0 !, {r1, r2, r3}
stmia r0 !, {r2, r3}
add r0, #8
stmia r0 !, {r2, r3}
add r0, #8
stmia r0 !, {r2, r3}
stmia r0 !, {r2, r3}
str r1, [r0, #0]
bx lr
}
