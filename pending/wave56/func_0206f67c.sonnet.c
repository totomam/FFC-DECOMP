/* cflags: -lang c++ */
#include "ffc/types.h"
struct E { uint8_t x; };
inline E id(E a){ return a; }

typedef struct { uint32_t a; uint16_t b; uint32_t c; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;
typedef struct { Elem *data; uint32_t size; uint32_t cap; uint32_t *pcap; uint32_t cnt; } Tmp;

extern "C" uint32_t func_0206f5fc(void *v, uint32_t x);
extern "C" void func_0206f908(void *t, uint32_t n, E z);
extern "C" void func_0206f898(void *t);
extern "C" void func_0206f67c(Vec *v, uint32_t n, Elem *src);

void func_0206f67c(Vec *v, uint32_t n, Elem *src) {
    Tmp t;
    Elem *ps, *pd, *p;
    uint32_t i, r;
    E z, z2, z3;

    t.data = 0; t.size = 0; t.cap = 0; t.cnt = 0;
    t.pcap = &v->cap;
    r = func_0206f5fc(v, v->size + n - v->cap);
    z.x = 0;
    z2 = id(z); z3 = id(z2);
    func_0206f908(&t, r, id(z3));
    t.cnt = v->size;
    p = t.data + t.cnt + t.size;
    for (i = n; i != 0; i--) { *p = *src; p++; }
    t.size += n;
    ps = v->data + v->size;
    pd = t.data + t.cnt;
    while (ps > v->data) {
        ps--; pd--;
        if (pd) *pd = *ps;
        t.cnt--;
        t.size++;
    }
    v->size = 0;
    {
        uint32_t c = v->cap; v->cap = t.cap; t.cap = c;
    }
    {
        Elem *d = v->data; v->data = t.data; t.data = d;
    }
    v->size = t.size;
    t.size = 0;
    func_0206f898(&t);
}
