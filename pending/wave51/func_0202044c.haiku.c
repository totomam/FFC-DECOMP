#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
} Rect;

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern void func_020207b0(void *self, Pair p, Rect r);
extern void func_020209a8(void *self, Rect a, Rect b);

void func_0202044c(void *self, Rect r)
{
    Pair p;
    Rect a;
    Rect b;

    ((Rect *)((uint8_t *)self + 0x78))->x = r.x;
    ((Rect *)((uint8_t *)self + 0x78))->y = r.y;
    ((Rect *)((uint8_t *)self + 0x78))->z = r.z;
    ((Rect *)((uint8_t *)self + 0x78))->w = r.w;
    p.a = 0;
    p.b = 8;
    func_020207b0(self, p, r);
    a.x = r.x + 1;
    a.y = r.y + 1;
    a.z = r.z - 1;
    a.w = r.w - 1;
    b.x = 0;
    b.y = 0;
    b.z = 1;
    b.w = 1;
    func_020209a8(self, b, a);
}
