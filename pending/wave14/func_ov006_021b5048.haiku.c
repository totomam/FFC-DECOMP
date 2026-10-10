#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);

typedef struct Node {
    uint32_t a;
    struct Node *next;
    struct Node *self;
    uint32_t d;
} Node;

Node *func_ov006_021b5048(void)
{
    Node *p = (Node *)func_ov006_021b49e4(0x10, 4);
    p->a = 0;
    p->next = (Node *)((uint8_t *)p + 8);
    p->self = p;
    p->d = 0;
    return p;
}
