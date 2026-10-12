#include "ffc/types.h"

extern uint32_t data_ov005_02199278;
extern void func_02062868(void *p);

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    uint32_t pad;
    uint8_t flag;
    uint8_t pad2[3];
} List;

typedef struct Obj {
    void *vtbl;
    uint8_t pad0[0x10];
    List list;
    void *f24;
    void *f28;
} Obj;

typedef void (*VFn)(void *);

void *func_ov005_02195a8c(void *p0)
{
    Obj *self = (Obj *)p0;
    volatile uint16_t *ip = (volatile uint16_t *)0x04000208;
    uint16_t ime;
    uint32_t r1;
    List *l;

    self->vtbl = (void *)&data_ov005_02199278;

    if (self->f28) {
        if (self->f28) {
            VFn fn = ((VFn *)(*(void **)self->f28))[1];
            fn(self->f28);
        }
        self->f28 = 0;
    }

    if (self->f24) {
        if (self->f24) {
            VFn fn = ((VFn *)(*(void **)self->f24))[1];
            fn(self->f24);
        }
        self->f24 = 0;
    }

    r1 = 0;
    ime = *ip;
    *ip = (uint16_t)r1;
    if (ime != 0) {
        r1 = 1;
    }
    l = &self->list;

    if (l->flag) {
        Node *n = l->tail;
        if (n) {
            while (n->b) {
                n = n->b;
            }
            while (n) {
                Node *next = n->a;
                n->a = 0;
                n->b = 0;
                n->c = 0;
                n = next;
            }
        }
    } else {
        Node *t = l->tail;
        if (t) {
            Node *x = t->a;
            if (x) {
                Node *y = x->a;
                t->a = 0;
                if (y) {
                    t->a = y;
                    y->b = t;
                }
                x->b = 0;
                x->a = 0;
            }
        } else {
            Node *h = l->head;
            if (h) {
                h->b = 0;
                l->head = 0;
            }
        }
    }

    (void)*(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = (uint16_t)r1;

    func_02062868(self);
    return self;
}
