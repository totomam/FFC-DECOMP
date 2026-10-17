/* From libntr libntr/libraries/gx/src/g3_util.c (thumb build): func_02081be0 */
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef vu32 REGType32v;
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
typedef enum {
GX_MTXMODE_PROJECTION = 0,
GX_MTXMODE_POSITION = 1,
GX_MTXMODE_POSITION_VECTOR = 2,
GX_MTXMODE_TEXTURE = 3
} GXMtxMode;
void G3_MtxMode(GXMtxMode mode);
static inline void G3_MtxMode (GXMtxMode mode)
{
((void) 0) ;
(*( REGType32v *) (0x04000000 + 0x440)) = ((u32) ((mode) << 0)) ;
}
void func_02081be0(const MtxFx44 * mtx);
void func_02081be0 (const MtxFx44 *mtx)
{
vs32 *p = (vs32 *)&(*( REGType32v *) (0x04000000 + 0x458)) ;
((void) 0) ;
G3_MtxMode(GX_MTXMODE_TEXTURE);
*p = mtx->_00;
*p = mtx->_01;
*p = mtx->_02;
*p = mtx->_03;
*p = mtx->_10;
*p = mtx->_11;
*p = mtx->_12;
*p = mtx->_13;
*p = mtx->_20 << 4;
*p = mtx->_21 << 4;
*p = mtx->_22 << 4;
*p = mtx->_23 << 4;
*p = mtx->_30 << 4;
*p = mtx->_31 << 4;
*p = mtx->_32 << 4;
*p = mtx->_33 << 4;
}
