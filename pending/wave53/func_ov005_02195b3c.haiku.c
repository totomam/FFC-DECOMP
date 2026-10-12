#include "ffc/types.h"

extern uint8_t data_ov005_02199278[];
extern void func_02062868(void *p);
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    uint32_t data;
    uint8_t flag;
} Node;

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Self {
    void *vtbl;
    uint32_t pad[4];
    Node sent;
    Obj *o24;
    Obj *o28;
} Self;

Self *func_ov005_02195b3c(Self *self)
{
    uint16_t old;
    uint32_t f;
    Node *n;
    Obj *p;

    self->vtbl = data_ov005_02199278;
    p = self->o28;
    if (p) {
        if (p) {
            ((void (*)(Obj *))p->vt[1])(p);
        }
        self->o28 = 0;
    }
    p = self->o24;
    if (p) {
        if (p) {
            ((void (*)(Obj *))p->vt[1])(p);
        }
        self->o24 = 0;
    }

    n = &self->sent;
    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    f = (old != 0);

    if (n->flag) {
        if (n->next) {
            do {
                n = n->next;
            } while (n->next);
        }
        while (n) {
            Node *q = n->prev;
            n->prev = 0;
            n->next = 0;
            n->data = 0;
            n = q;
        }
    } else {
        Node *s = n->next;
        if (s) {
            Node *t = s->prev;
            if (t) {
                Node *u = t->prev;
                s->prev = 0;
                if (u) {
                    s->prev = u;
                    u->next = s;
                }
                t->next = 0;
                t->prev = 0;
            }
        } else {
            Node *q = n->prev;
            if (q) {
                q->next = 0;
                n->prev = 0;
            }
        }
    }

    (void)*(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = f;
    func_02062868(self);
    func_02056844(self);
    return self;
}
