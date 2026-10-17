/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx33.c (arm build): func_020800cc */
typedef signed long s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
typedef union {
struct {
fx32 _00, _01, _02;
fx32 _10, _11, _12;
fx32 _20, _21, _22;
};
fx32 m[3][3];
fx32 a[9];
} MtxFx33;
void func_020800cc(const MtxFx33 * pSrc, MtxFx33 * pDst, fx32 x, fx32 y, fx32 z);
inline fx32 mul64 (fx64 x, fx32 y)
{
return (fx32)((x * y) >> 12 );
}
void func_020800cc (const MtxFx33 *pSrc, MtxFx33 *pDst, fx32 x, fx32 y, fx32 z)
{
fx64 v;
((void) 0) ;
((void) 0) ;
v = (fx64)x;
pDst->_00 = mul64(v, pSrc->_00);
pDst->_01 = mul64(v, pSrc->_01);
pDst->_02 = mul64(v, pSrc->_02);
v = (fx64)y;
pDst->_10 = mul64(v, pSrc->_10);
pDst->_11 = mul64(v, pSrc->_11);
pDst->_12 = mul64(v, pSrc->_12);
v = (fx64)z;
pDst->_20 = mul64(v, pSrc->_20);
pDst->_21 = mul64(v, pSrc->_21);
pDst->_22 = mul64(v, pSrc->_22);
}
