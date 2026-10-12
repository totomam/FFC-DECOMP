#include "ffc/types.h"

typedef struct Elem { uint32_t a; uint32_t b; } Elem;
typedef struct Dq { uint32_t pad; int32_t n; Elem *base; } Dq;
typedef struct Iter { Elem *cur; Dq *node; } Iter;

#define BLOCK_FULL(c, d) ((int32_t)((c) - (d)->base) >= (d)->n)

Iter func_ov002_021cc7a4(Elem *first, Elem *last, Iter res) {
    Elem *ip = res.cur;
    Dq *node = res.node;
    Elem *orig = res.cur;
    Elem *pos;
    Elem *r4;
    int32_t r5;
    Iter ret;

    if (first == last) goto done;
    if (!BLOCK_FULL(ip, node)) {
        *ip = *first;
    } else {
        if (ip != 0) *ip = *first;
        node->n++;
    }
    ip++;
    first++;
    if (first == last) goto done;

    while (first != last) {
        pos = ip;
        r4 = ip;
        for (;;) {
            r5 = 0;
            if (r4 != orig) {
                r4--;
                if ((int32_t)first->b > (int32_t)r4->b) r5 = 1;
            }
            if (r5 == 0) break;
            if (!BLOCK_FULL(pos, node)) {
                *pos = *r4;
            } else {
                if (pos != 0) *pos = *r4;
                node->n++;
            }
            pos--;
        }
        if (!BLOCK_FULL(pos, node)) {
            *pos = *first;
        } else {
            if (pos != 0) *pos = *first;
            node->n++;
        }
        ip++;
        first++;
    }

done:
    ret.cur = ip;
    ret.node = node;
    return ret;
}
