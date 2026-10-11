#include "ffc/types.h"

extern void *func_02077b70(void *list, int flag);
extern void func_02077b34(void *list, void *node);
extern void func_0207ac18(void *p);
extern uint8_t data_0213e6a4[];

typedef struct Node {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
} Node;

void *func_02079e1c(uint32_t idx, void *owner)
{
    uint8_t *base = data_0213e6a4 + idx * 0x24;
    Node *n = (Node *)func_02077b70(base + 0xc, 0);
    if (n == 0) {
        return 0;
    }
    func_02077b34(base + 0xc, n);
    n->fc = owner;
    ((Node *)owner)->f8 = n;
    func_0207ac18(n->f8);
    return n->f8;
}
