#include "ffc/types.h"

extern int32_t func_0205c854(void *p);
extern void func_0205c820(void *p, int32_t m);

typedef struct {
    uint32_t *head;
    uint32_t *base;
    uint32_t *cap;
    uint32_t *end;
} Ring;

typedef struct {
    uint32_t *head;
    uint32_t *base;
    uint32_t *cap;
    uint32_t *end;
    uint8_t flag;
} RingF;

void func_0205c284(Ring *out, RingF *a, Ring *b, Ring *c)
{
    int32_t m, sz, n;
    RingF t1, u, t3, t2, v;
    uint32_t *w, *start;

    if (a->head != b->head) {
        n = func_0205c854(b);
        for (;;) {
            sz = c->end - c->head;
            m = *((sz < n) ? &sz : &n);
            t1 = *a;
            func_0205c820(&t1, m);
            u = t1;
            t3 = t1;
            t2 = *a;
            start = u.head;
            w = c->head;
            while (t2.head != start) {
                v = t2;
                *w = *v.head;
                t2.head = v.head + 1;
                if (t2.head == v.end) {
                    t2.head = v.base;
                }
                w++;
            }
            n -= m;
            c->head += m;
            if (c->head == c->end) {
                c->head = c->base;
            }
            if (n == 0) {
                break;
            }
            *a = t3;
        }
    }
    *out = *c;
}
