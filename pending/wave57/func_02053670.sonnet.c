#include "ffc/types.h"

typedef struct Elem {
    uint32_t w[4];
} Elem;

typedef struct Vec {
    Elem *data;
    uint32_t size;
    uint32_t cap;
} Vec;

extern uint32_t func_02053ce0(Vec *s, uint32_t n);
extern void func_02053ca0(Vec *s, uint32_t n, uint32_t x);

void func_02053670(Vec *s, Elem *begin, Elem *end)
{
    uint32_t n = end - begin;
    uint32_t x = 0;
    uint32_t flag = 1;
    Elem *d;
    Elem *e = end;

    if (n > s->cap) {
        flag = 0;
        x = func_02053ce0(s, n - s->cap);
    }

    if (flag) {
        uint32_t *pm = (s->size < n) ? &s->size : &n;
        Elem *mid = begin + *pm;
        d = s->data;
        for (; begin < mid; begin++) {
            *d = *begin;
            d++;
        }
        if (n < s->size) {
            s->size -= (s->size - n);
            return;
        }
        if (s->size < n) {
            d = s->data + s->size;
            for (; mid != e; mid++) {
                if (d != 0) {
                    *d = *mid;
                }
                s->size++;
                d++;
            }
        }
    } else {
        func_02053ca0(s, n, x);
        d = s->data + s->size;
        for (; begin != e; begin++) {
            if (d != 0) {
                *d = *begin;
            }
            s->size++;
            d++;
        }
    }
}
