#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t size;
    uint32_t zero;
    uint32_t *base;
} Ctx;

extern void func_ov009_021a5d5c(void *v, int32_t n);
extern void func_ov009_021a5060(Pair s, Pair u, uint32_t *e, uint32_t *f, Pair *t);
extern void func_02056858(uint32_t *p);

typedef struct {
    uint32_t *ptr;
    uint32_t size;
} Vec;

void func_ov009_021a4ffc(Pair s, Pair t)
{
    int32_t n = (int32_t)(s.b - s.a) / 4;
    Vec v;
    Ctx c;
    struct { Pair e; Pair u; } w;
    uint32_t *endp;

    if (n <= 20) {
        n = 0;
    }
    func_ov009_021a5d5c(&v, n);
    c.size = v.size;
    c.zero = 0;
    c.base = v.ptr;
    endp = v.ptr + v.size;
    w.e.a = (uint32_t)endp;
    w.e.b = (uint32_t)&c.size;
    w.u.a = (uint32_t)v.ptr;
    w.u.b = (uint32_t)&c.size;
    func_ov009_021a5060(s, w.u, endp, &c.size, &t);
    func_02056858(c.base);
}
