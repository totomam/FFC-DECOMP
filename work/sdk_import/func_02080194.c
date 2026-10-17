/* From libntr libntr/libraries/fx/src/fx_mtx33.c (thumb build): func_02080194 */
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
void func_02080194(register MtxFx33 * pDst, register fx32 sinVal, register fx32 cosVal);
asm void func_02080194 (register MtxFx33 *pDst, register fx32 sinVal, register fx32 cosVal)
{
str r2, [r0, #0]
str r2, [r0, #32]
mov r3, #0
str r3, [r0, #4]
str r3, [r0, #12]
str r3, [r0, #20]
str r3, [r0, #28]
neg r2, r1
mov r3, #1
lsl r3, r3, #12
str r1, [r0, #24]
str r2, [r0, #8]
str r3, [r0, #16]
bx lr
}
