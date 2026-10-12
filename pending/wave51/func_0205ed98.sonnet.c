#include "ffc/types.h"

typedef struct {
    int32_t a, b, c, d;
} Quad;

typedef struct {
    int32_t x, y;
} Vec2;

typedef struct {
    Vec2 lo, hi;
} Box;

typedef struct {
    Vec2 a, b, c;
} Tri;

extern void func_0205ecc8(void *p, Box q);
extern void *func_0205681c(uint32_t size);
extern void *func_0205e848(void *obj, void *q, Quad s, int32_t p7, int32_t p8, uint8_t p9, uint8_t p10);
extern void func_0205ec84(void *p, void *obj);

void func_0205ed98(void *p, void *q, Quad s, int32_t p7, int32_t p8, uint8_t p9, uint8_t p10)
{
    Tri t;
    Box r;
    void *obj;

    t.a.x = s.c + s.a;
    t.a.y = s.d + s.b;
    t.b.x = s.c;
    t.b.y = s.d;
    t.c = t.a;
    r.lo = t.b;
    r.hi = t.c;
    func_0205ecc8(p, r);
    obj = func_0205681c(0x34);
    if (obj) {
        obj = func_0205e848(obj, q, s, p7, p8, p9, p10);
    }
    func_0205ec84(p, obj);
}
