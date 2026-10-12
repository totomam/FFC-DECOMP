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
    int flag = 1;
    Elem *p;
    Elem *d;

    if (n > s->cap) {
        x = func_02053ce0(s, n - s->cap);
        flag = 0;
    }

    if (flag) {
        uint32_t m = (s->size < n) ? s->size : n;
        Elem *mid = begin + m;
        d = s->data;
        for (p = begin; p < mid; p++) {
            *d = *p;
            d++;
        }
        if (n < s->size) {
            s->size -= (s->size - n);
            return;
        }
        if (s->size < n) {
            p = mid;
            d = s->data + s->size;
            for (; p != end; p++) {
                if (d != 0) {
                    *d = *p;
                }
                s->size++;
                d++;
            }
        }
    } else {
        func_02053ca0(s, n, x);
        d = s->data + s->size;
        for (p = begin; p != end; p++) {
            if (d != 0) {
                *d = *p;
            }
            s->size++;
            d++;
        }
    }
}
