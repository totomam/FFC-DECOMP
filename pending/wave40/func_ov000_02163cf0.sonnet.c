#include "ffc/types.h"

typedef struct Node {
    void *a;
    void *buf;
    uint32_t size;
    struct Node *next;
} Node;

typedef struct Ctl {
    Node *head;
    int32_t total;
} Ctl;

extern Ctl data_ov000_02170964;
extern void *func_ov000_0215917c(uint32_t a, uint32_t b);
extern uint32_t func_ov000_021591a8(uint32_t a, void *p, uint32_t b);
extern void func_020849f4(void *dst, void *src, uint32_t n);

uint32_t func_ov000_02163cf0(void *p0, void *p1, int32_t p2)
{
    Ctl *c = &data_ov000_02170964;
    Node **pp;
    Node *n;
    int32_t sum;

    sum = c->total + p2;
    pp = &data_ov000_02170964.head;
    if (sum > 0x8000) {
        return 0;
    }

    n = c->head;
    if (n != 0) {
        do {
            pp = &n->next;
            n = n->next;
        } while (n != 0);
    }

    *pp = func_ov000_0215917c(4, 0x10);
    if (*pp == 0) {
        return 0;
    }

    (*pp)->buf = func_ov000_0215917c(4, p2);
    if ((*pp)->buf == 0) {
        func_ov000_021591a8(4, *pp, 0x10);
        *pp = 0;
        return 0;
    }

    (*pp)->a = p0;
    (*pp)->size = p2;
    (*pp)->next = 0;
    func_020849f4(p1, (*pp)->buf, p2);
    c->total += p2;
    return 1;
}
