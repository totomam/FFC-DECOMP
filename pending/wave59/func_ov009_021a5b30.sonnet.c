#include "ffc/types.h"
typedef struct V { uint32_t pad; int32_t cap; uint32_t *base; } V;
typedef struct It { uint32_t *p; V *v; } It;
typedef struct A { uint32_t *first; uint32_t *last; uint32_t *dest; V *v; uint32_t cmp; } A;
extern int func_ov009_021a5cdc(uint32_t c, uint32_t *a, uint32_t *b);

static inline void put(V *v, uint32_t *d, uint32_t *s) {
    It it; it.p = d; it.v = v;
    if (((int)((char*)d - (char*)v->base)) / 4 < v->cap) {
        *d = *s;
    } else {
        if (d != 0) *d = *s;
        it.v->cap++;
    }
}

void func_ov009_021a5b30(It *out, A a) {
    uint32_t * volatile first = a.first; uint32_t * volatile dest = a.dest; uint32_t *lim = a.dest;
    V *v = a.v;
    if (first != a.last) {
        put(v, dest, first);
        first++; dest++;
        if (first != a.last) {
            do {
                uint32_t *d = dest, *q = dest;
                for (;;) {
                    int f = 0;
                    if (q != lim) {
                        q--;
                        if (func_ov009_021a5cdc(a.cmp, first, q)) f = 1;
                    }
                    if (!f) break;
                    put(v, d, q);
                    d--;
                }
                put(v, d, first);
                first++; dest++;
            } while (first != a.last);
        }
    }
    out->p = dest; out->v = v;
}
