/* cflags: -nothumb */
/* From libntr libntr/libraries/gx/src/g2.c (arm build): func_02081aa0 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u32 vu32;
typedef s32 fx32;
typedef union {
struct {
fx32 _00, _01;
fx32 _10, _11;
};
fx32 m[2][2];
fx32 a[4];
} MtxFx22;
void func_02081aa0(u32 addr, const MtxFx22 * mtx, int centerX, int centerY, int x1, int y1);
void func_02081aa0 (u32 addr, const MtxFx22 *mtx, int centerX, int centerY, int x1, int y1)
{
s32 dx, dy;
fx32 x2, y2;
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
((void) 0) ;
*((vu32 *)addr + 0) = (u32)((u16)(s16)(mtx->_00 >> 4) | (u16)(s16)(mtx->_01 >> 4) << 16);
*((vu32 *)addr + 1) = (u32)((u16)(s16)(mtx->_10 >> 4) | (u16)(s16)(mtx->_11 >> 4) << 16);
dx = x1 - centerX;
dy = y1 - centerY;
x2 = mtx->_00 * dx + mtx->_01 * dy + (centerX << 12 );
y2 = mtx->_10 * dx + mtx->_11 * dy + (centerY << 12 );
*((vu32 *)addr + 2) = (u32)(x2 >> 4);
*((vu32 *)addr + 3) = (u32)(y2 >> 4);
}
