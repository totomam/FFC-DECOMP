/* cflags: -lang c++ */
#include "ffc/types.h"

struct Rec {
    int32_t f0, f1, f2, f3, f4;
    int32_t arr[6];
    int32_t last;
};

struct Out { Rec *p; };

struct It {
    Rec *p;
    int32_t x;
};

static inline int both(const It &a, const It &ae, const It &b, const It &be)
{
    return a.p != ae.p && b.p != be.p;
}

static inline int sum(const Rec *r)
{
    int s = 0;
    for (int i = 0; i < 6; i++) s += r->arr[i];
    return s;
}

static inline Rec *cp(It cur, It end, Out d)
{
    while (cur.p != end.p) {
        *d.p = *cur.p;
        cur.p++;
        d.p++;
    }
    return d.p;
}

extern "C" void func_ov002_021d1c7c(Rec **out, It a, It ae, It b, It be, Out c);
extern "C" void func_ov002_021d1c7c(Rec **out, It a, It ae, It b, It be, Out c)
{
    while (both(a, ae, b, be)) {
        int32_t sa, sb = 0;
        for (int i = 0; i < 6; i++) sb += b.p->arr[i];
        sa = 0;
        for (int j = 0; j < 6; j++) sa += a.p->arr[j];
        if (sb > sa) {
            *c.p = *b.p; b.p++;
        } else {
            *c.p = *a.p; a.p++;
        }
        c.p++;
    }
    if (a.p == ae.p)
        *out = cp(b, be, c);
    else
        *out = cp(a, ae, c);
}
