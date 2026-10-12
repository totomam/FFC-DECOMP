/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

typedef void (*VFn)(void *self);

typedef struct Node {
    VFn *vt;
    struct Node *next;
    uint32_t pad8;
    uint32_t word;
} Node;

typedef struct Obj {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint8_t f10;
    uint8_t f11;
    uint8_t f12;
    uint8_t f13;
    Node *head;
    Node **tail;
    uint8_t lock[4];
} Obj;

typedef struct Guard {
    void *lk;
    uint8_t flag;
} Guard;

void func_01ff8ac4(Obj *p)
{
    volatile Guard g;
    Node *n;
    Node **link;

    g.lk = &p->lock;
    g.flag = p->f12;
    if (g.flag != 0) {
        func_0208763c(g.lk);
    }

    link = &p->head;
    n = p->head;
    while (n != 0) {
        if ((int8_t)n->word == 0) {
            n->vt[2](n);
        }
        if ((int8_t)n->word == 2) {
            *link = n->next;
            n->vt[1](n);
            n = *link;
        } else {
            link = &n->next;
            n = n->next;
        }
    }

    p->tail = link;

    if (p->f11 != 0) {
        int empty;
        if (p->f12 != 0) {
            func_0208763c(&p->lock);
        }
        empty = (p->head == 0);
        if (p->f12 != 0) {
            func_02087678(&p->lock);
        }
        if (empty) {
            p->f0c = (p->f0c & 0xffffff00) | 2;
        }
    }

    if (g.flag != 0) {
        func_02087678(g.lk);
    }
}
