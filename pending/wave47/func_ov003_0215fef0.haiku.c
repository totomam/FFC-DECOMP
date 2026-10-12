#include "ffc/types.h"

extern uint8_t data_ov003_0217a368[];
extern void func_ov003_02152ba0(uint32_t x);

typedef struct Q {
    struct Q *n0;
    struct Q *n4;
    uint32_t n8;
    uint8_t f12;
} Q;

typedef struct Obj {
    void *vtbl;
    uint8_t pad04[0x14 - 4];
    Q list;
    uint8_t pad_end[0x28 - 0x14 - sizeof(Q)];
    void *f28;
    uint8_t f2c;
} Obj;

Obj *func_ov003_0215fef0(Obj *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old;
    uint16_t r1;
    Q *q;
    Q *t;
    Q *q2;

    p->vtbl = data_ov003_0217a368;
    if (p->f2c == 0) {
        uint8_t *o = (uint8_t *)p->f28;
        uint8_t *m = *(uint8_t **)(o + 0x80);
        uint32_t v = *(uint32_t *)(m + 0x180);
        func_ov003_02152ba0(v);
    }
    q = (Q *)((uint8_t *)p + 0x14);
    old = *ime;
    r1 = 0;
    *ime = r1;
    if (old != 0) {
        r1 = 1;
    }
    if (q->f12 != 0) {
        if (q->n4 != 0) {
            do {
                q = q->n4;
            } while (q->n4 != 0);
        }
        if (q != 0) {
            do {
                q2 = q->n0;
                q->n0 = 0;
                q->n4 = 0;
                q->n8 = 0;
                q = q2;
            } while (q2 != 0);
        }
    } else {
        t = q->n4;
        if (t != 0) {
            Q *x = t->n0;
            if (x != 0) {
                Q *y = x->n0;
                t->n0 = 0;
                if (y != 0) {
                    t->n0 = y;
                    y->n4 = t;
                }
                x->n4 = 0;
                x->n0 = 0;
            }
        } else {
            t = q->n0;
            if (t != 0) {
                t->n4 = 0;
                q->n0 = 0;
            }
        }
    }
    (void)*ime;
    *ime = r1;
    return p;
}
