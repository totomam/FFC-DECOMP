#include "ffc/types.h"

extern char data_ov003_0217a314[];

typedef struct Node {
    struct Node *a;
    struct Node *b;
    uint32_t c;
} Node;

typedef struct Obj {
    void *vt;
    uint8_t pad[0x44 - 4];
    Node head;
    uint8_t flag;
} Obj;

void *func_ov003_0215f938(void *self) {
    Obj *s = (Obj *)self;
    Node *n;
    Node *t;
    Node *p;
    Node *q;
    Node *r;
    Node *nx;
    uint16_t old;
    uint32_t was;

    *(char **)s = data_ov003_0217a314;
    if (*(uint8_t **)&s->head.c != 0) {
        *(uint8_t *)(*(uint8_t **)&s->head.c + 0xdc) = 1;
    }

    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    was = 0;
    if (old) {
        was = 1;
    }

    if (s->flag) {
        n = &s->head;
        t = n->b;
        if (t) {
            do {
                n = t;
                t = n->b;
            } while (t);
        }
        if (n) {
            p = n;
            do {
                nx = p->a;
                p->a = 0;
                p->b = 0;
                p->c = 0;
                p = nx;
            } while (p);
        }
    } else {
        p = s->head.b;
        if (p) {
            q = p->a;
            if (q) {
                r = q->a;
                p->a = 0;
                if (r) {
                    p->a = r;
                    r->b = p;
                }
                q->b = 0;
                q->a = 0;
            }
        } else {
            q = s->head.a;
            if (q) {
                q->b = 0;
                s->head.a = 0;
            }
        }
    }

    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = (uint16_t)was;
    return self;
}
