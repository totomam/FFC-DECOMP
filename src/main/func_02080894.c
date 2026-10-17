/* cflags: -nothumb */
/* From libntr libntr/libraries/fx/src/fx_mtx43.c (arm build): func_02080894 */
typedef signed long s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
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
void func_02080894(const VecFx32 * vec, const MtxFx43 * m, VecFx32 * dst);
void func_02080894 (const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst)
{
register fx32 x, y, z;
((void) 0) ;
((void) 0) ;
((void) 0) ;
x = vec->x;
y = vec->y;
z = vec->z;
dst->x = (fx32)(((fx64)x * m->_00 + (fx64)y * m->_10 + (fx64)z * m->_20) >> 12 );
dst->x += m->_30;
dst->y = (fx32)(((fx64)x * m->_01 + (fx64)y * m->_11 + (fx64)z * m->_21) >> 12 );
dst->y += m->_31;
dst->z = (fx32)(((fx64)x * m->_02 + (fx64)y * m->_12 + (fx64)z * m->_22) >> 12 );
dst->z += m->_32;
}
