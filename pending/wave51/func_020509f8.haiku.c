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
    uint32_t v;
    uint8_t flag;

    v = func_0209a978(s->f8 + a5 - 1, a5) * a5;
    s->f8 = v;
    e.a = a1;
    e.b = a2;
    e.c = v;
    e.d = a3;
    e.e = a4;
    if (s->count < s->cap) {
        uint32_t idx = s->count;
        s->count = idx + 1;
        s->arr[idx] = e;
    } else {
        flag = 0;
        func_02050c10(&s->arr, &e, flag);
    }
    s->f8 = s->f8 + a3 * a4;
}
