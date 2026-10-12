/* cflags: -lang c++ */
#include "ffc/types.h"
struct Al { uint8_t c; Al() : c(0) {} Al(const Al&o) : c(o.c) {} };

typedef struct Sub {
    void *data;
    uint32_t size;
    uint32_t cap;
} Sub;

typedef struct Elem {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Sub sub;
    uint8_t flag;
} Elem;

typedef struct Vec {
    Elem *data;
    uint32_t size;
    uint32_t cap;
} Vec;

extern "C" uint32_t func_020715fc(Vec *v, int diff);
extern "C" void func_02071a14(Vec *t, uint32_t cap, Al flag);
extern "C" void func_02071420(Sub *dst, void *begin, void *end, Al flag);
extern "C" void func_0207197c(Vec *t);

extern "C" void func_0207167c(Vec *v, int n, Elem *src)
{
    Vec t;
    uint32_t *volatile pc0 = &v->cap;
    Vec *volatile vv;
    uint32_t cnt;
    uint32_t r;
    Al f;
    Elem *dst;
    Elem *s;
    uint32_t oldsize;

    vv = v;
    t.data = 0;
    t.size = 0;
    t.cap = 0;
    
    r = func_020715fc(v, (int)(vv->size + n) - (int)vv->cap);
    func_02071a14(&t, r, f);
    oldsize = vv->size;
    cnt = oldsize;

    if (n != 0) {
        dst = t.data + oldsize + t.size;
        do {
            if (dst != 0) {
                dst->a = src->a;
                dst->b = src->b;
                dst->c = src->c;
                dst->sub.data = 0;
                dst->sub.size = 0;
                dst->sub.cap = 0;
                func_02071420(&dst->sub, src->sub.data,
                              (void *)((uint32_t)src->sub.data + (src->sub.size << 4)), f);
                dst->flag = src->flag;
            }
            t.size++;
            dst++;
            n--;
        } while (n != 0);
    }

    s = vv->data + oldsize;
    dst = t.data + cnt;
    if (s > vv->data) {
        do {
            s--;
            dst--;
            if (dst != 0) {
                dst->a = s->a;
                dst->b = s->b;
                dst->c = s->c;
                dst->sub.data = 0;
                dst->sub.size = 0;
                dst->sub.cap = 0;
                func_02071420(&dst->sub, s->sub.data,
                              (void *)((uint32_t)s->sub.data + (s->sub.size << 4)), f);
                dst->flag = s->flag;
            }
            t.size++;
            cnt--;
        } while (s > vv->data);
    }

    {
        Elem *pd = vv->data;
        uint32_t ps = vv->size;
        uint32_t pc = vv->cap;
        vv->data = t.data;
        vv->size = t.size;
        vv->cap = t.cap;
        t.data = pd;
        t.size = ps;
        t.cap = pc;
    }
    func_0207197c(&t);
}
