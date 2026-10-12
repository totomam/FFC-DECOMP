#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void *func_02035fd0(void *object);
extern void func_02056db0(void *p);
extern char data_ov009_021afd64[];

typedef struct Node {
    struct Node *f0;
    struct Node *f1;
    uint32_t f2;
} Node;

typedef struct Obj {
    void *vt;
    uint8_t pad0[0x7c];
    void *slots[8];
    void *tail;
    uint8_t pad1[0x214 - 0xa4];
    void *obj214;
    uint8_t pad2[0x250 - 0x218];
    void *arg250;
    Node head254;
    uint8_t flag260;
} Obj;

void *func_ov009_0219b4d8(void *a)
{
    Obj *o = (Obj *)a;
    uint8_t i;
    uint16_t flag;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    void *obj;
    void *n;
    Node *r3;
    Node *head;

    o->vt = data_ov009_021afd64;

    for (i = 0; i < 8; i++) {
        n = o->slots[i];
        if (n != 0) {
            if (n != 0) {
                func_0205d620(n);
                func_02056844(n);
            }
            o->slots[i] = 0;
        }
    }

    n = o->tail;
    if (n != 0) {
        if (n != 0) {
            func_0205d620(n);
            func_02056844(n);
        }
        o->tail = 0;
    }

    obj = o->obj214;
    if (obj != 0 && *(void **)((uint8_t *)o + 0x25c) != 0) {
        ((void (*)(void *, void *))(((void **)*(void **)obj)[8]))(obj, o->arg250);
    }

    flag = 0;
    {
        uint16_t old = *ime;
        *ime = 0;
        if (old != 0) {
            flag = 1;
        }
    }

    if (o->flag260) {
        r3 = &o->head254;
        while (r3->f1 != 0) {
            r3 = r3->f1;
        }
        if (r3 != 0) {
            do {
                Node *nx = r3->f0;
                r3->f0 = 0;
                r3->f1 = 0;
                r3->f2 = 0;
                r3 = nx;
            } while (r3 != 0);
        }
    } else {
        head = o->head254.f1;
        if (head != 0) {
            Node *x = head->f0;
            if (x != 0) {
                Node *nx = x->f0;
                head->f0 = 0;
                if (nx != 0) {
                    head->f0 = nx;
                    nx->f1 = head;
                }
                x->f1 = 0;
                x->f0 = 0;
            }
        } else {
            r3 = o->head254.f0;
            if (r3 != 0) {
                r3->f1 = 0;
                o->head254.f0 = 0;
            }
        }
    }

    (void)*ime;
    *ime = flag;

    func_02035fd0((uint8_t *)o + 0x18c);
    func_02056db0(a);
    func_02056844(a);
    return a;
}
