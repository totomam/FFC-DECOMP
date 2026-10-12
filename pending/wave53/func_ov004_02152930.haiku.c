#include "ffc/types.h"

typedef struct Elem {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint16_t e;
    uint32_t f;
} Elem;

typedef struct Vec {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct Tmp {
    Elem *data;
    uint32_t len;
    uint32_t spare;
    uint32_t *capp;
    uint32_t cnt;
} Tmp;

extern uint32_t func_ov004_021528b0(uint32_t x);
extern void func_ov004_02152494(Tmp *t, uint32_t a, uint32_t b);
extern void func_ov004_021522d8(Tmp *t);

void func_ov004_02152930(Vec *p, uint32_t n, Elem *src)
{
    Tmp t;
    uint8_t v;
    uint32_t r;
    uint32_t tmp;
    Elem *d;
    Elem *end;
    Elem *beg;
    Elem *dst;

    t.data = 0;
    t.len = 0;
    t.spare = 0;
    t.capp = &p->cap;
    t.cnt = 0;

    r = func_ov004_021528b0(p->count + n - p->cap);
    v = 0;
    func_ov004_02152494(&t, r, v);

    t.cnt = p->count;
    d = t.data + p->count + t.len;
    if (n != 0) {
        do {
            if (d != 0) {
                *d = *src;
            }
            t.len++;
            d++;
            n--;
        } while (n != 0);
    }

    end = p->data + p->count;
    beg = p->data;
    dst = t.data + t.cnt;
    if (end > beg) {
        do {
            end--;
            dst--;
            if (dst != 0) {
                *dst = *end;
            }
            t.cnt--;
            t.len++;
        } while (end > beg);
    }

    p->count = 0;
    tmp = p->cap;
    p->cap = t.spare;
    t.spare = tmp;

    tmp = (uint32_t)p->data;
    p->data = t.data;
    t.data = (Elem *)tmp;

    p->count = t.len;
    t.len = 0;
    func_ov004_021522d8(&t);
}
