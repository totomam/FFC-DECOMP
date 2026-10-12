#include "ffc/types.h"

extern int32_t func_ov003_02148ae4(void *p, int32_t x, int32_t y);
extern double func_02099edc(int32_t v);
extern double func_02099390(double a, double b);
extern void func_0209abd0(double v);

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

void func_ov003_02148b50(void *p, Vec3 v) {
    int32_t b;
    int32_t a;

    a = func_ov003_02148ae4(p, v.x, v.y);
    if (a == (int32_t)0x80000000) {
        return;
    }
    b = func_ov003_02148ae4(p, v.x - 0x1000, v.y);
    if (b == (int32_t)0x80000000) {
        return;
    }
    a = *((b < a) ? &a : &b);
    b = func_ov003_02148ae4(p, v.x + 0x1000, v.y);
    if (b == (int32_t)0x80000000) {
        return;
    }
    a = *((b < a) ? &a : &b);
    b = func_ov003_02148ae4(p, v.x, v.y - 0x1000);
    if (b == (int32_t)0x80000000) {
        return;
    }
    a = *((b < a) ? &a : &b);
    b = func_ov003_02148ae4(p, v.x, v.y + 0x1000);
    if (b == (int32_t)0x80000000) {
        return;
    }
    func_0209abd0(func_02099390(409.6, func_02099edc(*((b < a) ? &a : &b))));
}
