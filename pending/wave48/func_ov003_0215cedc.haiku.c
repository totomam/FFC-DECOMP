#include "ffc/types.h"

extern uint32_t data_ov003_0217a2fc;
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *next;
    struct Node *link;
    void *extra;
} Node;

typedef struct Obj {
    void *vt;
    uint8_t pad04[0x30];
    Node head;
    uint8_t f40;
    uint8_t pad41[0x13];
    void *f54;
    void *f58;
    void *f5c;
    void *f60;
} Obj;

#define DTOR_SLOT(slot) \
    if (slot) { \
        if (slot) { ((void (*)(void *))((void **)*(void **)(slot))[1])(slot); } \
        slot = 0; \
    }

void *func_ov003_0215cedc(void *self)
{
    Obj *p = (Obj *)self;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint16_t old;
    int flag;

    p->vt = (void *)&data_ov003_0217a2fc;

    DTOR_SLOT(p->f54)
    DTOR_SLOT(p->f58)
    DTOR_SLOT(p->f5c)
    DTOR_SLOT(p->f60)

    if (p->head.extra) {
        ((uint8_t *)p->head.extra)[0xe4] = 0;
    }

    old = *ime;
    *ime = 0;
    flag = 0;
    if (old) {
        flag = 1;
    }

    if (p->f40) {
        Node *r3 = (Node *)&p->head;
        Node *r1 = r3->link;
        while (r1) {
            r3 = r1;
            r1 = r1->link;
        }
        if (r3) {
            Node *r2;
            do {
                r2 = r3->next;
                r3->next = 0;
                r3->link = 0;
                r3->extra = 0;
                r3 = r2;
            } while (r2);
        }
    } else {
        Node *r3 = p->head.link;
        if (r3) {
            Node *r5 = r3->next;
            if (r5) {
                Node *r2 = r5->next;
                r3->next = 0;
                if (r2) {
                    r3->next = r2;
                    r2->link = r3;
                }
                r5->link = 0;
                r5->next = 0;
            }
        } else {
            Node *r2 = p->head.next;
            if (r2) {
                r2->link = 0;
                p->head.next = 0;
            }
        }
    }

    old = *ime;
    *ime = flag;
    func_02056844(p);
    return p;
}
