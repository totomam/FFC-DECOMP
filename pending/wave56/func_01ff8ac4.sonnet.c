/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);

struct Node {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    Node *next;
    uint32_t pad8;
    uint32_t word;
};

struct Obj {
    uint32_t f00, f04, f08, f0c;
    uint8_t f10; uint8_t f11 : 8; uint8_t f12 : 8; uint8_t f13;
    Node *head;
    Node **tail;
    uint8_t lock[4];
};

struct Guard {
    uint32_t r0, r1;
    void *lk;
    uint8_t flag;
    Guard(Obj *p) { lk = &p->lock; flag = p->f12; if (flag) func_0208763c(lk); }
    ~Guard() { if (flag) func_02087678(lk); }
};

extern "C" void func_01ff8ac4(Obj *p)
{
    Guard g(p);
    Node **link = &p->head;
    Node *n = p->head;
    while (n != 0) {
        if ((int8_t)n->word == 0) {
            n->v2();
        }
        if ((int8_t)n->word == 2) {
            *link = n->next;
            if (n) n->v1();
            n = *link;
        } else {
            link = &n->next;
            n = n->next;
        }
    }

    p->tail = link;

    if (p->f11 != 0) {
        int empty;
        uint8_t t = p->f12;
        if (t) func_0208763c(&p->lock);
        empty = (p->head == 0);
        if (t) func_02087678(&p->lock);
        if (empty) p->f0c = (p->f0c & 0xffffff00) | 2;
    }
}
