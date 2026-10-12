#include "ffc/types.h"

extern char data_020b1074[];
extern char data_020b10b0[];

typedef struct {
    uint32_t x0, x1, x2, x3;
} P;

typedef struct {
    void *vt;
    uint32_t a, b, c, d;
    uint32_t e, f;
    uint8_t g, h;
} O;

O *func_0205eaa8(O *o, P p, uint32_t e, uint32_t f, uint8_t g, uint8_t h)
{
    P t = p;
    o->vt = data_020b1074;
    o->a = t.x0;
    o->b = t.x1;
    o->c = t.x2;
    o->d = t.x3;
    o->vt = data_020b10b0;
    o->e = e;
    o->f = f;
    o->g = g;
    o->h = h;
    return o;
}
