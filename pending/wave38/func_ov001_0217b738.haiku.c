#include "ffc/types.h"

typedef struct Node {
    uint32_t a;
    uint32_t b;
    uint32_t d;
    uint32_t e;
    uint32_t g;
    uint32_t z14;
    uint32_t f18;
    uint32_t z1c;
    struct Node *next;
} Node;

extern void *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov001_0217ef6c(void *p, void *q);
extern uint32_t data_ov001_02190ed4[];

uint32_t func_ov001_0217b738(uint32_t **p, uint32_t a, uint32_t b, uint32_t *out, uint32_t d, uint32_t e, uint32_t g)
{
    uint32_t *base = (uint32_t *)*p;
    Node *node = (Node *)func_ov000_021653d4(0x24);

    if (node == 0) {
        func_ov001_0217ef6c(p, data_ov001_02190ed4);
        return 1;
    }

    node->a = a;
    node->b = b;
    node->d = d;
    node->z14 = 0;
    if (a == 0) {
        node->f18 = 1;
    } else {
        int32_t old = ((int32_t *)base)[0x8d];
        ((int32_t *)base)[0x8d] = old + 1;
        node->f18 = old;
        if (((int32_t *)base)[0x8d] < 2) {
            ((int32_t *)base)[0x8d] = 2;
        }
    }
    node->z1c = 0;
    node->e = e;
    node->g = g;
    node->next = (Node *)base[0x171];
    base[0x171] = (uint32_t)node;
    *out = (uint32_t)node;
    return 0;
}
