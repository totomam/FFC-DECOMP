#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Elem;

typedef struct {
    uint32_t f0;
    int32_t size;
    Elem *start;
} Map;

typedef struct {
    Elem *cur;
    Map *map;
} Iter;

void func_ov002_021cd4a8(Iter *out, Elem *first, Elem *last, Elem *dest, Map *map)
{
    Elem *d = dest;
    Elem *p;
    Elem *q;
    Iter it;

    if (first == last) {
        out->cur = d;
        out->map = map;
        return;
    }

    it.cur = d;
    it.map = map;
    if (it.cur - it.map->start < it.map->size) {
        *it.cur = *first;
    } else {
        if (it.cur != 0) {
            *it.cur = *first;
        }
        it.map->size++;
    }
    d++;
    first++;

    while (first != last) {
        p = d;
        q = d;
        for (;;) {
            int more = 0;
            if (p == dest) {
                break;
            }
            p--;
            if (first->a > p->a) {
                more = 1;
            }
            if (!more) {
                break;
            }
            it.cur = q;
            if (it.cur - it.map->start < it.map->size) {
                *q = *p;
            } else {
                if (q != 0) {
                    *q = *p;
                }
                it.map->size++;
            }
            q--;
        }
        it.cur = q;
        if (it.cur - it.map->start < it.map->size) {
            *q = *first;
        } else {
            if (q != 0) {
                *q = *first;
            }
            it.map->size++;
        }
        d++;
        first++;
    }

    out->cur = d;
    out->map = map;
}
