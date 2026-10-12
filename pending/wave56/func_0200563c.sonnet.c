#include "ffc/types.h"

extern float func_0209b5bc(float a, float b);
extern int32_t func_0209ab90(float a);
extern float func_0209af28(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float a);
extern void func_0200570c(void *p, int32_t x, int32_t y, uint16_t z);

void func_0200563c(void *p0, float x, float y, float z)
{
    float xr, yr;
    int32_t ix, iy;
    uint16_t ang;

    if (z < 0.0f) {
        int32_t n = func_0209ab90(func_0209b5bc(z, 360.0f)) + 1;
        z = 360.0f * (float)n + z;
    }
    ang = (uint16_t)func_0209ab90(func_0209b5bc(func_0209af28(65536.0f, z), 360.0f));

    if (y > 0.0f) {
        yr = func_0209b108(0.5f, func_0209af28(4096.0f, y));
    } else {
        yr = func_0209b338(func_0209af28(4096.0f, y), 0.5f);
    }
    if (x > 0.0f) {
        xr = func_0209b108(0.5f, func_0209af28(4096.0f, x));
    } else {
        xr = func_0209b338(func_0209af28(4096.0f, x), 0.5f);
    }
    ix = func_0209ab5c(xr);
    iy = func_0209ab5c(yr);
    func_0200570c(p0, ix, iy, ang);
}
