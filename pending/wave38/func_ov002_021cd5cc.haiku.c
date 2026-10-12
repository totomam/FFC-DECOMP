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

void func_ov002_021cd5cc(Range r) {
    Pair *first = r.first;
    Pair *end = r.end;
    Pair *p;
    Pair *q;
    Pair *hole;
    uint32_t key;
    uint32_t val;
    int c;

    if (first == end) {
        return;
    }
    p = first + 1;
    if (p == end) {
        return;
    }
    do {
        key = p->key;
        q = p - 1;
        if (key > q->key) {
            val = p->val;
            p->key = q->key;
            p->val = q->val;
            hole = q;
            for (;;) {
                c = 0;
                if (q != first) {
                    q = q - 1;
                    if (key > q->key) {
                        c = 1;
                    }
                }
                if (c == 0) {
                    break;
                }
                hole->key = q->key;
                hole->val = q->val;
                hole = hole - 1;
            }
            hole->key = key;
            hole->val = val;
        }
        p = p + 1;
    } while (p != end);
}
