/* cflags: -lang c++ */
#include "ffc/types.h"
struct E { uint32_t a; uint8_t b; };
struct V { uint32_t p; E *data; uint32_t size; uint32_t cap; };
struct B { uint8_t x; B(uint8_t v) : x(v) {} B(const B &o) : x(o.x) {} ~B() {} };
extern "C" void func_02030ed0(void *v, const E *e, B b);
extern "C" void func_0202e200(V *v, uint32_t a, uint8_t b) {
    E loc; loc.a = a; loc.b = b;
    uint8_t zz = 0;
    if (v->size < v->cap) {
        v->size++;
        E *d = &v->data[v->size-1];
        d->a = loc.a;
        d->b = loc.b;
        return;
    }
    B z(zz);
    func_02030ed0((char*)v + 4, &loc, z);
}
