#include "ffc/types.h"

typedef struct Elem {
    uint32_t a;
    uint32_t b;
} Elem;

typedef struct Deq {
    uint32_t pad;
    int32_t cnt;
    Elem *base;
} Deq;

typedef struct Iter {
    Elem *cur;
    Deq *d;
} Iter;

Iter func_ov002_021cf2c0(Elem *first, Elem *last, Elem *dest, Deq *d)
{
    Iter it;
    Elem *orig = dest;
    Elem *r4;
    int r5;

    it.cur = dest;
    it.d = d;
    if (first == last) {
        return it;
    }
    if (it.cur - it.d->base < it.d->cnt) {
        *it.cur = *first;
    } else {
        if (it.cur) {
            *it.cur = *first;
        }
        it.d->cnt++;
    }
    it.cur++;
    first++;
    while (first != last) {
        r4 = it.cur;
        for (;;) {
            r5 = 0;
            if (r4 != orig) {
                r4--;
                if (first->b < r4->b) {
                    r5 = 1;
                }
            }
            if (r5 == 0) {
                break;
            }
            if (r4 == r4) {
            }
            it.cur--;
            if (it.cur - it.d->base < it.d->cnt) {
                *it.cur = *r4;
            } else {
                if (it.cur) {
                    *it.cur = *r4;
                }
                it.d->cnt++;
            }
            it.cur++;
            it.cur--;
        }
        if (it.cur - it.d->base < it.d->cnt) {
            *it.cur = *first;
        } else {
            if (it.cur) {
                *it.cur = *first;
            }
            it.d->cnt++;
        }
        it.cur++;
        first++;
    }
    return it;
}
