#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} T4;

typedef struct {
    T4 x, y;
} T8;

extern void func_ov002_0219ca80(uint32_t v, T4 a);

typedef struct {
    uint32_t w[10];
} Ctx;

void func_ov002_0219f5cc(Ctx *p) {
    T8 t;
    t.x.a = p->w[8];
    t.x.b = p->w[9];
    t.x.c = p->w[6];
    t.x.d = p->w[7];
    t.y.a = p->w[6];
    t.y.b = p->w[7];
    t.y.c = p->w[8];
    t.y.d = p->w[9];
    func_ov002_0219ca80(p->w[5], t.y);
    p->w[3] = (p->w[3] & ~0xffu) | 2u;
}
