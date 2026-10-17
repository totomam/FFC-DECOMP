/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_02080648 */
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
typedef union {
struct {
fx32 _00, _01, _02;
fx32 _10, _11, _12;
fx32 _20, _21, _22;
};
fx32 m[3][3];
fx32 a[9];
} MtxFx33;
void func_02080648(const MtxFx43 * pSrc, MtxFx43 * pDst, fx32 x, fx32 y, fx32 z);
void func_020800cc(const MtxFx33 * pSrc, MtxFx33 * pDst, fx32 x, fx32 y, fx32 z);
void func_02080648 (const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z)
{
func_020800cc((const MtxFx33 *)pSrc, (MtxFx33 *)pDst, x, y, z);
pDst->_30 = pSrc->_30;
pDst->_31 = pSrc->_31;
pDst->_32 = pSrc->_32;
}
