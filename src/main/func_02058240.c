#include "ffc/types.h"
extern void func_020586e8(void *s, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
typedef struct Sub { uint32_t pad0; uint32_t f4; } Sub;
typedef struct Obj { uint32_t f0; uint32_t f4; uint32_t f8; uint32_t fc; Sub *f10; } Obj;
void func_02058240(Obj *p, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t y, x;
    x = c << 1;
    y = p->f8 - (b <<= 1);
    uint32_t *m = (x < y) ? &x : &y;
    uint32_t n = *m;
    uint32_t d = p->f4 + b;
    Sub *s = p->f10;
    if (d == s->f4) {
        a += 2;
        d += 2;
        n -= 2;
    }
    func_020586e8(s, a, d, n, 0);
}
