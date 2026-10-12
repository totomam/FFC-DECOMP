/* cflags: -lang c++ */
#include "ffc/types.h"

struct Ring { uint32_t *data; uint32_t aux; uint32_t size; uint32_t cap; };
struct Tmp { uint32_t *data; uint32_t aux; uint32_t size; uint32_t cap; uint32_t *capref; };
struct It { uint32_t *cur, *base, *first, *last; };
struct E { uint8_t a; E() : a(0) {} E(const E &o) : a(o.a) {} };

extern "C" {
uint64_t func_0209a978(uint32_t idx);
uint32_t *func_0205be40(Ring *r, int n);
void func_0205c66c(Tmp *tmp, uint32_t *buf, E e);
void func_0205c6c4(Tmp *tmp, It *a, It *b, E e);
void func_0205c650(Tmp *tmp);
void func_0205bd48(Ring *r, uint32_t *item);
}

void func_0205bd48(Ring *r, uint32_t *item)
{
    Tmp tmp;
    It a, b;
    uint32_t idx;
    uint32_t *slot;

    if (r->size + 1 < r->cap) {
        idx = (uint32_t)(func_0209a978(r->aux + r->size) >> 32);
        slot = r->data + idx;
        if (slot != 0) *slot = *item;
        r->size = r->size + 1;
        return;
    }
    tmp.capref = &r->cap;
    tmp.data = 0; tmp.aux = 0; tmp.size = 0; tmp.cap = 0;
    uint32_t *nb = func_0205be40(r, 1);
    {
        E e;
        E f(e);
        func_0205c66c(&tmp, nb, f);
    }
    tmp.aux = r->size;
    slot = tmp.data + tmp.aux;
    if (slot != 0) *slot = *item;
    tmp.size = tmp.size + 1;
    if (r->cap != 0) idx = (uint32_t)(func_0209a978(r->aux + r->size) >> 32);
    else idx = 0;
    a.cur = r->data + idx;
    a.base = r->data;
    a.first = r->data + r->aux;
    a.last = r->data + r->cap;
    b.cur = a.first; b.base = r->data; b.first = a.first; b.last = a.last;
    {
        E e;
        E f(e);
        func_0205c6c4(&tmp, &b, &a, f);
    }
    r->size = 0;
    {
        uint32_t *d = r->data; r->data = tmp.data; tmp.data = d;
        uint32_t x = r->aux; r->aux = tmp.aux; tmp.aux = x;
        uint32_t s = tmp.size; tmp.size = 0; r->size = s;
        uint32_t c = r->cap; r->cap = tmp.cap; tmp.cap = c;
    }
    func_0205c650(&tmp);
}
