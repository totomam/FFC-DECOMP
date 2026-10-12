/* cflags: -lang c++ */
#include "ffc/types.h"
struct Entry { uint32_t v; uint8_t f; };
struct Vec { uint32_t pad; Entry *buf; uint32_t count; uint32_t cap; };
struct B { uint8_t x; B(uint8_t v) : x(v) {} B(const B &o) : x(o.x) {} };
extern "C" void func_02030ed0(void *a, void *b, B c);
extern "C" void func_0202e200(Vec *p, uint32_t val, uint8_t c);
extern "C" void func_0202e200(Vec *p, uint32_t val, uint8_t c)
{
    Entry l;
    l.v = val;
    l.f = c;
    if (p->count < p->cap) {
        uint32_t n = p->count + 1;
        p->count = n;
        Entry *e = &p->buf[n - 1];
        e->v = l.v;
        e->f = l.f;
        return;
    }
    B z(0);
    func_02030ed0(&p->buf, &l, z);
}
