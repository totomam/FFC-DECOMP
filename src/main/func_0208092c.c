/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_0208092c */
typedef signed long s32;
typedef s32 fx32;
typedef struct {
fx32 x;
fx32 y;
fx32 z;
} VecFx32;
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
void func_0208092c(const VecFx32 * camPos, const VecFx32 * camUp, const VecFx32 * target, MtxFx43 * mtx);
fx32 func_0208135c(const VecFx32 * a, const VecFx32 * b);
void func_02081398(const VecFx32 * a, const VecFx32 * b, VecFx32 * axb);
void func_02081418(const VecFx32 * pSrc, VecFx32 * pDst);
void func_0208092c (const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx)
{
VecFx32 vLook, vRight, vUp;
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
vLook.x = camPos->x - target->x;
vLook.y = camPos->y - target->y;
vLook.z = camPos->z - target->z;
func_02081418(&vLook, &vLook);
func_02081398(camUp, &vLook, &vRight);
func_02081418(&vRight, &vRight);
func_02081398(&vLook, &vRight, &vUp);
mtx->_00 = vRight.x;
mtx->_01 = vUp.x;
mtx->_02 = vLook.x;
mtx->_10 = vRight.y;
mtx->_11 = vUp.y;
mtx->_12 = vLook.y;
mtx->_20 = vRight.z;
mtx->_21 = vUp.z;
mtx->_22 = vLook.z;
mtx->_30 = -func_0208135c(camPos, &vRight);
mtx->_31 = -func_0208135c(camPos, &vUp);
mtx->_32 = -func_0208135c(camPos, &vLook);
}
