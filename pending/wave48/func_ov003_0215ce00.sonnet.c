#include "ffc/types.h"

extern uint8_t data_ov003_0217a2fc[];

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    uint32_t f8;
} Node;

typedef struct VT {
    void *s0;
    void (*dtor)(void *);
} VT;

typedef struct Obj {
    const VT *vt;
} Obj;

typedef struct S {
    void *vt0;          /* 0x00 */
    uint8_t pad04[0x34 - 4];
    Node *f34;          /* 0x34 */
    Node *f38;          /* 0x38 */
    void *f3c;          /* 0x3c */
    uint8_t f40;        /* 0x40 */
    uint8_t pad41[0x54 - 0x41];
    void *f54;
    void *f58;
    void *f5c;
    void *f60;
} S;

S *func_ov003_0215ce00(S *p)
{
    uint16_t prev;
    uint16_t ret;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;

    p->vt0 = data_ov003_0217a2fc;

    if (p->f54) {
        Obj *ob = (Obj *)p->f54;
        if (ob) ob->vt->dtor(ob);
        p->f54 = 0;
    }

    if (p->f58) {
        Obj *ob = (Obj *)p->f58;
        if (ob) ob->vt->dtor(ob);
        p->f58 = 0;
    }

    if (p->f5c) {
        Obj *ob = (Obj *)p->f5c;
        if (ob) ob->vt->dtor(ob);
        p->f5c = 0;
    }

    if (p->f60) {
        Obj *ob = (Obj *)p->f60;
        if (ob) ob->vt->dtor(ob);
        p->f60 = 0;
    }

    if (p->f3c) {
        *((uint8_t *)p->f3c + 0xe4) = 0;
    }

    ret = 0;
    prev = *ime;
    *ime = 0;
    if (prev != 0) {
        ret = 1;
    }

    if (p->f40) {
        Node *n = (Node *)&p->f34;
        Node *q = n->f4;
        while (q) {
            n = q;
            q = n->f4;
        }
        if (n) {
            do {
                Node *nx = n->f0;
                n->f0 = 0;
                n->f4 = 0;
                n->f8 = 0;
                n = nx;
            } while (n);
        }
    } else {
        Node *a = p->f38;
        if (a) {
            Node *b = a->f0;
            if (b) {
                Node *c = b->f0;
                a->f0 = 0;
                if (c) {
                    a->f0 = c;
                    c->f4 = a;
                }
                b->f4 = 0;
                b->f0 = 0;
            }
        } else {
            if (p->f34) {
                p->f34->f4 = 0;
                p->f34 = 0;
            }
        }
    }

    prev = *ime;
    *ime = ret;
    return p;
}
