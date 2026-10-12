/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t key; uint32_t val; };
struct Cont { int32_t pad; int32_t n; Elem *base; };
struct Iter { Elem *cur; Cont *cont; };
struct P { Elem *p; Elem &operator*() const { return *p; } P &operator++() { p++; return *this; } bool operator==(const P &o) const { return p == o.p; } bool operator!=(const P &o) const { return !(*this == o); } };

inline void put2(const Iter &d, uint32_t k, const Elem &s)
{
    Iter t = d;
    Iter *q = &t;
    if (q->cur - q->cont->base < q->cont->n) {
        q->cur->key = k;
        q->cur->val = s.val;
    } else {
        if (q->cur != 0) {
            q->cur->key = k;
            q->cur->val = s.val;
        }
        q->cont->n++;
    }
}
inline void put(const Iter &d, const Elem &s)
{
    Iter t = d;
    Iter *q = &t;
    if (q->cur - q->cont->base < q->cont->n) {
        q->cur->key = s.key;
        q->cur->val = s.val;
    } else {
        if (q->cur != 0) {
            q->cur->key = s.key;
            q->cur->val = s.val;
        }
        q->cont->n++;
    }
}

inline Iter copy(P f, P l, Iter o)
{
    for (; f != l; ++f) { put(o, *f); o.cur++; }
    return o;
}

inline bool more(const P &a, const P &ae, const P &b, const P &be) { return a != ae && b != be; }

extern "C" Iter func_ov002_021cd30c(P a, P aend, P b, P bend, Iter d)
{
    while (more(a, aend, b, bend)) {
        uint32_t kb = (*b).key, ka = (*a).key;
        if (kb > ka) {
            put2(d, kb, *b);
            ++b;
        } else {
            put2(d, ka, *a);
            ++a;
        }
        d.cur++;
    }
    P la = a, le = aend;
    if (!(la != le)) return copy(b, bend, d);
    return copy(la, le, d);
}
