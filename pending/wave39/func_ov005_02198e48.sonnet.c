/* cflags: -lang c++ */
#include "ffc/types.h"


struct B1 { uint8_t v; };
inline B1 cp(const B1 &a){B1 b; b.v=a.v; return b;}
inline B1 cp3(const B1 &a){B1 b; b.v=a.v; return b;}
inline B1 cp2(const B1 &a){B1 b; b.v=a.v; return b;}
extern "C" uint32_t func_ov005_02198dc8(void *p, uint32_t d);
extern "C" void func_ov005_02198f14(void *t, uint32_t a, B1 b);
extern "C" void func_ov005_02198f04(void *t);

struct Buf {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
    uint32_t *capp;
    uint32_t k;
};

extern "C" void func_ov005_02198e48(Buf *p, uint32_t n, uint32_t *src) {
    Buf t;
    uint32_t *dst;
    uint32_t *end;
    uint32_t *dst2;
    uint32_t r;
    uint32_t tmp;
    

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.k = 0;
    t.capp = &p->cap;
    r = func_ov005_02198dc8(p, p->size + n - p->cap);
    B1 z0; z0.v=0; B1 z1=cp(z0); B1 z2=cp2(z1); B1 z3=cp3(z2); func_ov005_02198f14(&t, r, z3);

    t.k = p->size;
    dst = t.data + p->size + t.size;
    while (n != 0) {
        *dst++ = *src;
        n--;
    }
    t.size += n;
    end = p->data + p->size;
    dst2 = t.data + t.k;
    while (end > p->data) {
        end--;
        dst2--;
        if (dst2) *dst2 = *end;
        t.k--;
        t.size++;
    }
    p->size = 0;
    tmp = p->cap;
    p->cap = t.cap;
    t.cap = tmp;
    tmp = (uint32_t)p->data;
    p->data = t.data;
    t.data = (uint32_t *)tmp;
    p->size = t.size;
    t.size = 0;
    func_ov005_02198f04(&t);
}
