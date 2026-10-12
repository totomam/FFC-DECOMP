#include "ffc/types.h"

typedef struct {
    uint32_t key;
    uint32_t val;
} Pair;

typedef struct {
    Pair *first;
    Pair *end;
    uint32_t x;
    uint32_t y;
} Range;

void func_ov002_021d0d24(Range r) {
    Pair *first = r.first;
    Pair *end = r.end;
    int c;
    uint32_t val;
    Pair *hole;
    uint32_t key;
    Pair *q;
    Pair *p;

    if (first == end) {
        return;
    }
    p = first + 1;
    if (p == end) {
        return;
    }
    do {
        key = p->key;
        q = p;
        q--;
        if (key > q->key) {
            val = p->val;
            p->key = q->key;
            p->val = q->val;
            hole = q;
            goto test;
            do {
                hole->key = q->key;
                hole->val = q->val;
                hole--;
            test:
                c = 0;
                if (q != first) {
                    q--;
                    if (key > q->key) c = 1;
                }
            } while (c);
            hole->key = key;
            hole->val = val;
        }
        p = p + 1;
    } while (p != end);
}
