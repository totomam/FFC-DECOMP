/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern uint32_t func_02071810(int32_t a);
struct A { uint8_t c; };
extern void func_020719c4(void *t, uint32_t r, A f);
extern void func_020719b4(void *t);
}
inline A cp(const A &o) { A r; r.c = o.c; return r; }

typedef struct {
    uint32_t w[4];
} Elem;

typedef struct {
    Elem *data;
    int32_t count;
    uint32_t f8;
} Vec;

typedef struct {
    Elem *data;
    int32_t count;
    uint32_t f8;
    uint32_t *link;
    int32_t saved;
} Tmp;

extern "C" void func_02071890(Vec *s, int32_t n) {
    Elem z;
    Tmp t;
    Elem *dst;
    Elem *end;
    Elem *tmpdata;
    uint32_t tf8;
    uint32_t r;
    int32_t old;

    A a;
    a.c = 0;
    A b = cp(a);
    t.data = 0;
    t.count = 0;
    t.f8 = 0;
    t.link = &s->f8;
    t.saved = 0;

    r = func_02071810(s->count + n - s->f8);
    func_020719c4(&t, r, cp(b));

    dst = (Elem *)((uint8_t *)t.data + (s->count << 4) + (t.count << 4));
    if (n != 0) {
        do {
            z.w[0] = 0;
            z.w[1] = 0;
            z.w[2] = 0;
            z.w[3] = 0;
            if (dst != 0) {
                *dst = z;
            }
            t.count++;
            dst++;
            n--;
        } while (n != 0);
    }

    old = s->count;
    t.saved = old;
    end = (Elem *)((uint8_t *)s->data + (s->count << 4));
    dst = (Elem *)((uint8_t *)t.data + (old << 4));
    while (end > s->data) {
        end--;
        dst--;
        if (dst != 0) {
            *dst = *end;
        }
        t.saved--;
        t.count++;
    }

    s->count = 0;
    tf8 = t.f8;
    t.f8 = s->f8;
    s->f8 = tf8;
    tmpdata = s->data;
    s->data = t.data;
    t.data = tmpdata;
    s->count = t.count;
    t.count = 0;

    func_020719b4(&t);
}
