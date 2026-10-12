/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t a, b; };
struct Map { uint32_t f0; int32_t size; Elem *start; };
struct P { Elem *p; };
struct Iter { Elem *cur; Map *map; };

inline void put(Iter it, const Elem *src)
{
    if (it.cur - it.map->start < it.map->size) {
        *it.cur = *src;
    } else {
        if (it.cur != 0) {
            *it.cur = *src;
        }
        it.map->size++;
    }
}

extern "C" Iter func_ov002_021cd4a8(P pf, P pl, Iter dst);
extern "C" Iter func_ov002_021cd4a8(P pf, P pl, Iter dst)
{
    Elem *first = pf.p; Elem *last = pl.p; Elem *dest = dst.cur;
    Elem *d = dest;
    Iter it;
    Map *map = dst.map;
    it.map = map;
    if (first == last) { Iter r; r.cur = d; r.map = map; return r; }
    it.cur = d;
    put(it, first);
    d++; first++;
    while (first != last) {
        Elem *p = d;
        Elem *q = d;
        for (;;) {
            int more = 0;
            if (p == dest) break;
            p--;
            if (first->a > p->a) more = 1;
            if (!more) break;
            it.cur = q;
            put(it, p);
            q--;
        }
        it.cur = q;
        put(it, first);
        d++; first++;
    }
    Iter r; r.cur = d; r.map = map;
    return r;
}
