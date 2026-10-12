/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct B { uint8_t b; };
extern "C" {
extern void func_0201e954(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036cd8(const void *object);
extern void func_ov005_02197684(void *a, void *b, uint32_t c);
extern void func_ov010_021bf39c(void *p, void *q, B flag);
extern uint32_t data_020b93b8;

struct Vec { uint32_t *data; uint32_t size; uint32_t cap; };
struct Obj { uint8_t pad[0x11c]; Vec v; uint32_t cnt; };

void func_ov010_021beb20(uint8_t *p)
{
    Obj *o = (Obj *)p;
    uint32_t i;
    uint32_t val;
    B fl;
    uint32_t obj[5];
    uint32_t c0 = o->v.size;
    o->v.size = diff(c0, c0);
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, obj);
        if (func_02036cd8(obj) != 0) {
            func_ov005_02197684(&val, obj, 1);
            if (o->v.size < o->v.cap) {
                uint32_t *sz = &o->v.size; uint32_t n = ++*sz; uint32_t m = n - 1; o->v.data[m] = val;
            } else {
                fl.b = 0;
                func_ov010_021bf39c(&o->v, &val, fl);
            }
        }
    }
    if (o->v.size == 0) {
        *(uint32_t *)(p + 0xfc) = 0;
    } else {
        *(uint32_t *)(p + 0xfc) = (o->v.size - 1) >> 3;
    }
}
}
