#include "ffc/types.h"

typedef struct {
    int32_t pad;
    int32_t a;
    int32_t b;
    int32_t c;
} Obj;

typedef struct {
    int8_t dx;
    int8_t dy;
} Dir;

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

extern void func_020784ac(Vec2 *out, int32_t a, int32_t b, int32_t c);
extern void func_020792dc(Obj *o, int32_t a, int32_t b, int32_t x, int32_t c,
                          uint32_t flags, uint32_t f1, Dir d);

void func_020793bc(Obj *o, int32_t a, int32_t b, int32_t c, uint32_t flags, uint32_t f1, Dir d)
{
    Vec2 v;
    int32_t k;

    func_020784ac(&v, o->a, o->b, o->c);

    if (flags & 0x10) {
        k = (-(v.x + 1)) / 2;
        a += k * d.dx;
        b += k * d.dy;
    } else if (flags & 0x20) {
        k = -v.x;
        a += k * d.dx;
        b += k * d.dy;
    }

    if (flags & 2) {
        k = (-(v.y + 1)) / 2;
        a += k * -d.dy;
        b += k * d.dx;
    } else if (flags & 4) {
        k = -v.y;
        a += k * -d.dy;
        b += k * d.dx;
    }

    func_020792dc(o, a, b, v.x, c, flags, f1, d);
}
