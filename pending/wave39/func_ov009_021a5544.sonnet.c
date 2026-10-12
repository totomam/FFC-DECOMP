#include "ffc/types.h"

extern int32_t func_ov009_021a5cdc(void *ctx, uint32_t *b, uint32_t *a);

typedef struct { uint32_t *p; uint32_t x; } It;
typedef struct {

    uint32_t *a1;
    uint32_t *a2;
    It f;
    It l;
    uint32_t *d;
} S;

static inline uint32_t *cp(It l, It f, uint32_t *d)
{
    It a = l, b = f;
    while (a.p != b.p) {
        *--d = *--a.p;
    }
    return d;
}

void func_ov009_021a5544(uint32_t **out, S s, void *ctx)
{
    uint32_t *pa;
    if (s.a1 == s.a2) {
        *out = cp(s.l, s.f, s.d);
        return;
    }
    if (s.f.p == s.l.p) {
        while (s.a2 != s.a1) {
            *--s.d = *--s.a2;
        }
        *out = s.d;
        return;
    }
    pa = s.a2 - 1;
    s.l.p--;
    for (;;) {
        if (func_ov009_021a5cdc(ctx, s.l.p, pa)) {
            *--s.d = *pa;
            if (s.a1 == pa) {
                s.l.p++;
                *out = cp(s.l, s.f, s.d);
                return;
            }
            pa--;
        } else {
            *--s.d = *s.l.p;
            if (s.f.p == s.l.p) {
                It x, y;
                x.p = pa + 1; x.x = 0; y.p = s.a1; y.x = 0;
                *out = cp(x, y, s.d);
                return;
            }
            s.l.p--;
        }
    }
}
