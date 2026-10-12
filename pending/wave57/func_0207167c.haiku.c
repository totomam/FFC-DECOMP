#include "ffc/types.h"

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

extern uint32_t func_020715fc(Vec *v, int diff);
extern void func_02071a14(Vec *t, uint32_t cap, uint32_t flag);
extern void func_02071420(Sub *dst, void *begin, void *end, uint32_t flag);
extern void func_0207197c(Vec *t);

void func_0207167c(Vec *v, int n, Elem *src)
{
    Vec t;
    uint32_t r;
    uint8_t f;
    Elem *dst;
    Elem *s;
    uint32_t oldsize;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    f = 0;
    r = func_020715fc(v, (int)(v->size + n) - (int)v->cap);
    func_02071a14(&t, r, f);
    oldsize = v->size;

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

    s = v->data + oldsize;
    dst = t.data + oldsize;
    if (s > v->data) {
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
        } while (s > v->data);
    }

    {
        Elem *pd = v->data;
        uint32_t ps = v->size;
        uint32_t pc = v->cap;
        v->data = t.data;
        v->size = t.size;
        v->cap = t.cap;
        t.data = pd;
        t.size = ps;
        t.cap = pc;
    }
    func_0207197c(&t);
}
