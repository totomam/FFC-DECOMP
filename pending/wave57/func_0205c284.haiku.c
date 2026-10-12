#include "ffc/types.h"

extern int32_t func_0205c854(void *p);
extern void func_0205c820(void *p);

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
    RingF t1, t2, t3, u;
    int32_t n, sz, m;
    uint32_t *w, *start;

    if (a->head != b->head) {
        n = func_0205c854(b);
        for (;;) {
            sz = c->end - c->head;
            m = *((sz < n) ? &sz : &n);
            t1 = *a;
            func_0205c820(&t1);
            u = t1;
            t3 = t1;
            t2 = *a;
            start = u.head;
            w = c->head;
            while (t2.head != start) {
                *w = *t2.head;
                t2.head++;
                if (t2.head == t2.end) {
                    t2.head = t2.base;
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
