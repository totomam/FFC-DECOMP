#include "ffc/types.h"

extern uint32_t data_ov009_021afd64;
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);

typedef void (*VFn)(void *, void *);

typedef struct Node {
    struct Node *next;
    struct Node *link;
    uint32_t extra;
} Node;

typedef struct Obj {
    void *vt;
    uint8_t pad0[0x7c];
    void *slot[8];
    void *extra;
    uint8_t pad1[0x214 - 0xa4];
    void *obj214;
    uint8_t pad2[0x250 - 0x218];
    void *c250;
    Node *list254;
    Node *link258;
    void *b25c;
    uint8_t flag260;
} Obj;

#define IME (*(volatile uint16_t *)0x4000208)

void *func_ov009_0219b3c8(void *self)
{
    Obj *p = (Obj *)self;
    uint8_t i;
    uint16_t old;
    uint32_t prev;
    void *o;

    p->vt = (void *)&data_ov009_021afd64;

    for (i = 0; i < 8; i++) {
        o = p->slot[i];
        if (o != 0) {
            func_0205d620(o);
            func_02056844(o);
            p->slot[i] = 0;
        }
    }

    o = p->extra;
    if (o != 0) {
        func_0205d620(o);
        func_02056844(o);
        p->extra = 0;
    }

    if (p->obj214 != 0 && p->b25c != 0) {
        VFn fn = ((VFn *)(*(void **)p->obj214))[8];
        fn(p->obj214, p->c250);
    }

    prev = 0;
    old = IME;
    IME = 0;
    if (old != 0) {
        prev = 1;
    }

    if (p->flag260) {
        Node *n = p->list254;
        while (n->link != 0) {
            n = n->link;
        }
        if (n != 0) {
            do {
                Node *nx = n->next;
                n->next = 0;
                n->link = 0;
                n->extra = 0;
                n = nx;
            } while (n != 0);
        }
    } else {
        Node *r3 = p->link258;
        if (r3 != 0) {
            Node *r4 = r3->next;
            if (r4 != 0) {
                Node *r2 = r4->next;
                r3->next = 0;
                if (r2 != 0) {
                    r3->next = r2;
                    r2->link = r3;
                }
                r4->link = 0;
                r4->next = 0;
            }
        } else {
            Node *r3b = p->list254;
            if (r3b != 0) {
                r3b->link = 0;
                p->list254 = 0;
            }
        }
    }

    IME = (uint16_t)prev;

    func_02035fd0((uint8_t *)p + 0x18c);
    func_02056db0(self);
    return self;
}
