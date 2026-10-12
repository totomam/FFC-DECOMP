#include "ffc/types.h"

typedef struct {
    uint32_t w[6];
} Rec;

typedef struct { Rec *cur; uint32_t x; } It;

typedef struct {
    It a;
    It b;
} Range;

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

static inline void cp(Rec *d, Rec *s)
{
    d->w[0] = s->w[0]; d->w[1] = s->w[1]; d->w[2] = s->w[2];
    d->w[3] = s->w[3]; d->w[4] = s->w[4]; d->w[5] = s->w[5];
}


static inline Rec *copy_rest(It first, It last, Rec *dst)
{
    while (first.cur != last.cur) {
        cp(dst, first.cur);
        first.cur++;
        dst++;
    }
    return dst;
}

static inline int less(Rec *b, Rec *a)
{
    int r;
    if (func_02036cd8(b) && !func_02036cd8(a)) r = 1;
    else if (func_02036cd8(a) && !func_02036cd8(b)) r = 0;
    else if (func_02036cfc(b) < func_02036cfc(a)) r = 1;
    else if (func_02036cfc(b) > func_02036cfc(a)) r = 0;
    else if (func_02036cfc(b) == 0) r = 0;
    else r = func_02036ce0(b) < func_02036ce0(a);
    return r;
}

Rec *func_0201de74(Range ra, Range rb, Rec *dst)
{
    Rec *e2 = rb.b.cur;
    Rec *e1 = ra.b.cur;
    while ((ra.a.cur != e1 && rb.a.cur != e2) ? 1 : 0) {
        if (less(rb.a.cur, ra.a.cur)) {
            cp(dst, rb.a.cur);
            rb.a.cur++;
        } else {
            cp(dst, ra.a.cur);
            ra.a.cur++;
        }
        dst++;
    }
    if (ra.a.cur == ra.b.cur) {
        It l = rb.b; It f = rb.a;
        while (f.cur != l.cur) { cp(dst, f.cur); f.cur++; dst++; }
        return dst;
    } else {
        It l = ra.b; It f = ra.a;
        while (f.cur != l.cur) { cp(dst, f.cur); f.cur++; dst++; }
        return dst;
    }
}
