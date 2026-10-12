#include "ffc/types.h"

extern char data_ov003_0217a314[];
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
} Node;

typedef struct Obj {
    void *vt;
    uint8_t pad[0x40];
    Node *n44;
    Node *n48;
    uint8_t *n4c;
    uint8_t f50;
} Obj;

Obj *func_ov003_0215f828(Obj *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t prev;
    uint32_t flag;
    uint8_t *q;
    Node *c;
    Node *b;
    Node *a;
    Node *x;

    p->vt = data_ov003_0217a314;
    q = p->n4c;
    if (q != 0) {
        q[0xdc] = 1;
    }

    prev = *ime;
    *ime = 0;
    flag = (prev != 0);

    if (p->f50 != 0) {
        c = (Node *)&p->n44;
        while (c->f4 != 0) {
            c = c->f4;
        }
        if (c != 0) {
            do {
                Node *nx = c->f0;
                c->f0 = 0;
                c->f4 = 0;
                c->f8 = 0;
                c = nx;
            } while (c != 0);
        }
    } else {
        b = p->n48;
        if (b != 0) {
            a = b->f0;
            if (a != 0) {
                x = a->f0;
                b->f0 = 0;
                if (x != 0) {
                    b->f0 = x;
                    x->f4 = b;
                }
                a->f4 = 0;
                a->f0 = 0;
            }
        } else {
            a = (Node *)p->n44;
            if (a != 0) {
                a->f4 = 0;
                p->n44 = 0;
            }
        }
    }

    prev = *ime;
    *ime = flag;
    func_02056844(p);
    return p;
}
