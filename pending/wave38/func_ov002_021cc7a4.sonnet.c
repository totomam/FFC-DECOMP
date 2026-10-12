#include "ffc/types.h"

typedef struct Elem { uint32_t a; uint32_t b; } Elem;
typedef struct Dq { uint32_t pad; int32_t n; Elem *base; } Dq;
typedef struct Iter { Elem *cur; Dq *node; } Iter;

Iter func_ov002_021cc7a4(Elem *volatile first_, Elem *volatile last, Iter res) {
    Iter t1, t2, t3;
    Iter *p1, *p2, *p3;
    Elem *ip = res.cur;
    Elem *orig = res.cur;
    Elem *pos;
    Dq *node = res.node;
    int32_t r5;
    int c;
    Elem *first = first_;

    if (first == last) goto done;
    p1 = &t1; p1->cur = ip; p1->node = node;
    if ((int32_t)(ip - node->base) < node->n) {
        ip->a = first->a; ip->b = first->b;
    } else {
        if (ip != 0) { ip->a = first->a; ip->b = first->b; }
        p1->node->n++;
    }
    ip++; first++;
    c = (first != last) ? 1 : 0;
    if (c) do {
        Elem *r4 = ip; pos = ip;
        while (r5 = 0, (r4 != orig ? (r4--, ((int32_t)first->b > (int32_t)r4->b ? (r5 = 1) : 0)) : 0), r5) {
            p2 = &t2; p2->cur = pos; p2->node = node;
            if ((int32_t)(pos - node->base) < node->n) {
                pos->a = r4->a; pos->b = r4->b;
            } else {
                if (pos != 0) { pos->a = r4->a; pos->b = r4->b; }
                p2->node->n++;
            }
            pos--;
        }
        p3 = &t3; p3->cur = pos; p3->node = node;
        if ((int32_t)(pos - node->base) < node->n) {
            pos->a = first->a; pos->b = first->b;
        } else {
            if (pos != 0) { pos->a = first->a; pos->b = first->b; }
            p3->node->n++;
        }
        ip++; first++;
    } while (first != last);
done:
    res.cur = ip;
    return res;
}
