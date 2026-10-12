#include "ffc/types.h"
typedef struct { int32_t x, y, z, w; } Rect;
typedef struct { int32_t a, b; } Pair;
extern void func_020207b0(void *self, Pair p, Rect r);
extern void func_020209a8(void *self, Rect a, Rect b);
void func_0202044c(uint8_t *self, Rect r)
{
    Pair p;
    Rect b;
    Rect a;
    int32_t z = 0;
    *(int32_t *)(self + 0x78) = r.x;
    *(int32_t *)(self + 0x7c) = r.y;
    *(int32_t *)(self + 0x80) = r.z;
    *(int32_t *)(self + 0x84) = r.w;
    p.b = 8;
    p.a = z;
    func_020207b0(self, p, r);
    a.x = ((int32_t *)&r)[0] + 1;
    a.y = ((int32_t *)&r)[1] + 1;
    a.z = ((int32_t *)&r)[2] - 1;
    a.w = ((int32_t *)&r)[3] - 1;
    b.z = 1;
    b.w = 1;
    b.x = z;
    b.y = z;
    func_020209a8(self, b, a);
}
