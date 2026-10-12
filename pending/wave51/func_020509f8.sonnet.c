#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t x, uint32_t d);
extern void func_02050c10(void *arr, void *entry, uint8_t flag);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
} Entry;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    Entry *arr;
    uint32_t count;
    uint32_t cap;
} S;

void func_020509f8(S *s, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    Entry e;
    uint8_t flag;
    uint8_t f2;
    uint32_t v;
    uint32_t idx;
    Entry *p;

    v = func_0209a978(s->f8 + a5 - 1, a5);
    v = a5 * v;
    s->f8 = v;
    e.a = a1;
    e.b = a2;
    e.c = v;
    e.d = a3;
    e.e = a4;
    if (s->count < s->cap) {
        s->count = s->count + 1;
        idx = s->count - 1;
        p = &s->arr[idx];
        p->a = e.a;
        p->b = e.b;
        p->c = e.c;
        p->d = e.d;
        p->e = e.e;
    } else {
        flag = 0;
        f2 = flag;
        func_02050c10(&s->arr, &e, f2);
    }
    s->f8 = s->f8 + a3 * a4;
}
