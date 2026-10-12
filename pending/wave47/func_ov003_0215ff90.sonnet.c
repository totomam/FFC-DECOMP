#include "ffc/types.h"

extern char data_ov003_0217a368;
extern void func_ov003_02152ba0(void *arg);
extern void func_02056844(void *obj);

typedef struct Node {
    struct Node *f0;
    struct Node *f4;
    struct Node *f8;
} Node;

typedef struct List {
    Node *f0;
    Node *f4;
    Node *f8;
    uint8_t flag;
} List;

typedef struct Obj {
    void *vt;
    uint8_t pad1[0x14 - 4];
    List list;
    uint8_t pad2[0x28 - 0x24];
    char *p28;
    uint8_t b2c;
} Obj;

Obj *func_ov003_0215ff90(Obj *r4)
{
    List *l;
    Node *p;
    uint32_t r1;
    uint32_t old;

    r4->vt = (void *)&data_ov003_0217a368;
    if (r4->b2c == 0) {
        char *q = *(char **)(r4->p28 + 0x80);
        func_ov003_02152ba0(*(void **)(q + 0x180));
    }

    l = &r4->list;
    old = *(volatile uint16_t *)0x04000208;
    r1 = 0;
    *(volatile uint16_t *)0x04000208 = 0;
    if (old != 0) {
        r1 = 1;
    }

    if (l->flag != 0) {
        p = (Node *)l;
        if (l->f4 != 0) {
            do {
                p = p->f4;
            } while (p->f4 != 0);
        }
        while (p != 0) {
            Node *next = p->f0;
            p->f0 = 0;
            p->f4 = 0;
            p->f8 = 0;
            p = next;
        }
    } else {
        Node *r3 = l->f4;
        if (r3 != 0) {
            Node *r5 = r3->f0;
            if (r5 != 0) {
                Node *r2 = r5->f0;
                r3->f0 = 0;
                if (r2 != 0) {
                    r3->f0 = r2;
                    r2->f4 = r3;
                }
                r5->f4 = 0;
                r5->f0 = 0;
            }
        } else {
            Node *r3b = l->f0;
            if (r3b != 0) {
                r3b->f4 = 0;
                l->f0 = 0;
            }
        }
    }

    (void)*(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = r1;
    func_02056844(r4);
    return r4;
}
